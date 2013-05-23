<?php
/**
 * @file
 * saas_event.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function saas_event_default_rules_configuration() {
  $items = array();
  $items['rules__h'] = entity_import('rules_config', '{ "rules__h" : {
      "LABEL" : "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0430 \\u043d\\u0430 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0443 \\u0440\\u0435\\u0434\\u0430\\u043a\\u0442\\u0438\\u0440\\u043e\\u0432\\u0430\\u043d\\u0438\\u0435",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "eck" ],
      "ON" : [ "documents_update" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "documents" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "documents:field-total-weight-zd" ], "value" : "0" } },
        { "data_set" : { "data" : [ "documents:field-cost-deliverydos-zd" ], "value" : "0" } },
        { "component_rules_calculated_products" : { "zadost" : [ "documents" ] } },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "documents:field-cost-delivery-zd" ],
              "op" : "+",
              "input_2" : [ "documents:field-cost-deliverydos-zd" ]
            },
            "PROVIDE" : { "result" : { "result_prise_sdost" : "\\u0420\\u0430\\u0441\\u0447\\u0435\\u0442 \\u0441\\u0442\\u043e\\u0438\\u043c\\u043e\\u0441\\u0442\\u0438 \\u0441 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u043e\\u0439" } }
          }
        },
        { "data_set" : {
            "data" : [ "documents:field-cost-deliverydos-zd" ],
            "value" : [ "result-prise-sdost" ]
          }
        },
        { "data_set" : {
            "data" : [ "documents:field-summa-raschet-zd" ],
            "value" : [ "result-prise-sdost" ]
          }
        },
        { "redirect" : { "url" : "documents\\/appdelivery\\/[documents:id]\\/edit" } },
        { "data_set" : {
            "data" : [ "documents:field-maxtime-zd" ],
            "value" : { "select" : "documents:created", "date_offset" : { "value" : 7200 } }
          }
        }
      ]
    }
  }');
  $items['rules_calculated_products'] = entity_import('rules_config', '{ "rules_calculated_products" : {
      "LABEL" : "\\u0420\\u0430\\u0441\\u0447\\u0435\\u0442 \\u0442\\u043e\\u0432\\u0430\\u0440\\u0430",
      "PLUGIN" : "action set",
      "TAGS" : [ "\\u0422\\u043e\\u0432\\u0430\\u0440" ],
      "REQUIRES" : [ "rules_conditional", "rules" ],
      "USES VARIABLES" : { "zadost" : {
          "label" : "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0430 \\u043d\\u0430 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0443",
          "type" : "documents"
        }
      },
      "ACTION SET" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "zadost" ],
                  "type" : "documents",
                  "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
                }
              },
              "DO" : [
                { "LOOP" : {
                    "USING" : { "list" : [ "zadost:field-products-zd" ] },
                    "ITEM" : { "tek_tovar" : "\\u0422\\u0435\\u043a\\u0443\\u0449\\u0438\\u0439 \\u0422\\u043e\\u0432\\u0430\\u0440" },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "entity_is_of_bundle" : {
                                "entity" : [ "tek-tovar" ],
                                "type" : "product",
                                "bundle" : { "value" : { "product" : "product" } }
                              }
                            },
                            "DO" : [
                              { "data_calc" : {
                                  "USING" : {
                                    "input_1" : [ "tek-tovar:field-weight-product" ],
                                    "op" : "*",
                                    "input_2" : [ "tek-tovar:field-quantity-product" ]
                                  },
                                  "PROVIDE" : { "result" : { "result_weightsquant" : "\\u041a\\u043e\\u043b\\u0438\\u0447\\u0435\\u0441\\u0442\\u0432\\u043e \\u043d\\u0430 \\u0432\\u0435\\u0441" } }
                                }
                              },
                              { "data_calc" : {
                                  "USING" : {
                                    "input_1" : [ "tek-tovar:field-quantity-product" ],
                                    "op" : "*",
                                    "input_2" : [ "tek-tovar:field-price-product" ]
                                  },
                                  "PROVIDE" : { "result" : { "result_qunt_price" : "\\u041a\\u043e\\u043b\\u0438\\u0447\\u0435\\u0441\\u0442\\u0432\\u043e \\u043d\\u0430 \\u0446\\u0435\\u043d\\u0443" } }
                                }
                              },
                              { "data_calc" : {
                                  "USING" : {
                                    "input_1" : [ "result-weightsquant" ],
                                    "op" : "+",
                                    "input_2" : [ "zadost:field-total-weight-zd" ]
                                  },
                                  "PROVIDE" : { "result" : { "result_weight_zd" : "\\u0420\\u0430\\u0441\\u0447\\u0435\\u0442 \\u043e\\u0431\\u0449\\u0435\\u0433\\u043e \\u0432\\u0435\\u0441\\u0430" } }
                                }
                              },
                              { "data_set" : {
                                  "data" : [ "zadost:field-total-weight-zd" ],
                                  "value" : [ "result-weight-zd" ]
                                }
                              },
                              { "data_calc" : {
                                  "USING" : {
                                    "input_1" : [ "zadost:field-cost-deliverydos-zd" ],
                                    "op" : "+",
                                    "input_2" : [ "result-qunt-price" ]
                                  },
                                  "PROVIDE" : { "result" : { "result_prise_sdost" : "\\u0420\\u0430\\u0441\\u0447\\u0435\\u0442 \\u0441\\u0442\\u043e\\u0438\\u043c\\u043e\\u0441\\u0442\\u0438 \\u0441 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u043e\\u0439" } }
                                }
                              },
                              { "data_set" : {
                                  "data" : [ "zadost:field-cost-deliverydos-zd" ],
                                  "value" : [ "result-prise-sdost" ]
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_comission_create_zd'] = entity_import('rules_config', '{ "rules_comission_create_zd" : {
      "LABEL" : "\\u041a\\u043e\\u043c\\u0438\\u0441\\u0441\\u0438\\u044f \\u043f\\u0440\\u0438 \\u0441\\u043e\\u0437\\u0434\\u0430\\u043d\\u0438\\u0438 \\u0437\\u0430\\u044f\\u0432\\u043a\\u0438",
      "PLUGIN" : "action set",
      "TAGS" : [ "\\u043a\\u043e\\u043c\\u0438\\u0441\\u0441\\u0438\\u0438" ],
      "REQUIRES" : [ "rules_conditional", "rules" ],
      "USES VARIABLES" : { "documents" : {
          "label" : "\\u0414\\u043e\\u043a\\u0443\\u043c\\u0435\\u043d\\u0442\\u044b",
          "type" : "documents"
        }
      },
      "ACTION SET" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "documents" ],
                  "type" : "documents",
                  "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_is_of_bundle" : {
                          "entity" : [ "documents:field-topseller-zd" ],
                          "type" : "company",
                          "bundle" : { "value" : { "company" : "company" } }
                        }
                      },
                      "DO" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "NOT data_is_empty" : { "data" : [ "documents:field-topseller-zd:field-com-company" ] } },
                              "DO" : [
                                { "data_calc" : {
                                    "USING" : {
                                      "input_1" : [ "documents:field-cost-delivery-zd" ],
                                      "op" : "-",
                                      "input_2" : [ "documents:field-topseller-zd:field-com-company" ]
                                    },
                                    "PROVIDE" : { "result" : { "result_dosminshop" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043c\\u0438\\u043d\\u0443\\u0441 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d" } }
                                  }
                                },
                                { "entity_fetch" : {
                                    "USING" : { "type" : "variablesm", "id" : "1" },
                                    "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "\\u0418\\u0437\\u0432\\u043b\\u0435\\u043a\\u0430\\u0435\\u043c\\u0430\\u044f \\u0441\\u0443\\u0449\\u043d\\u043e\\u0441\\u0442\\u044c" } }
                                  }
                                },
                                { "CONDITIONAL" : [
                                    {
                                      "IF" : { "entity_is_of_bundle" : {
                                          "entity" : [ "entity-fetched" ],
                                          "type" : "variablesm",
                                          "bundle" : { "value" : { "fines_commission" : "fines_commission" } }
                                        }
                                      },
                                      "DO" : [
                                        { "data_calc" : {
                                            "USING" : {
                                              "input_1" : [ "result-dosminshop" ],
                                              "op" : "-",
                                              "input_2" : [ "entity-fetched:field-ksdgrn-comis" ]
                                            },
                                            "PROVIDE" : { "result" : { "resultcomksd" : "\\u041a\\u043e\\u043c\\u0438\\u0441\\u0441\\u0438\\u044f \\u041a\\u0421\\u0414" } }
                                          }
                                        },
                                        { "data_set" : { "data" : [ "documents:field-serv-ksd" ], "value" : [ "resultcomksd" ] } },
                                        { "data_calc" : {
                                            "USING" : {
                                              "input_1" : [ "documents:field-topseller-zd:field-com-company" ],
                                              "op" : "+",
                                              "input_2" : [ "entity-fetched:field-ksdgrn-comis" ]
                                            },
                                            "PROVIDE" : { "result" : { "result_zauslzerv" : "\\u0417\\u0430 \\u0443\\u0441\\u043b\\u0443\\u0433\\u0438 \\u0441\\u0435\\u0440\\u0432\\u0438\\u0441\\u0430" } }
                                          }
                                        },
                                        { "data_set" : {
                                            "data" : [ "documents:field-zausl-serv-zd" ],
                                            "value" : [ "result-zauslzerv" ]
                                          }
                                        }
                                      ]
                                    }
                                  ]
                                }
                              ]
                            },
                            { "ELSE" : [
                                { "CONDITIONAL" : [
                                    {
                                      "IF" : { "data_is_empty" : { "data" : [ "documents:field-topseller-zd:field-com-company" ] } },
                                      "DO" : [
                                        { "entity_fetch" : {
                                            "USING" : { "type" : "variablesm", "id" : "1" },
                                            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "\\u0418\\u0437\\u0432\\u043b\\u0435\\u043a\\u0430\\u0435\\u043c\\u0430\\u044f \\u0441\\u0443\\u0449\\u043d\\u043e\\u0441\\u0442\\u044c" } }
                                          }
                                        },
                                        { "CONDITIONAL" : [
                                            {
                                              "IF" : { "entity_is_of_bundle" : {
                                                  "entity" : [ "entity-fetched" ],
                                                  "type" : "variablesm",
                                                  "bundle" : { "value" : { "fines_commission" : "fines_commission" } }
                                                }
                                              },
                                              "DO" : [
                                                { "data_calc" : {
                                                    "USING" : {
                                                      "input_1" : [ "documents:field-cost-delivery-zd" ],
                                                      "op" : "-",
                                                      "input_2" : [ "entity-fetched:field-shopgrn-comis" ]
                                                    },
                                                    "PROVIDE" : { "result" : { "result_dosminshop" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043c\\u0438\\u043d\\u0443\\u0441 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d" } }
                                                  }
                                                },
                                                { "data_calc" : {
                                                    "USING" : {
                                                      "input_1" : [ "result-dosminshop" ],
                                                      "op" : "-",
                                                      "input_2" : [ "entity-fetched:field-ksdgrn-comis" ]
                                                    },
                                                    "PROVIDE" : { "result" : { "result_comksd" : "\\u041a\\u043e\\u043c\\u0438\\u0441\\u0441\\u0438\\u044f \\u041a\\u0421\\u0414" } }
                                                  }
                                                },
                                                { "data_set" : { "data" : [ "documents:field-serv-ksd" ], "value" : [ "result-comksd" ] } },
                                                { "data_calc" : {
                                                    "USING" : {
                                                      "input_1" : [ "entity-fetched:field-shopgrn-comis" ],
                                                      "op" : "+",
                                                      "input_2" : [ "entity-fetched:field-ksdgrn-comis" ]
                                                    },
                                                    "PROVIDE" : { "result" : { "result_zauslzerv" : "\\u0417\\u0430 \\u0443\\u0441\\u043b\\u0443\\u0433\\u0438 \\u0441\\u0435\\u0440\\u0432\\u0438\\u0441\\u0430" } }
                                                  }
                                                },
                                                { "data_set" : {
                                                    "data" : [ "documents:field-zausl-serv-zd" ],
                                                    "value" : [ "result-zauslzerv" ]
                                                  }
                                                }
                                              ]
                                            }
                                          ]
                                        }
                                      ]
                                    }
                                  ]
                                }
                              ]
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_created_opuser'] = entity_import('rules_config', '{ "rules_created_opuser" : {
      "LABEL" : "\\u0423\\u0441\\u0442\\u0430\\u043d\\u043e\\u0432\\u043a\\u0430 \\u043e\\u043f\\u043e\\u0432\\u0435\\u0449\\u0435\\u043d\\u0438\\u0439 \\u043f\\u0440\\u0438 \\u0441\\u043e\\u0437\\u0434\\u0430\\u043d\\u0438\\u0438 \\u043a\\u043e\\u043c\\u043f\\u0430\\u043d\\u0438\\u0438",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "rules_conditional", "eck" ],
      "ON" : [ "company_insert" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "company" ],
            "type" : "company",
            "bundle" : { "value" : { "company" : "company" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : {
                  "data" : [ "company:field-tip-company" ],
                  "value" : "\\u041a\\u0421\\u0414"
                }
              },
              "DO" : [
                { "entity_create" : {
                    "USING" : { "type" : "variablesm", "param_type" : "notifications_ksd" },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-otn-compnotif" ],
                    "value" : [ "company" ]
                  }
                }
              ]
            },
            { "ELSE" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : {
                          "data" : [ "company:field-tip-company" ],
                          "value" : "\\u041c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                        }
                      },
                      "DO" : [
                        { "entity_create" : {
                            "USING" : { "type" : "variablesm", "param_type" : "notifications_shop" },
                            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                          }
                        },
                        { "data_set" : {
                            "data" : [ "entity-created:field-otn-compnotif" ],
                            "value" : [ "company" ]
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "company:relation-employee-user" ] } },
              "DO" : [
                { "LOOP" : {
                    "USING" : { "list" : [ "company:relation-employee-user" ] },
                    "ITEM" : { "list_item" : "\\u0422\\u0435\\u043a\\u0443\\u0449\\u0438\\u0439 \\u044d\\u043b\\u0435\\u043c\\u0435\\u043d\\u0442 \\u0441\\u043f\\u0438\\u0441\\u043a\\u0430" },
                    "DO" : [
                      { "data_set" : { "data" : [ "list-item:field-otn-compuser" ], "value" : [ "company" ] } }
                    ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_konvert_number'] = entity_import('rules_config', '{ "rules_konvert_number" : {
      "LABEL" : "\\u041a\\u043e\\u043d\\u0432\\u0435\\u0440\\u0442\\u0430\\u0446\\u0438\\u044f \\u0442\\u0435\\u043b\\u0435\\u0444\\u043e\\u043d\\u0430",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "eck" ],
      "ON" : [ "company_insert", "company_update" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "company" ],
            "type" : "company",
            "bundle" : { "value" : { "company" : "company" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : [ "company:field-phone-sms:callingcode" ] },
            "PROVIDE" : { "variable_added" : { "code" : "\\u041a\\u043e\\u0434" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : [ "company:field-phone-sms:number" ] },
            "PROVIDE" : { "variable_added" : { "numb" : "\\u041d\\u043e\\u043c\\u0435\\u0440" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : "+[code:value][numb:value]" },
            "PROVIDE" : { "variable_added" : { "number" : "\\u041d\\u043e\\u043c\\u0435\\u0440" } }
          }
        },
        { "data_set" : { "data" : [ "company:field-number" ], "value" : [ "number" ] } },
        { "redirect" : { "url" : "company\\/company\\/[company:id]\\/edit" } }
      ]
    }
  }');
  $items['rules_link_set_akt_vip_rob'] = entity_import('rules_config', '{ "rules_link_set_akt_vip_rob" : {
      "LABEL" : "Rules link: \\u0410\\u043a\\u0442 \\u0432\\u044b\\u043f\\u043e\\u043b\\u043d\\u0435\\u043d\\u043d\\u044b\\u0445 \\u0440\\u0430\\u0431\\u043e\\u0442 rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "documents" : { "type" : "documents", "label" : "documents" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_check_static'] = entity_import('rules_config', '{ "rules_link_set_check_static" : {
      "LABEL" : "Rules link: \\u0421\\u0447\\u0435\\u0442 \\u0441\\u0442\\u0430\\u0442\\u0438\\u0441\\u0442\\u0438\\u043a\\u0438 rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "documents" : { "type" : "documents", "label" : "documents" } },
      "RULES" : []
    }
  }');
  $items['rules_link_set_ved_dlya_sverky'] = entity_import('rules_config', '{ "rules_link_set_ved_dlya_sverky" : {
      "LABEL" : "Rules link: \\u0412\\u0435\\u0434\\u043e\\u043c\\u043e\\u0441\\u0442\\u044c \\u0434\\u043b\\u044f \\u0441\\u0432\\u0435\\u0440\\u043a\\u0438 rules set",
      "PLUGIN" : "rule set",
      "USES VARIABLES" : { "documents" : { "type" : "documents", "label" : "documents" } },
      "RULES" : []
    }
  }');
  $items['rules_otn_k_company_notific'] = entity_import('rules_config', '{ "rules_otn_k_company_notific" : {
      "LABEL" : "\\u0423\\u0441\\u0442\\u0430\\u043d\\u043e\\u0432\\u043a\\u0430 \\u043e\\u0442\\u043d\\u043e\\u0448\\u0435\\u043d\\u0438\\u044f \\u043a \\u043a\\u043e\\u043c\\u043f\\u0430\\u043d\\u0438\\u0438 \\u043e\\u043f\\u043e\\u0432\\u0435\\u0449\\u0435\\u043d\\u0438\\u044f",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "rules_conditional", "eck" ],
      "ON" : [ "variablesm_insert" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "variablesm" ],
            "type" : "variablesm",
            "bundle" : { "value" : {
                "notifications_shop" : "notifications_shop",
                "notifications_ksd" : "notifications_ksd"
              }
            }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "variablesm:field-otn-compnotif" ],
                  "type" : "company",
                  "bundle" : { "value" : { "company" : "company" } }
                }
              },
              "DO" : [
                { "data_set" : {
                    "data" : [ "variablesm:field-otn-compnotif:field-notifications-client" ],
                    "value" : [ "variablesm" ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_otnkcompuser'] = entity_import('rules_config', '{ "rules_otnkcompuser" : {
      "LABEL" : "\\u0423\\u0441\\u0442\\u0430\\u043d\\u043e\\u0432\\u043a\\u0430 \\u043e\\u0442\\u043d\\u043e\\u0448\\u0435\\u043d\\u0438\\u044f \\u043a \\u043a\\u043e\\u043c\\u043f\\u0430\\u043d\\u0438\\u0438 \\u044e\\u0437\\u0435\\u0440\\u0430",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "rules_conditional", "eck" ],
      "ON" : [ "company_update" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "company" ],
            "type" : "company",
            "bundle" : { "value" : { "company" : "company" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "company:relation-employee-user" ] } },
              "DO" : [
                { "LOOP" : {
                    "USING" : { "list" : [ "company:relation-employee-user" ] },
                    "ITEM" : { "list_item" : "\\u0422\\u0435\\u043a\\u0443\\u0449\\u0438\\u0439 \\u044d\\u043b\\u0435\\u043c\\u0435\\u043d\\u0442 \\u0441\\u043f\\u0438\\u0441\\u043a\\u0430" },
                    "DO" : [
                      { "data_set" : { "data" : [ "list-item:field-otn-compuser" ], "value" : [ "company" ] } }
                    ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_status_dostavki'] = entity_import('rules_config', '{ "rules_status_dostavki" : {
      "LABEL" : "\\u0421\\u0442\\u0430\\u0442\\u0443\\u0441 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "\\u0441\\u0442\\u0430\\u0442\\u0443\\u0441\\u044b" ],
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "ON" : [ "flag_flagged_statdost" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-documents" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "flagging" ],
            "type" : "flagging",
            "bundle" : { "value" : { "statdost" : "statdost" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : {
                  "data" : [ "flagging:field-status-dost" ],
                  "value" : "\\u0417\\u0430\\u043a\\u0430\\u0437 \\u0437\\u0430\\u0431\\u0440\\u0430\\u043d \\u043d\\u0430 \\u0441\\u043a\\u043b\\u0430\\u0434\\u0435"
                }
              },
              "DO" : [
                { "data_set" : {
                    "data" : [ "flagged-documents:field-status-dost" ],
                    "value" : "\\u0417\\u0430\\u043a\\u0430\\u0437 \\u0437\\u0430\\u0431\\u0440\\u0430\\u043d \\u043d\\u0430 \\u0441\\u043a\\u043b\\u0430\\u0434\\u0435"
                  }
                },
                { "CONDITIONAL" : [] }
              ]
            },
            { "ELSE" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is" : {
                          "data" : [ "flagging:field-status-dost" ],
                          "value" : "\\u0421\\u043b\\u0443\\u0436\\u0431\\u0430 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438 \\u043d\\u0435 \\u0441\\u043c\\u043e\\u0433\\u043b\\u0430 \\u0437\\u0430\\u0431\\u0440\\u0430\\u0442\\u044c \\u0437\\u0430\\u043a\\u0430\\u0437 \\u043d\\u0430 \\u0441\\u043a\\u043b\\u0430\\u0434\\u0435"
                        }
                      },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "flagged-documents:field-status-dost" ],
                            "value" : "\\u0421\\u043b\\u0443\\u0436\\u0431\\u0430 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438 \\u043d\\u0435 \\u0441\\u043c\\u043e\\u0433\\u043b\\u0430 \\u0437\\u0430\\u0431\\u0440\\u0430\\u0442\\u044c \\u0437\\u0430\\u043a\\u0430\\u0437 \\u043d\\u0430 \\u0441\\u043a\\u043b\\u0430\\u0434\\u0435"
                          }
                        }
                      ]
                    },
                    { "ELSE" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "data_is" : {
                                  "data" : [ "flagging:field-status-dost" ],
                                  "value" : "\\u041d\\u0435 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u0435\\u043d\\u043e"
                                }
                              },
                              "DO" : [
                                { "data_set" : {
                                    "data" : [ "flagged-documents:field-status-dost" ],
                                    "value" : "\\u041d\\u0435 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u0435\\u043d\\u043e"
                                  }
                                }
                              ]
                            },
                            { "ELSE" : [
                                { "CONDITIONAL" : [
                                    {
                                      "IF" : { "data_is" : {
                                          "data" : [ "flagging:field-status-dost" ],
                                          "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u044f\\u0435\\u0442\\u0441\\u044f"
                                        }
                                      },
                                      "DO" : [
                                        { "data_set" : {
                                            "data" : [ "flagged-documents:field-status-dost" ],
                                            "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u044f\\u0435\\u0442\\u0441\\u044f"
                                          }
                                        }
                                      ]
                                    },
                                    { "ELSE" : [
                                        { "CONDITIONAL" : [
                                            {
                                              "IF" : { "data_is" : {
                                                  "data" : [ "flagging:field-status-dost" ],
                                                  "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u0435\\u043d \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u0443"
                                                }
                                              },
                                              "DO" : [
                                                { "data_set" : {
                                                    "data" : [ "flagged-documents:field-status-dost" ],
                                                    "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u0435\\u043d \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u0443"
                                                  }
                                                }
                                              ]
                                            },
                                            { "ELSE" : [
                                                { "CONDITIONAL" : [
                                                    {
                                                      "IF" : { "data_is" : {
                                                          "data" : [ "flagging:field-status-dost" ],
                                                          "value" : "\\u041d\\u0435 \\u043f\\u0440\\u0438\\u043d\\u044f\\u0442 \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u043e\\u043c - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0442 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                        }
                                                      },
                                                      "DO" : [
                                                        { "data_set" : {
                                                            "data" : [ "flagged-documents:field-status-dost" ],
                                                            "value" : "\\u041d\\u0435 \\u043f\\u0440\\u0438\\u043d\\u044f\\u0442 \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u043e\\u043c - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0442 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                          }
                                                        }
                                                      ]
                                                    },
                                                    { "ELSE" : [
                                                        { "CONDITIONAL" : [
                                                            {
                                                              "IF" : { "data_is" : {
                                                                  "data" : [ "flagging:field-status-dost" ],
                                                                  "value" : "\\u041d\\u0435 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u043e - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0449\\u0435\\u043d \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                                }
                                                              },
                                                              "DO" : [
                                                                { "data_set" : {
                                                                    "data" : [ "flagged-documents:field-status-dost" ],
                                                                    "value" : "\\u041d\\u0435 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u043e - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0449\\u0435\\u043d \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                                  }
                                                                }
                                                              ]
                                                            },
                                                            { "ELSE" : [
                                                                { "CONDITIONAL" : [
                                                                    {
                                                                      "IF" : { "data_is" : {
                                                                          "data" : [ "flagging:field-status-dost" ],
                                                                          "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043f\\u0435\\u0440\\u0435\\u043d\\u0435\\u0441\\u0435\\u043d\\u0430"
                                                                        }
                                                                      },
                                                                      "DO" : [
                                                                        { "data_set" : {
                                                                            "data" : [ "flagged-documents:field-status-dost" ],
                                                                            "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043f\\u0435\\u0440\\u0435\\u043d\\u0435\\u0441\\u0435\\u043d\\u0430"
                                                                          }
                                                                        }
                                                                      ]
                                                                    },
                                                                    { "ELSE" : [
                                                                        { "CONDITIONAL" : [
                                                                            {
                                                                              "IF" : { "data_is" : {
                                                                                  "data" : [ "flagging:field-status-dost" ],
                                                                                  "value" : "\\u041d\\u0435\\u0443\\u0434\\u0430\\u0447\\u043d\\u0430\\u044f \\u043f\\u043e\\u043f\\u044b\\u0442\\u043a\\u0430 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u0438\\u044f - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0442 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                                                }
                                                                              },
                                                                              "DO" : [
                                                                                { "data_set" : {
                                                                                    "data" : [ "flagged-documents:field-status-dost" ],
                                                                                    "value" : "\\u041d\\u0435\\u0443\\u0434\\u0430\\u0447\\u043d\\u0430\\u044f \\u043f\\u043e\\u043f\\u044b\\u0442\\u043a\\u0430 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u0438\\u044f - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0442 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                                                  }
                                                                                }
                                                                              ]
                                                                            },
                                                                            { "ELSE" : [
                                                                                { "CONDITIONAL" : [
                                                                                    {
                                                                                      "IF" : { "data_is" : {
                                                                                          "data" : [ "flagging:field-status-dost" ],
                                                                                          "value" : "\\u041d\\u0435\\u0443\\u0434\\u0430\\u0447\\u043d\\u0430\\u044f \\u043f\\u043e\\u043f\\u044b\\u0442\\u043a\\u0430 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u0438\\u044f - \\u0422\\u0440\\u0435\\u0431\\u0443\\u0435\\u0442\\u0441\\u044f \\u0443\\u0442\\u043e\\u0447\\u043d\\u0435\\u043d\\u0438\\u0435"
                                                                                        }
                                                                                      },
                                                                                      "DO" : [
                                                                                        { "data_set" : {
                                                                                            "data" : [ "flagged-documents:field-status-dost" ],
                                                                                            "value" : "\\u041d\\u0435\\u0443\\u0434\\u0430\\u0447\\u043d\\u0430\\u044f \\u043f\\u043e\\u043f\\u044b\\u0442\\u043a\\u0430 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u0438\\u044f - \\u0422\\u0440\\u0435\\u0431\\u0443\\u0435\\u0442\\u0441\\u044f \\u0443\\u0442\\u043e\\u0447\\u043d\\u0435\\u043d\\u0438\\u0435"
                                                                                          }
                                                                                        }
                                                                                      ]
                                                                                    },
                                                                                    { "ELSE" : [
                                                                                        { "CONDITIONAL" : [
                                                                                            {
                                                                                              "IF" : { "data_is" : {
                                                                                                  "data" : [ "flagging:field-status-dost" ],
                                                                                                  "value" : "\\u041d\\u0435\\u0432\\u0435\\u0440\\u043d\\u044b\\u0439 \\u0430\\u0434\\u0440\\u0435\\u0441 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438 - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0442 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                                                                }
                                                                                              },
                                                                                              "DO" : [
                                                                                                { "data_set" : {
                                                                                                    "data" : [ "flagged-documents:field-status-dost" ],
                                                                                                    "value" : "\\u041d\\u0435\\u0432\\u0435\\u0440\\u043d\\u044b\\u0439 \\u0430\\u0434\\u0440\\u0435\\u0441 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438 - \\u0412\\u043e\\u0437\\u0432\\u0440\\u0430\\u0442 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d"
                                                                                                  }
                                                                                                }
                                                                                              ]
                                                                                            },
                                                                                            { "ELSE" : [
                                                                                                { "CONDITIONAL" : [
                                                                                                    {
                                                                                                      "IF" : { "data_is" : {
                                                                                                          "data" : [ "flagging:field-status-dost" ],
                                                                                                          "value" : "\\u0422\\u0440\\u0435\\u0431\\u0443\\u0435\\u0442\\u0441\\u044f \\u0443\\u0442\\u043e\\u0447\\u043d\\u0435\\u043d\\u0438\\u0435 \\u0438\\u043b\\u0438 \\u0434\\u043e\\u043f\\u043e\\u043b\\u043d\\u0438\\u0442\\u0435\\u043b\\u044c\\u043d\\u0430\\u044f \\u0438\\u043d\\u0444\\u043e\\u0440\\u043c\\u0430\\u0446\\u0438\\u044f"
                                                                                                        }
                                                                                                      },
                                                                                                      "DO" : [
                                                                                                        { "data_set" : {
                                                                                                            "data" : [ "flagged-documents:field-status-dost" ],
                                                                                                            "value" : "\\u0422\\u0440\\u0435\\u0431\\u0443\\u0435\\u0442\\u0441\\u044f \\u0443\\u0442\\u043e\\u0447\\u043d\\u0435\\u043d\\u0438\\u0435 \\u0438\\u043b\\u0438 \\u0434\\u043e\\u043f\\u043e\\u043b\\u043d\\u0438\\u0442\\u0435\\u043b\\u044c\\u043d\\u0430\\u044f \\u0438\\u043d\\u0444\\u043e\\u0440\\u043c\\u0430\\u0446\\u0438\\u044f"
                                                                                                          }
                                                                                                        }
                                                                                                      ]
                                                                                                    }
                                                                                                  ]
                                                                                                }
                                                                                              ]
                                                                                            }
                                                                                          ]
                                                                                        }
                                                                                      ]
                                                                                    }
                                                                                  ]
                                                                                }
                                                                              ]
                                                                            }
                                                                          ]
                                                                        }
                                                                      ]
                                                                    }
                                                                  ]
                                                                }
                                                              ]
                                                            }
                                                          ]
                                                        }
                                                      ]
                                                    }
                                                  ]
                                                }
                                              ]
                                            }
                                          ]
                                        }
                                      ]
                                    }
                                  ]
                                }
                              ]
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "flagging:field-comstdost" ] } },
              "DO" : [
                { "variable_add" : {
                    "USING" : {
                      "type" : "text",
                      "value" : "[site:current-date]\\r\\n[flagging:field-comstdost]\\r\\n\\r\\n[flagged-documents:field_prim_ksd]\\r\\n"
                    },
                    "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "flagged-documents:field-prim-ksd" ],
                    "value" : [ "variable-added" ]
                  }
                }
              ]
            }
          ]
        },
        { "flag_unflagdocuments" : {
            "flag" : "statdost",
            "documents" : [ "flagged-documents" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 0
          }
        },
        { "redirect" : { "url" : [ "site:current-page:url" ] } }
      ]
    }
  }');
  $items['rules_status_oplaty_ksd'] = entity_import('rules_config', '{ "rules_status_oplaty_ksd" : {
      "LABEL" : "\\u0421\\u0442\\u0430\\u0442\\u0443\\u0441 \\u043e\\u043f\\u043b\\u0430\\u0442\\u044b \\u041a\\u0421\\u0414",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "\\u0441\\u0442\\u0430\\u0442\\u0443\\u0441\\u044b" ],
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "ON" : [ "flag_flagged_statusoplksd" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-documents" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        },
        { "AND" : [
            { "entity_is_of_bundle" : {
                "entity" : [ "flagging" ],
                "type" : "flagging",
                "bundle" : { "value" : { "statusoplksd" : "statusoplksd" } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "flagging:field-status-oplatiksd" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "\\u041d\\u0435 \\u043e\\u043f\\u043b\\u0430\\u0447\\u0435\\u043d\\u043e" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041d\\u0435 \\u043e\\u043f\\u043b\\u0430\\u0447\\u0435\\u043d\\u043e"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u0423\\u0436\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d\\u043e\\u043c" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u0423\\u0436\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d\\u043e\\u043c"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u044f\\u0435\\u0442\\u0441\\u044f" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043b\\u044f\\u0435\\u0442\\u0441\\u044f"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043e\\u043f\\u043b\\u0430\\u0442\\u044b \\u043f\\u0435\\u0440\\u0435\\u043d\\u0435\\u0441\\u0435\\u043d\\u0430" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u0414\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043e\\u043f\\u043b\\u0430\\u0442\\u044b \\u043f\\u0435\\u0440\\u0435\\u043d\\u0435\\u0441\\u0435\\u043d\\u0430"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041d\\u0435\\u0443\\u0434\\u0430\\u0447\\u043d\\u0430\\u044f \\u043f\\u043e\\u043f\\u044b\\u0442\\u043a\\u0430 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u0438\\u044f - \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043f\\u0435\\u0440\\u0435\\u043d\\u0435\\u0441\\u0435\\u043d\\u0430" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041d\\u0435\\u0443\\u0434\\u0430\\u0447\\u043d\\u0430\\u044f \\u043f\\u043e\\u043f\\u044b\\u0442\\u043a\\u0430 \\u0432\\u0440\\u0443\\u0447\\u0435\\u043d\\u0438\\u044f - \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0430 \\u043f\\u0435\\u0440\\u0435\\u043d\\u0435\\u0441\\u0435\\u043d\\u0430"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u0411\\u0443\\u0434\\u0435\\u0442 \\u043e\\u0442\\u043f\\u0440\\u0430\\u0432\\u043b\\u0435\\u043d\\u0430 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d \\u043f\\u043e \\u0411\\u0435\\u0437\\u043d\\u0430\\u043b\\u0443" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u0411\\u0443\\u0434\\u0435\\u0442 \\u043e\\u0442\\u043f\\u0440\\u0430\\u0432\\u043b\\u0435\\u043d\\u0430 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d \\u043f\\u043e \\u0411\\u0435\\u0437\\u043d\\u0430\\u043b\\u0443"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041e\\u0442\\u043f\\u0440\\u0430\\u0432\\u043b\\u0435\\u043d\\u0430 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d \\u043f\\u043e \\u0411\\u0435\\u0437\\u043d\\u0430\\u043b\\u0443" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041e\\u0442\\u043f\\u0440\\u0430\\u0432\\u043b\\u0435\\u043d\\u0430 \\u0432 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d \\u043f\\u043e \\u0411\\u0435\\u0437\\u043d\\u0430\\u043b\\u0443"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043a\\u0443\\u0440\\u044c\\u0435\\u0440\\u043e\\u043c \\u043e\\u0442 \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u0430" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043a\\u0443\\u0440\\u044c\\u0435\\u0440\\u043e\\u043c \\u043e\\u0442 \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u0430"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041d\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043e\\u0442 \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u0430" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041d\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043e\\u0442 \\u0437\\u0430\\u043a\\u0430\\u0437\\u0447\\u0438\\u043a\\u0430"
                      }
                    }
                  ]
                }
              }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "flagging:field-comstdost" ] } },
              "DO" : [
                { "variable_add" : {
                    "USING" : {
                      "type" : "text",
                      "value" : "[site:current-date]\\r\\n[flagging:field-comstdost]\\r\\n\\r\\n[flagged-documents:field_prim_ksd]"
                    },
                    "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "flagged-documents:field-prim-ksd" ],
                    "value" : [ "variable-added" ]
                  }
                }
              ]
            }
          ]
        },
        { "flag_unflagdocuments" : {
            "flag" : "statusoplksd",
            "documents" : [ "flagged-documents" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_status_oplaty_shop'] = entity_import('rules_config', '{ "rules_status_oplaty_shop" : {
      "LABEL" : "\\u0421\\u0442\\u0430\\u0442\\u0443\\u0441 \\u043e\\u043f\\u043b\\u0430\\u0442\\u044b \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "\\u0441\\u0442\\u0430\\u0442\\u0443\\u0441\\u044b" ],
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "ON" : [ "flag_flagged_statusoplshop" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-documents" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "flagging" ],
            "type" : "flagging",
            "bundle" : { "value" : { "statusoplshop" : "statusoplshop" } }
          }
        }
      ],
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "flagging:field-status-oplatishop" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "\\u041d\\u0435 \\u043e\\u043f\\u043b\\u0430\\u0447\\u0435\\u043d\\u043e" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041d\\u0435 \\u043e\\u043f\\u043b\\u0430\\u0447\\u0435\\u043d\\u043e"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u0423\\u0436\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d\\u043e\\u043c" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u0423\\u0436\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d\\u043e\\u043c"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043e\\u0442 \\u041a\\u0421\\u0414 \\u043f\\u043e \\u0411\\u0435\\u0437\\u043d\\u0430\\u043b\\u0443" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u0423\\u0436\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d\\u043e\\u043c"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043e\\u0442 \\u041a\\u0421\\u0414 \\u043f\\u043e \\u0411\\u0435\\u0437\\u043d\\u0430\\u043b\\u0443" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043e\\u0442 \\u041a\\u0421\\u0414 \\u043f\\u043e \\u0411\\u0435\\u0437\\u043d\\u0430\\u043b\\u0443"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043e\\u0442 \\u041a\\u0421\\u0414 \\u043d\\u0430\\u043b\\u0438\\u0447\\u043d\\u044b\\u043c\\u0438" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043e\\u0442 \\u041a\\u0421\\u0414 \\u043d\\u0430\\u043b\\u0438\\u0447\\u043d\\u044b\\u043c\\u0438"
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u041d\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d\\u043e\\u043c" },
                  "DO" : [
                    { "data_set" : {
                        "data" : [ "flagged-documents:field-status-oplati" ],
                        "value" : "\\u041d\\u0435 \\u043f\\u043e\\u043b\\u0443\\u0447\\u0435\\u043d\\u0430 \\u043c\\u0430\\u0433\\u0430\\u0437\\u0438\\u043d\\u043e\\u043c"
                      }
                    }
                  ]
                }
              }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is_empty" : { "data" : [ "flagging:field-comstdost" ] } },
              "DO" : [
                { "variable_add" : {
                    "USING" : {
                      "type" : "text",
                      "value" : "[site:current-date]\\r\\n[flagging:field-comstdost]\\r\\n\\r\\n[flagged-documents:field_prim_shop]"
                    },
                    "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "flagged-documents:field-prim-shop" ],
                    "value" : [ "variable-added" ]
                  }
                }
              ]
            }
          ]
        },
        { "flag_unflagdocuments" : {
            "flag" : "statusoplshop",
            "documents" : [ "flagged-documents" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_zay_dos'] = entity_import('rules_config', '{ "rules_zay_dos" : {
      "LABEL" : "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0430 \\u043d\\u0430 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0443",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0438" ],
      "REQUIRES" : [ "rules", "rules_conditional", "eck" ],
      "ON" : [ "documents_insert" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "documents" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "documents:field-products-zd" ] },
            "ITEM" : { "list_item" : "\\u0422\\u0435\\u043a\\u0443\\u0449\\u0438\\u0439 \\u044d\\u043b\\u0435\\u043c\\u0435\\u043d\\u0442 \\u0441\\u043f\\u0438\\u0441\\u043a\\u0430" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_is_of_bundle" : {
                        "entity" : [ "list-item" ],
                        "type" : "product",
                        "bundle" : { "value" : { "product" : "product" } }
                      }
                    },
                    "DO" : [
                      { "data_calc" : {
                          "USING" : {
                            "input_1" : [ "list-item:field-quantity-product" ],
                            "op" : "*",
                            "input_2" : [ "list-item:field-weight-product" ]
                          },
                          "PROVIDE" : { "result" : { "result_weightsquant" : "\\u041a\\u043e\\u043b\\u0438\\u0447\\u0435\\u0441\\u0442\\u0432\\u043e \\u043d\\u0430 \\u0432\\u0435\\u0441" } }
                        }
                      },
                      { "data_calc" : {
                          "USING" : {
                            "input_1" : [ "documents:field-total-weight-zd" ],
                            "op" : "+",
                            "input_2" : [ "result-weightsquant" ]
                          },
                          "PROVIDE" : { "result" : { "result_weight" : "\\u0420\\u0430\\u0441\\u0447\\u0435\\u0442 \\u043e\\u0431\\u0449\\u0435\\u0433\\u043e \\u0432\\u0435\\u0441\\u0430" } }
                        }
                      },
                      { "data_set" : {
                          "data" : [ "documents:field-total-weight-zd" ],
                          "value" : [ "result-weight" ]
                        }
                      },
                      { "data_calc" : {
                          "USING" : {
                            "input_1" : [ "list-item:field-quantity-product" ],
                            "op" : "*",
                            "input_2" : [ "list-item:field-price-product" ]
                          },
                          "PROVIDE" : { "result" : { "result_qunt_price" : "\\u041a\\u043e\\u043b\\u0438\\u0447\\u0435\\u0441\\u0442\\u0432\\u043e \\u043d\\u0430 \\u0446\\u0435\\u043d\\u0443" } }
                        }
                      },
                      { "data_calc" : {
                          "USING" : {
                            "input_1" : [ "documents:field-cost-deliverydos-zd" ],
                            "op" : "+",
                            "input_2" : [ "result-qunt-price" ]
                          },
                          "PROVIDE" : { "result" : { "result_prise_sdost" : "\\u0420\\u0430\\u0441\\u0447\\u0435\\u0442 \\u0441\\u0442\\u043e\\u0438\\u043c\\u043e\\u0441\\u0442\\u0438" } }
                        }
                      },
                      { "data_set" : {
                          "data" : [ "documents:field-cost-deliverydos-zd" ],
                          "value" : [ "result-prise-sdost" ]
                        }
                      }
                    ]
                  }
                ]
              }
            ]
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "documents:field-topseller-zd" ] } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "documents:field-topseller-zd" ],
                    "value" : [ "site:current-user:relation-employee-company:0" ]
                  }
                }
              ]
            }
          ]
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "documents:field-cost-delivery-zd" ],
              "op" : "+",
              "input_2" : [ "documents:field-cost-deliverydos-zd" ]
            },
            "PROVIDE" : { "result" : { "stsdost" : "\\u0421\\u0442\\u043e\\u0438\\u043c\\u043e\\u0441\\u0442\\u044c \\u0441 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u043e\\u0439" } }
          }
        },
        { "data_set" : {
            "data" : [ "documents:field-cost-deliverydos-zd" ],
            "value" : [ "stsdost" ]
          }
        },
        { "data_convert" : {
            "USING" : { "type" : "integer", "value" : [ "documents:created" ] },
            "PROVIDE" : { "conversion_result" : { "conversion_result" : "Conversion result" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : "[documents:id][conversion-result:value]" },
            "PROVIDE" : { "variable_added" : { "id" : "id" } }
          }
        },
        { "data_set" : { "data" : [ "documents:field-id-zd" ], "value" : [ "id" ] } },
        { "data_set" : {
            "data" : [ "documents:field-maxtime-zd" ],
            "value" : { "select" : "documents:created", "date_offset" : { "value" : 7200 } }
          }
        },
        { "data_set" : {
            "data" : [ "documents:field-qr-code" ],
            "value" : "Zakaz id[documents:field-id-zd], dostavit do [documents:field-maxtime-zd]. Sklad [documents:field-address-locproduct] to [documents:field-address-dos-zd].\\r\\nTovar:\\r\\n[documents:field-products-zd]"
          }
        },
        { "component_rules_comission_create_zd" : { "documents" : [ "documents" ] } },
        { "redirect" : { "url" : "documents\\/appdelivery\\/[documents:id]\\/edit" } }
      ]
    }
  }');
  $items['rules_zay_vz_kcd'] = entity_import('rules_config', '{ "rules_zay_vz_kcd" : {
      "LABEL" : "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0430 \\u0432\\u0437\\u044f\\u0442\\u0430 \\u043a\\u0441\\u0434",
      "PLUGIN" : "rule set",
      "TAGS" : [ "\\u043e\\u043f\\u043e\\u0432\\u0435\\u0449\\u0435\\u043d\\u0438\\u044f" ],
      "REQUIRES" : [ "rules", "rules_conditional", "php" ],
      "USES VARIABLES" : { "documents" : {
          "label" : "\\u0414\\u043e\\u043a\\u0443\\u043c\\u0435\\u043d\\u0442\\u044b",
          "type" : "documents"
        }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "documents" ],
                  "type" : "documents",
                  "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
                }
              },
              { "data_is" : {
                  "data" : [ "documents:field-avtostatus" ],
                  "value" : "\\u0417\\u0430\\u043a\\u0430\\u0437 \\u043f\\u043e\\u0441\\u0442\\u0443\\u043f\\u0438\\u043b \\u0432 \\u0441\\u043b\\u0443\\u0436\\u0431\\u0443 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438"
                }
              },
              { "AND" : [
                  { "entity_is_of_bundle" : {
                      "entity" : [ "documents:field-topseller-zd" ],
                      "type" : "company",
                      "bundle" : { "value" : { "company" : "company" } }
                    }
                  },
                  { "entity_is_of_bundle" : {
                      "entity" : [ "documents:field-field-ksd-zd" ],
                      "type" : "company",
                      "bundle" : { "value" : { "company" : "company" } }
                    }
                  },
                  { "entity_is_of_bundle" : {
                      "entity" : [ "documents:field-topseller-zd:field-notifications-client" ],
                      "type" : "variablesm",
                      "bundle" : { "value" : { "notifications_shop" : "notifications_shop" } }
                    }
                  },
                  { "entity_is_of_bundle" : {
                      "entity" : [ "documents:field-field-ksd-zd:field-notifications-client" ],
                      "type" : "variablesm",
                      "bundle" : { "value" : { "notifications_ksd" : "notifications_ksd" } }
                    }
                  }
                ]
              }
            ],
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : {
                        "data" : [
                          "documents:field-topseller-zd:field-notifications-client:field--sms-postsdshop"
                        ],
                        "value" : 1
                      }
                    },
                    "DO" : [
                      { "variable_add" : {
                          "USING" : {
                            "type" : "text",
                            "value" : [ "documents:field-topseller-zd:field-number" ]
                          },
                          "PROVIDE" : { "variable_added" : { "phone_shop" : "Phone_shop" } }
                        }
                      },
                      { "php_eval" : { "code" : "require_once(\\u0027.\\/smsclient.class.php\\u0027);\\r\\n\\r\\n$sms = new SMSclient(\\u0027+380671179330\\u0027, \\u0027QuarzPol14\\u0027, \\u0027195d0edea35afe3a083b41fe65def073b5a64407\\u0027);\\r\\n\\r\\n$id = $sms-\\u003EsendSMS(\\u0027Teleport-ds\\u0027, \\u0027[phone-shop:value]\\u0027, \\u0027 Zakaz [documents:field-id-zd] vzat v ispolnenie KSD [documents:field-field-ksd-zd] [site:current-date]\\u0027);" } }
                    ]
                  },
                  { "ELSE" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "data_is" : {
                                "data" : [
                                  "documents:field-topseller-zd:field-notifications-client:field--sms-postsdshop"
                                ],
                                "value" : 0
                              }
                            },
                            "DO" : [
                              { "entity_fetch" : {
                                  "USING" : { "type" : "variablesm", "id" : "3" },
                                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "\\u0418\\u0437\\u0432\\u043b\\u0435\\u043a\\u0430\\u0435\\u043c\\u0430\\u044f \\u0441\\u0443\\u0449\\u043d\\u043e\\u0441\\u0442\\u044c" } }
                                }
                              },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "entity_is_of_bundle" : {
                                        "entity" : [ "entity-fetched" ],
                                        "type" : "variablesm",
                                        "bundle" : { "value" : { "notifications_shop" : "notifications_shop" } }
                                      }
                                    },
                                    "DO" : [
                                      { "CONDITIONAL" : [
                                          {
                                            "IF" : { "data_is" : { "data" : [ "entity-fetched:field--sms-postsdshop" ], "value" : 1 } },
                                            "DO" : [
                                              { "variable_add" : {
                                                  "USING" : {
                                                    "type" : "text",
                                                    "value" : [ "documents:field-topseller-zd:field-number" ]
                                                  },
                                                  "PROVIDE" : { "variable_added" : { "phone_shop" : "phone-shop" } }
                                                }
                                              },
                                              { "php_eval" : { "code" : "require_once(\\u0027.\\/smsclient.class.php\\u0027);\\r\\n\\r\\n$sms = new SMSclient(\\u0027+380671179330\\u0027, \\u0027QuarzPol14\\u0027, \\u0027195d0edea35afe3a083b41fe65def073b5a64407\\u0027);\\r\\n\\r\\n$id = $sms-\\u003EsendSMS(\\u0027Teleport-ds\\u0027, \\u0027[phone-shop:value]\\u0027, \\u0027 Zakaz [documents:field-id-zd] vzat v ispolnenie KSD [documents:field-field-ksd-zd] [site:current-date]\\u0027);" } }
                                            ]
                                          }
                                        ]
                                      }
                                    ]
                                  }
                                ]
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ],
            "LABEL" : "\\u041e\\u0442\\u043f\\u0440\\u0430\\u0432\\u043a\\u0430 \\u0441\\u043c\\u0441 \\u043a\\u043e\\u0433\\u0434\\u0430 \\u0432\\u0437\\u044f\\u0442\\u0430 \\u0437\\u0430\\u044f\\u0432\\u043a\\u0430"
          }
        }
      ]
    }
  }');
  $items['rules_zayavka_vzyata'] = entity_import('rules_config', '{ "rules_zayavka_vzyata" : {
      "LABEL" : "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0430 \\u0432\\u0437\\u044f\\u0442\\u0430",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "entity_rules_reaction" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_vzyatie_zakazi" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-documents" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-documents:field-field-ksd-zd" ],
            "value" : [ "flagging-user:field-otn-compuser" ]
          }
        },
        { "data_set" : {
            "data" : [ "flagged-documents:field-avtostatus" ],
            "value" : "\\u0417\\u0430\\u043a\\u0430\\u0437 \\u043f\\u043e\\u0441\\u0442\\u0443\\u043f\\u0438\\u043b \\u0432 \\u0441\\u043b\\u0443\\u0436\\u0431\\u0443 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438"
          }
        },
        { "component_rules_zay_vz_kcd" : { "documents" : [ "flagged-documents" ] } }
      ]
    }
  }');
  $items['rules_zayavky_vernulksd'] = entity_import('rules_config', '{ "rules_zayavky_vernulksd" : {
      "LABEL" : "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0443 \\u0432\\u0435\\u0440\\u043d\\u0443\\u043b \\u041a\\u0421\\u0414",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "entity_rules_reaction" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_vzyatie_zakazi" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-documents" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "[site:current-date]\\r\\n\\u041a\\u0421\\u0414 - [flagging-user:field-name-ksd] \\u0432\\u0435\\u0440\\u043d\\u0443\\u043b\\u0430 \\u0437\\u0430\\u043a\\u0430\\u0437 \\u0432 \\u0441\\u0438\\u0441\\u0442\\u0435\\u043c\\u0443.\\r\\n\\r\\n[flagged-documents:field-prim-ksd]"
            },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "data_set" : {
            "data" : [ "flagged-documents:field-prim-ksd" ],
            "value" : [ "variable-added" ]
          }
        },
        { "data_set" : {
            "data" : [ "flagged-documents:field-avtostatus" ],
            "value" : "\\u0417\\u0430\\u043a\\u0430\\u0437 \\u0432\\u043e\\u0437\\u0432\\u0440\\u0430\\u0449\\u0435\\u043d \\u0441\\u043b\\u0443\\u0436\\u0431\\u043e\\u0439 \\u0434\\u043e\\u0441\\u0442\\u0430\\u0432\\u043a\\u0438 \\u0432 \\u0441\\u0438\\u0441\\u0442\\u0435\\u043c\\u0443"
          }
        },
        { "data_set" : { "data" : [ "flagged-documents:field-field-ksd-zd" ], "value" : [ "" ] } }
      ]
    }
  }');
  $items['rules_zd_button'] = entity_import('rules_config', '{ "rules_zd_button" : {
      "LABEL" : "\\u041a\\u043d\\u043e\\u043f\\u043a\\u0438 \\u0417\\u0430\\u043a\\u0430\\u0437\\u0430",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "\\u0417\\u0430\\u044f\\u0432\\u043a\\u0438" ],
      "REQUIRES" : [ "rules", "rules_conditional", "button_field", "flag" ],
      "ON" : [ "button_field_clicked" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entity" ],
            "type" : "documents",
            "bundle" : { "value" : { "appdelivery" : "appdelivery" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "button_field_compare_button" : {
                  "clicked_field" : [ "field" ],
                  "comparison_field_name" : "field_edit_zakaz"
                }
              },
              "DO" : [
                { "entity_fetch" : {
                    "USING" : { "type" : "documents", "id" : [ "entity:id" ] },
                    "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "\\u0418\\u0437\\u0432\\u043b\\u0435\\u043a\\u0430\\u0435\\u043c\\u0430\\u044f \\u0441\\u0443\\u0449\\u043d\\u043e\\u0441\\u0442\\u044c" } }
                  }
                },
                { "redirect" : { "url" : "documents\\/appdelivery\\/[entity-fetched:id]\\/edit" } }
              ]
            },
            { "ELSE" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "button_field_compare_button" : {
                          "clicked_field" : [ "field" ],
                          "comparison_field_name" : "field_vzyat_zakaz"
                        }
                      },
                      "DO" : [
                        { "flag_flagdocuments" : {
                            "flag" : "vzyatie_zakazi",
                            "documents" : [ "entity" ],
                            "flagging_user" : [ "site:current-user" ],
                            "permission_check" : 0
                          }
                        },
                        { "button_field_action_reload" : [] }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
