
#ifndef __TBL_TEXT_EBU_C__
#define __TBL_TEXT_EBU_C__

#include <config.h>
#include <tbl_text.h>

                                                
   
                       
   
                                                
/*
       0        1       2       3       4       5       6       7       8       9       A       B       C       D       E       F
    0x0000, 0x0118, 0x012E, 0x0172, 0x0102, 0x0116, 0x010E, 0x0218, 0x021A, 0x010A, 0x000A, 0x000B, 0x0120, 0x0139, 0x017B, 0x0143,                
    0x0105, 0x0119, 0x012F, 0x0173, 0x0103, 0x0117, 0x010F, 0x0219, 0x021B, 0x010B, 0x0147, 0x011A, 0x0121, 0x013A, 0x017C, 0x001F,                
*/
uint8 * code g_pu8TextEBUTable[EN_LANG_EBU_MAX][EN_TXT_MAX] =
{
              
    {
                         
        {"System"                },                
                                
        {"Audio setting"         },                      
        {"Stereo allowed"        },                      
        {"Forced mono"           },                  
#if DF_FORCE_STEREO
        {"Stereo only"           },                    
#endif

#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif

                        
        {"Station scan"          },                     
        {"Full scan"             },                  
        {"Manual tune"           },                    
        {"Station list"          },                    
        {"full"                  },              
        {"No DAB Station"        },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"     Alarm      "      },                  
        {"     Saved      "      },                  
        {"   Not Saved    "      },                     
        {"Alarm"                 },                 
        {"Off    "               },               
        {"Alarms        "        },                  
        {"  Alarm detail  "      },                        
        {"  Alarm volume  "      },                        
        {"Daily         "        },                  
        {"Once          "        },                 
        {"Weekdays      "        },                     
        {"Weekends      "        },                     
        {"Days: "                },                
        {"     Days:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Buzzer        "        },                   
        {"Mode: "                },                
        {"     Mode       "      },                 
        {"On            "        },               
        {"Off           "        },                
        {"Last listened "        },                         
        {" unset"                },                 
        {" set  "                },               
        {"     Preset     "      },                   
        {"Save          "        },                 
        {"Time: "                },                
        {" Set alarm time "      },                         
        {"  No time set   "      },                       
        {"  Radio Alarm   "      },                        
        {"   Alarm Off    "      },                     
#if ALARM_SET_DURATION
        {"    Duration    "      },                      
        {"Duration:"             },                      
#endif
#endif

                         

        {"Equalizer"             },                   
#ifdef AMP_FUNC_EQ
        {"Flat "                 },                  
        {"Rock"                  },                      
        {"Classic"               },                 
        {"Jazz"                  },                 
        {"Pop"                   },                  
        {"Bass"                  },                 
        {"Custom"                },                     
#else
        {"EQ off"                },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vocal"                 },                  
        {"Acoustic"              },                     

#endif
                        
        {"Prune"                 },               
        {"Prune?"                },                    
#if DATABASE_SORT_ENABLE
                        
        {"Station Order"         },               
        {"Multiplex"             },                         
        {"Alphanumeric"          },                     
        {"Active"                },                       
#endif

#if DF_CONFIG_AF
        {"Searching "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif

#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"DRC Off"               },                     
        {"DRC Low"               },                 
        {"DRC High"              },                  
#endif

                             
        {"Factory reset "        },                         
        {"Restarting...   "      },                       
        {" Factory reset? "      },                          
        {"Press 'Enter' to"      },                        
        {"confirm reset   "      },                         

                          
        {"SW version"            },                 

                           
        {"Sleep"                 },               
        {"Sleep timer"           },                       
        {"off"                   },                  
        {"Remain     "           },                   
                         
        {"Backlight"             },                   

                      
        {"Volume"                },                

                          
        {"Time setup"            },                   
        {"Set clock"             },                  
        {"Set date"              },                 
        {"Auto update"           },                    
        {"Set 12/24 hour"        },                     
        {"AM"                    },              
        {"PM"                    },              
        {"No update"             },                  
        {"From radio"            },                   
        {"Set 24 hour"           },                   
        {"Set 12 hour"           },                   
        {"    Invalid     "      },                    
        {"      Date      "      },                 

                    
        {"[No RadioText]  "      },                        
        {"Scanning...     "      },                     
        {"MHz        "           },                
        {"[No PTY]        "      },                  
        {"Connecting      "      },                       
        {"Signal error "         },                        
        {"Scanning     "         },                     
        {"[No Name]       "      },                   
        {"Playing         "      },                    
        {"Not available   "      },                         
        {"kbps"                  },                
        {"[No Time]       "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"DAB Station"           },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif

                      
        {"     Preset     "      },                        
        {"     stored     "      },                         
        {"    Preset"            },                   
        {"     empty      "      },                  
        {"Preset Recall "        },                         
        {" Preset Recall  "      },                         
        {"Preset Store  "        },                        
        {"  Preset Store  "      },                        
        {"(empty)    "           },                  
        {"Preset"                },                  

                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono    "              },                

                                                      
        {"None            "      },                 
        {"News            "      },                 
        {"Current Affairs "      },                           
        {"Information     "      },                        
        {"Sport           "      },                   
        {"Education       "      },                      
        {"Drama           "      },                  
        {"Arts            "      },                 
        {"Science         "      },                    
        {"Talk            "      },                 
        {"Pop Music       "      },                     
        {"Rock Music      "      },                      
        {"Easy Listening  "      },                          
        {"Light Classical "      },                           
        {"Classical Music "      },                           
        {"Other Music     "      },                       
        {"Weather         "      },                    
        {"Finance         "      },                    
        {"Children's      "      },                      
        {"Factual         "      },                    
        {"Religion        "      },                     
        {"Phone In        "      },                    
        {"Travel          "      },                   
        {"Leisure         "      },                    
        {"Jazz and Blues  "      },                         
        {"Country Music   "      },                         
        {"National Music  "      },                          
        {"Oldies Music    "      },                        
        {"Folk Music      "      },                      
        {"Documentary     "      },                        
        {"<Undefined>     "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Alarm Test      "      },                      
        {"Alarm - Alarm!  "      },                       
        {"Cultures        "      },                    
        {"Varied Speech   "      },                         
        {"Light Classics M"      },                           
        {"Serious Classics"      },                            
        {"Weather & Metr  "      },                           
        {"Children's Progs"      },                           
        {"Social Affairs  "      },                          
        {"Travel & Touring"      },                             
        {"Leisure & Hobby "      },                            
        {"Jazz Music      "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },                 
        {"Classic Rock    "      },                        
        {"Adult Hits      "      },                      
        {"Soft Rock       "      },                     
        {"Top 40          "      },                  
        {"Country         "      },                    
        {"Oldies          "      },                   
        {"Soft            "      },                 
        {"Nostalgia       "      },                      
        {"Jazz            "      },                 
        {"Classical       "      },                      
        {"Rhythm and Blues"      },                           
        {"Soft R & B      "      },                               
        {"Foreign Language"      },                            
        {"Religious Music "      },                           
        {"Religious Talk  "      },                          
        {"Personality     "      },                        
        {"Public          "      },                   
        {"College         "      },                    
        {"Emergency Test  "      },                          
        {"ALERT! ALERT!   "      },                       
#endif

#if ENABLE_ANNOUNCEMENT
        {"Announcement  "        },                         
        {"  Announcement  "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Alarm           "      },                   
        {"Traffic News    "      },                             
        {"Transport News  "      },                           
        {"Warning         "      },                           
        {"News            "      },                      
        {"Weather         "      },                             
        {"Event           "      },                              
        {"Special event   "      },                         
        {"Radio info      "      },                                 
        {"Sports news     "      },                        
        {"Financial news  "      },                            
#endif
#if ENABLE_MULTI_LANGUAGE
        {"Language"              },                     
        {"English"               },                    
#endif
        /* mpt plus txt
        */
        {"Power off"             },                       
#if ENABLE_COOK
        {"Timer"                 },              
        {"    Set Hour    "      },                      
        {"   Set Minute   "      },                        
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"Yes"                   },               
        {"No"                    },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"    I2SIN"             },                       
        {"   BEEPER"             },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    
#if FM_SCAN_TH
        {"Scan Setting"          },                  
        {"Strong Station"        },                        
        {"All Stations"          },                     
#endif
#if BACKLIGHT_MENU
        {"Timeout"               },                  
        {"On"                    },                     
        {" Sec"                  },                      
        {"On level"              },                  
        {"Dim level"             },                   
        {"High"                  },                  
        {"Medium"                },                    
        {"Low"                   },                 
#endif
        {"Saturday"              },              
        {"Sunday"                },              
        {"Monday"                },              
        {"Tuesday"               },              
        {"Wednesday"             },              
        {"Thursday"              },              
        {"Friday"                },              

#if !START_POWER
        {"    Update      "      },                   
        {"  Please Wait   "      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"  SNOOZE:"             },                   
        {"      MUTE      "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {"   Welcome to   "      },                    
        {" Digital Radio  "      },                         
        {"  Battery Low   "      },                     
        {"Charge completed"      },                        
        {"  Charging...   "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"   "                   },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Connected "         },                       
        {"   Pairing      "      },                    
        {"   Connecting   "      },                  
        {"  Incoming...   "      },                   
        {"  Outgoing...   "      },                   
        {"    Calling     "      },                  
#endif
        {"Auxiliary Input "      },                                     
        {"    LINE IN     "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bass          "        },                  
        {"Treble        "        },                    
        {"      Bass      "      },                  
        {"     Treble     "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },

#if ENABLE_MULTI_LANGUAGE
#if LANGUAGE_POLISH
    {
                         
        {"System"                },                

                                
        {"Ustawienia audio"      },                      
        {"Tryb stereo dozwolony" },                      
        {"Tylko mono"            },                  
#if DF_FORCE_STEREO
        {"Stereo only"           },                    
#endif

#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif


                        
        {"Skanowanie stacji"     },                     
        {"Kompletne przeszukiwanie"},                  
        {"R\x11\x63zne dostrajanie"},                    
        {"Lista stacji"          },                    
        {"Pe\x24ny"              },              
        {"Brak stacji DAB"       },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"     Alarm      "      },                  
        {"     Zapisano   "      },                  
        {"  Nie zapisano  "      },                     
        {"Alarm"                 },                 
        {"Wy\x24\x10\x63z "      },               
        {"Alarms        "        },                  
        {"Szczeg\x86\x24y alarmu"},                        
        {"G\x24o\xFCno\xFC\xFB alarmu "},                        
        {"Codziennie    "        },                  
        {"Jeden raz     "        },                 
        {"Dni powszednie"        },                     
        {"Weekendy      "        },                     
        {" Dni:"                 },                
        {"      Dni:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Brz\x11\x63zyk      "  },                   
        {"\x0Er\x86\x64\x24o: "  },                
        {"     \x0Er\x86\x64\x24o     "},                 
        {"W\x24\x10\x63z         "},               
        {"Alarm wy\x24\x10\x63zony"},                
        {"Ostatnio grane"        },                         
        {" unset"                },                 
        {" set  "                },               
        {"     Preset     "      },                   
        {"Zapisz        "        },                 
        {"Czas: "                },                
        {"Ustaw czas alarmu"     },                         
        {"   Brak czasu   "      },                       
        {" Alarm Radiowy  "      },                        
        {"Alarm wy\x24\x10\x63zony"},                     
#if ALARM_SET_DURATION
        {"    Dura\x9B\xF1o     "},                      
        {"Dura\x9B\xF1o:"        },                      
#endif
#endif

                         
        {"Wyr\x86wnywacz"        },                   
#ifdef AMP_FUNC_EQ
        {"Mieszkanie"            },                  
        {"Rock"                  },                      
        {"Klasyczny"             },                 
        {"Jazz"                  },                 
        {"Pop"                   },                  
        {"Bas"                   },                  
        {"Akustyczna"            },                     
#else
        {"EQ off"                },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vocal"                 },                  
        {"Acoustic"              },                     
#endif
                        
        {"Przyci\x10\xFB"        },               
        {"Przyci\x10\xFB?"       },                    
#if DATABASE_SORT_ENABLE
                        
        {"Kolejno\xFC\xFB stacji"},               
        {"Multipleks"            },                         
        {"Alfanumeryczne"        },                     
        {"Aktywny"               },                       
#endif

#if DF_CONFIG_AF
        {"Searching "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif

#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"DRC wy\x24."           },                     
        {"DRC niski"             },                 
        {"DRC wysoki"            },                  
#endif

                             
        {"Reset fabryczny"       },                         
        {"Wznawianie...   "      },                       
        {"Reset fabryczny?"      },                          
        {"Naci\xFCnij 'Enter', aby"},                        
        {"Zresetuj        "      },                         

                          
        {"Wersja oprogramowania" },                 

                           
        {"Czuwanie"              },               
        {"Wy\x24."               },                  
        {"Ustaw czuwanie"        },                       
        {"Pozostawa\xFB  "       },                   

                         
        {"Pod\xFCwietlenie"      },                   

                      
        {"G\x24o\xFCno\xFC\xFB"  },                

                          
        {"Ustaw czas/dat\x11"    },                   
        {"Ustaw czas"            },                  
        {"Ustaw dat\x11"         },                 
        {"Autoaktualizacja"      },                    
        {"Set 12/24 hour"        },                     
        {"AM"                    },              
        {"PM"                    },              
        {"Brak aktualizacji"     },                  
        {"Aktualizuj ze wszystkich"},                   
        {"Ustaw 24-godzinny czas"},                   
        {"Ustaw 12-godzinny czas"},                   
        {" Nieprawid\x24owy  "   },                    
        {"      Data      "      },                 

                    
        {"[Brak RadioText]"      },                        
        {"Przegl\x10\x64\x61nie... "},                     
        {"MHz        "           },                
        {"[Brak PTY]      "      },                  
        {"\x5E\x10\x63zenie        "},                       
        {"B\x24\x11\x64ny sygna\x24"},                        
        {"Przegl\x10\x64\x61nie "},                     
        {"[Brak nazwy]    "      },                   
        {"Odtwarzanie     "      },                    
        {"Niedost\x11pne   "     },                         
        {"kbps"                  },                
        {"[Brak czasu]    "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"Stacja DAB "           },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Lista stacji "      },                            
#endif

                      
        {"    Program     "      },                        
        {"Zapis zachowano "      },                         
        {"   Program"            },                   
        {"     Pusty      "      },                  
        {"Anuluj zapis  "        },                         
        {"  Anuluj zapis  "      },                         
        {"Zachowaj zapis"        },                        
        {" Zachowaj zapis "      },                        
        {"(Pusty)    "           },                  
        {"Program"               },                  

                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono    "              },                

                                                      
        {"Niezdefiniowany "      },                 
        {"Wiadomosci      "      },                 
        {"Wydarze. Biezace"      },                           
        {"Informacje      "      },                        
        {"Sport           "      },                   
        {"Edukacja        "      },                      
        {"Dramat          "      },                  
        {"Kultura         "      },                 
        {"Nauka           "      },                    
        {"Talk            "      },                 
        {"Muzyka_Pop      "      },                     
        {"Muzyka_Rock     "      },                      
        {"Muzyka_Lekka    "      },                          
        {"Muz. Klas._Lekka"      },                           
        {"Muz._Klas._Pow  "      },                           
        {"Muzyka_Inna     "      },                       
        {"Pogoda          "      },                    
        {"Finanse         "      },                    
        {"Prog._Dzieciece "      },                      
        {"Wyd._Spoleczne  "      },                    
        {"Religia         "      },                     
        {"Telefon.Udzial  "      },                    
        {"Podruze         "      },                   
        {"Czas_Wolny      "      },                    
        {"Muzyka_Jazz     "      },                         
        {"Muzyka_Country  "      },                         
        {"Muzyka_Narodowa "      },                          
        {"Muz._Archiwalna "      },                        
        {"Muzyka_Ludowa   "      },                      
        {"Dokument        "      },                        
        {"<Undefined>     "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Alarm Test      "      },                      
        {"Alarm - Alarm!  "      },                       
        {"Cultures        "      },                    
        {"Varied Speech   "      },                         
        {"Light Classics M"      },                           
        {"Serious Classics"      },                            
        {"Weather & Metr  "      },                           
        {"Children's Progs"      },                           
        {"Social Affairs  "      },                          
        {"Travel & Touring"      },                             
        {"Leisure & Hobby "      },                            
        {"Jazz Music      "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },                 
        {"Classic Rock    "      },                        
        {"Adult Hits      "      },                      
        {"Soft Rock       "      },                     
        {"Top 40          "      },                  
        {"Country         "      },                    
        {"Oldies          "      },                   
        {"Soft            "      },                 
        {"Nostalgia       "      },                      
        {"Jazz            "      },                 
        {"Classical       "      },                      
        {"Rhythm and Blues"      },                           
        {"Soft R & B      "      },                               
        {"Foreign Language"      },                            
        {"Religious Music "      },                           
        {"Religious Talk  "      },                          
        {"Personality     "      },                        
        {"Public          "      },                   
        {"College         "      },                    
        {"Emergency Test  "      },                          
        {"ALERT! ALERT!   "      },                       
#endif

#if ENABLE_ANNOUNCEMENT
        {"Announcement  "        },                         
        {"  Announcement  "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Alarm           "      },                   
        {"Traffic News    "      },                             
        {"Transport News  "      },                           
        {"Warning         "      },                           
        {"News            "      },                      
        {"Weather         "      },                             
        {"Event           "      },                              
        {"Special event   "      },                         
        {"Radio info      "      },                                 
        {"Sports news     "      },                        
        {"Financial news  "      },                            
#endif
#if ENABLE_MULTI_LANGUAGE
        {"J\x11zyk"              },                     
        {"Polski"                },                    
#endif
        /* mpt plus txt
        */
        {"Desligar"              },                       

#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"Tak"                   },               
        {"Nie"                   },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"Ustawienia skanowania" },                  
        {"Strong Station"        },                        
        {"Wszystkie stacje"      },                     
#endif
#if BACKLIGHT_MENU
        {"Koniec czasu"          },                  
        {"Na"                    },                     
        {" Dru"                  },                      
        {"Na poziomie"           },                  
        {"Poziom \xFC\x63iemniacza"},                   
        {"Wysoki"                },                  
        {"\xECrodkowy"           },                    
        {"Niska"                 },                 
#endif


        {"sobota"                },              
        {"niedziela"             },              
        {"poniedzia\x24\x65k"    },              
        {"wtorek"                },              
        {"\xFCroda"              },              
        {"czwartek"              },              
        {"pi\x11tek"             },              

#if !START_POWER
        {"  Aktualizacja  "      },                   
        {" Prosz\x1E czeka\xFB  "},                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"  SNOOZE:"             },                   
        {"      MUTE      "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {"    Witamy w    "      },                    
        {" Digital Radio  "      },                         
        {"  Battery Low   "      },                     
        {"Charge completed"      },                        
        {"  \x5E\x61\x64owanie...  "},                       

#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"   "                   },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Po\x24\x10\x63zony "},                       
        {"   Parowanie    "      },                    
        {"    \x5E\x10\x63zenie    "},                  
        {"Przychodz\x10\x63\x65... "},                   
        {"Id\xFD\x64o telefonu.."},                   
        {"   Powo\x24\61nie    " },                  
#endif
        {"     Aux In     "      },                                     
        {"    LINE IN     "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bass          "        },                  
        {"Treble        "        },                    
        {"      Bass      "      },                  
        {"     Treble     "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#if LANGUAGE_SPANISH
    {
                         
        {"Sistema"               },                

                                
        {"Configurar audio"      },                      
        {"Est\x82reo permitido"  },                      
        {"Solo mono"             },                  
#if DF_FORCE_STEREO
        {"Stereo only"           },                    
#endif


#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif



                        
        {"Escaneo de estaci\xC6n"},                     
        {"B\x88squeda completa"  },                  
        {"Sintonizaci\x86n manual"},                    
        {"Lista emisoras"        },                    
        {"Completo"              },              
        {"Sin emisora DAB"       },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"    Alarmas     "      },                  
        {"    Guardada    "      },                  
        {"   No guardada  "      },                     
        {"Alarm"                 },                 
        {"apagada"               },               
        {"Alarmas       "        },                  
        {"Detalle de alarm"      },                        
        {"Volumen De La Alarma"  },                        
        {"Diaria        "        },                  
        {"Una ve        "        },                 
        {"\x84\x61s de semana "  },                     
        {"Fin de semana "        },                     
        {"Dias: "                },                
        {"     Dias:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Tono          "        },                   
        {"Fuente:"               },                
        {"     Fuente     "      },                 
        {"Activar       "        },               
        {"Desactivar    "        },                
        {"\xC8ltima escuchada"   },                         
        {" unset"                },                 
        {" set  "                },               
        {"     Preset     "      },                   
        {"Salvar        "        },                 
        {"Hora: "                },                
        {" hora de alarma "      },                         
        {"Sin tiempo establecido"},                       
        {"Alarma de radio "      },                        
        {" Alarma apagada "      },                     
#if ALARM_SET_DURATION
        {"    Duraci\x86n    "   },                      
        {"Duraci\x86n:"          },                      
#endif

#endif

                         
        {"Igualada"              },                   
#ifdef AMP_FUNC_EQ
        {"Plano"                 },                  
        {"Rock"                  },                      
        {"Cl\x80sico"            },                 
        {"Jazz"                  },                 
        {"Popular"               },                  
        {"Bajo"                  },                 
        {"Ac\x88stico"           },                     
#else
        {"EQ off"                },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vocal"                 },                  
        {"Acoustic"              },                     
#endif
                        
        {"Recorte"               },               
        {"Recorte?"              },                    
#if DATABASE_SORT_ENABLE
                        
        {"Orden de emisoras"     },               
        {"Multicine"             },                         
        {"alfanum\x82rico"       },                     
        {"Activo"                },                       
#endif

#if DF_CONFIG_AF
        {"Searching "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif

#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"DRC desactivado"       },                     
        {"DRC bajo"              },                 
        {"DRC alto"              },                  
#endif

                             
        {"Ustawienie fabryczne"  },                         
        {"Wznawianie...   "      },                       
        {"Ustawienie fabryczne?" },                          
        {"Press 'Enter' to"      },                        
        {"confirm reset   "      },                         

                          
        {"Versi\x86n de software"},                 

                           
        {"Sleep"                 },               
        {"Def. hora sleep"       },                       
        {" Desactivado  "        },                  
        {"Rimangono   "          },                   

                         
        {"Retroiluminaci\x99n"   },                    


                      
        {"Volumen"               },                

                          
        {"Ajustar hora\xFE\x63ha"},                   
        {"Ajustar hora"          },                  
        {"Ajustar fecha"         },                 
        {"Actualizaci\x86n autom\x80tica"},                    
        {"Ajustar 12/24 horas"   },                     
        {"AM"                    },              
        {"PM"                    },              
        {"No actualizar "        },                  
        {"Actualizar de cualquiera"},                   
        {"Ajustar 24 horas"      },                   
        {"Ajustar 12 horas"      },                   
        {"    Inv\x80lida    "   },                    
        {"      fecha     "      },                 

                    
        {"[Sin radiotexto]"      },                        
        {"Buscando....    "      },                     
        {"MHz        "           },                
        {"[Sin PTY]       "      },                  
        {"Conectando...   "      },                       
        {"Segnale-error"         },                        
        {"Buscando     "         },                     
        {"[Sin nombre]    "      },                   
        {"Reproduciendo   "      },                    
        {"Non disponibile "      },                         
        {"kbps"                  },                
        {"[No Time]       "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"Estaci\x86n DAB"       },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Lista emisor."      },                            
#endif

                      
        {"    Programa    "      },                        
        {"    Guardado    "      },                         
        {"  Programa"            },                   
        {"     Vacio      "      },                  
        {"Memoria prog. "        },                         
        {" Memoria prog.  "      },                         
        {"Guardar prog.	"        },                        
        {" Guardar prog.  "      },                        
        {"(Vacio)    "           },                  
        {"Programa"              },                  

                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono    "              },                

                                                      

        {"Ninguno         "      },                 
        {"Noticias        "      },                 
        {"Magazine        "      },                           
        {"Informaci\x86n      "  },                        
        {"Deportes        "      },                   
        {"Educaci\x86n    "      },                      
        {"Drama           "      },                  
        {"Arte            "      },                 
        {"Ciencia         "      },                    
        {"Varios          "      },                 
        {"M\x88sica Pop      "   },                     
        {"M\x88sica Rock     "   },                      
        {"Grandes \x82xitos  "   },                          
        {"M\x88sica ligera   "   },                           
        {"M\x88sica cl\x80sica      "},                           
        {"M\x88sica varia    "   },                       
        {"Meteorolog\x84\x61    "},                    
        {"Econom\x84\x61        "},                    
        {"Infancia        "      },                      
        {"Sociedad        "      },                    
        {"Religi\x86n        "   },                     
        {"Opini\x86n-oyentes "   },                    
        {"Viajes          "      },                   
        {"Ocio            "      },                    
        {"M\x88sica Jazz     "   },                         
        {"M\x88sica country  "   },                         
        {"M\x88sica nacional "   },                          
        {"M\x88sica de ayer  "   },                        
        {"M\x88sica folk     "   },                      
        {"Documental      "      },                        
        {"<Indefinido>    "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Test di allarme "      },
        {"Allarme!        "      },
        {"Cultures	      "       },                    
        {"Varied Speech   "      },                         
        {"Light Classics M"      },                           
        {"Serious Classics"      },                            
        {"Weather & Metr  "      },                           
        {"Children's Progs"      },                           
        {"Social Affairs  "      },                          
        {"Travel & Touring"      },                             
        {"Leisure & Hobby "      },                            
        {"Jazz Music      "      },                      

#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },                 
        {"Classic Rock    "      },                        
        {"Adult Hits      "      },                      
        {"Soft Rock       "      },                     
        {"Top 40          "      },                  
        {"Country         "      },                    
        {"Oldies          "      },                   
        {"Soft            "      },                 
        {"Nostalgia       "      },                      
        {"Jazz            "      },                 
        {"Classical       "      },                      
        {"Rhythm and Blues"      },                           
        {"Soft R & B      "      },                               
        {"Foreign Language"      },                            
        {"Religious Music "      },                           
        {"Religious Talk  "      },                          
        {"Personality     "      },                        
        {"Public          "      },                   
        {"College         "      },                    
        {"Emergency Test  "      },                          
        {"ALERT! ALERT!   "      },                       
#endif

#if ENABLE_ANNOUNCEMENT
        {"Announcement  "        },                         
        {"  Announcement  "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Allarme         "      },                   
        {"Notizie sul tra."      },                             
        {"Notizie di tras."      },                           
        {"avvertimento    "      },                           
        {"notizie         "      },                      
        {"Weather         "      },                             
        {"tempo           "      },                              
        {"Evento speciale "      },                         
        {"Informazioni    "      },                                 
        {"Notizie sportive"      },                        
        {"Notizie finanzi."      },                            
#endif
#if ENABLE_MULTI_LANGUAGE
        {"Idioma"                },                     
        {"Espa\x9Aol"            },                    
#endif
        /* mpt plus txt
        */
        {"Apagado"               },                       

#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif

        {"S\xC4"                 },               
        {"NO"                    },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"Configuraci\x86n de escaneo"},                  
        {"Estaci\x86n fuerte"    },                        
        {"Todas las estaciones"  },                     
#endif
#if BACKLIGHT_MENU
        {"Se acab\x86 el tiempo" },                  
        {"En"                    },                     
        {" Seg"                  },                      
        {"En el nivel"           },                  
        {"Nivel de atenuador"    },                   
        {"Alto"                  },                  
        {"Medio"                 },                    
        {"Bajo"                  },                 
#endif
        {"s\x81\x62\x61\x64o"    },              
        {"domingo"               },              
        {"lunes"                 },              
        {"martes"                },              
        {"mi\x82rcoles"          },              
        {"jueves"                },              
        {"viernes"               },              


#if !START_POWER
        {"  Actualizar    "      },                   
        {"Espere por favor"      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"Repetici\x86n:"        },                   
        {"      MUTE      "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {"  Bienvenido a  "      },                    
        {"  Radio Digital "      },                         
        {"  Battery Low   "      },                     
        {"Charge completed"      },                        
        {"  Cargando...   "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Conectado "         },                       
        {" Emparejamiento "      },                    
        {"   Conectando   "      },                  
        {"  Entrante...   "      },                   
        {"  Saliente...   "      },                   
        {"    Vocaci\x86n    "   },                  
#endif
        {"Entrada auxiliar"      },                                     
        {"    LINE IN     "      },                 
        {"Placa giratoria "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bass          "        },                  
        {"Treble        "        },                    
        {"      Bass      "      },                  
        {"     Treble     "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#if LANGUAGE_NORWEGIAN
    {
                         
        {"System"                },                

                                
        {"Lydinnstilling"        },                      
        {"Stereo tillatt"        },                      
        {"Kun mono"              },                  
#if DF_FORCE_STEREO
        {"Kun stereo"            },                    
#endif

#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif



                        
        {"Stasjon scanning"      },                     
        {"Full scanning"         },                  
        {"Manuell tuning"        },                    
        {"Stasjonsliste"         },                    
        {"Full"                  },              
        {"Ikke DAB-stasjon"      },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"     Alarm      "      },                  
        {"     Lagret     "      },                  
        {"  Ikke lagret   "      },                     
        {"Alarm"                 },                 
        {"Av     "               },               
        {"Alarms        "        },                  
        {" Alarm detaljer "      },                        
        {"   Alarm volum  "      },                        
        {"Daglig        "        },                  
        {"En gang       "        },                 
        {"Ukedager      "        },                     
        {"Helgene       "        },                     
        {"Dager:"                },                
        {"     Dager:     "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Tone          "        },                   
        {"Modus:"                },                
        {"     Modus      "      },                 
        {"P\x9A            "     },               
        {"Av            "        },                
        {"Sist h\xF7rt p\x9A  "  },                         
        {" unset"                },                 
        {" set  "                },               
        {"Forh\x9Andsinnstill"   },                   
        {"Lagret        "        },                 
        {"Tid:  "                },                
        {" Hora de alarma "      },                         
        {"  No time set   "      },                       
        {"   Radioalarm   "      },                        
        {"   Alarm av     "      },                     
#if ALARM_SET_DURATION
        {"    Varighet    "      },                      
        {"Varighet:"             },                      
#endif
#endif

                         
        {"Equalizer"             },                   
#ifdef AMP_FUNC_EQ
        {"Flate"                 },                  
        {"Rock"                  },                      
        {"Classic"               },                 
        {"jazz"                  },                 
        {"Pop"                   },                  
        {"bass"                  },                 
        {"Acoustic"              },                     
#else
        {"EQ av"                 },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vokal"                 },                  
        {"Akustisk"              },                     
#endif
                        
        {"Renske"                },               
        {"Renske?"               },                    
#if DATABASE_SORT_ENABLE
                        
        {"Stasjonssekvens"       },               
        {"Multiplex"             },                         
        {"alfanumerisk"          },                     
        {"Aktiv"                 },                       
#endif
#if DF_CONFIG_AF
        {"Searching "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif
#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"DRC"                   },                  
        {"Av"                    },                     
        {"Lav"                   },                 
        {"H\xF7y"                },                  
#endif

                             
        {"Fabrikkoppsett"        },                         
        {"Omstart...      "      },                       
        {"Fabrikkoppsett? "      },                          
        {"Trykk 'Enter'til'"     },                        
        {"confirm reset   "      },                         

                          
        {"SW version"            },                 

                           
        {"Sleep"                 },               
        {"Still inn sleep"       },                       
        {"Av"                    },                  
        {"Remain     "           },                   
                         
        {"Baklyset"              },                   

                      
        {"Volum"                 },                

                          
        {"Still inn klokkeslett/dato"},                   
        {"Angi klokkeslett"      },                  
        {"Still inn dato"        },                 
        {"Auto oppdatering"      },                    
        {"Set 12/24 hour"        },                     
        {"AM"                    },              
        {"PM"                    },              
        {"Ingen oppdater."       },                  
        {"Oppdater alt  "        },                   
        {"Velg 24-timers format" },                   
        {"Velg 12-timers format" },                   
        {"    Ugyldig     "      },                    
        {"      Dato      "      },                 


                    
        {"[IngenRadioText]"      },                        
        {"Scanner...      "      },                     
        {"MHz        "           },                
        {"[Ikke PTY]      "      },                  
        {"Kobler opp     "       },                       
        {"Signalfeil   "         },                        
        {"Scanner...   "         },                     
        {"[Intet navn]    "      },                   
        {"Spiller         "      },                    
        {"Tjeneste utilgj."      },                         
        {"kbps"                  },                
        {"[Ingen tid]     "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"DAB-stasjon"           },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif

                      
        {"    Forvalg     "      },                        
        {"     lagret     "      },                         
        {"   Forvalg"            },                   
        {"      Tom       "      },                  
        {"Hent forvalg  "        },                         
        {"  Hent forvalg  "      },                         
        {"Lagre forvalg	"        },                        
        {" Lagre forvalg  "      },                        
        {"(tom)      "           },                  
        {"Forvalg"               },                  



                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DCkanal "              },                    
        {"Mono    "              },                

                                                      
        {"Ikke PTY        "      },                 
        {"Nyheter         "      },                 
        {"Aktuelt         "      },                           
        {"Informasjon     "      },                        
        {"Sport           "      },                   
        {"Undervisning    "      },                      
        {"Radioteater     "      },                  
        {"Kultur          "      },                 
        {"Vitenskap       "      },                    
        {"Underholdning   "      },                 
        {"Pop musikk      "      },                     
        {"Rock musikk     "      },                      
        {"Lett musikk     "      },                          
        {"Lett klassisk   "      },                           
        {"Klassisk musikk "      },                           
        {"Diverse musikk  "      },                       
        {"V\x87rmelding      "   },                    
        {"\x9Bkonomi         "   },                    
        {"Barneprogram    "      },                      
        {"Sosialprogram   "      },                    
        {"Religion        "      },                     
        {"Ring inn        "      },                    
        {"Reiseliv        "      },                   
        {"Fritid          "      },                    
        {"Jazz musikk     "      },                         
        {"Countrymusikk   "      },                         
        {"Nasjonal musikk "      },                          
        {"Gammelpop       "      },                        
        {"Folkemusikk     "      },                      
        {"Dokumentar      "      },                        
        {"<Undefined>     "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Alarm Test      "      },                      
        {"Alarm - Alarm!  "      },                       
        {"Kultur          "      },                    
        {"Underholdning   "      },                         
        {"Lett klassisk   "      },                           
        {"Klassisk musikk "      },                            
        {"V\x87rmelding   "      },                           
        {"Barneprogram    "      },                           
        {"Sosialprogram   "      },                          
        {"Reiseliv        "      },                             
        {"Fritid          "      },                            
        {"Jazz musikk     "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },                 
        {"Classic Rock    "      },                        
        {"Adult Hits      "      },                      
        {"Soft Rock       "      },                     
        {"Top 40          "      },                  
        {"Country         "      },                    
        {"Oldies          "      },                   
        {"Soft            "      },                 
        {"Nostalgia       "      },                      
        {"Jazz            "      },                 
        {"Classical       "      },                      
        {"Rhythm and Blues"      },                           
        {"Soft R & B      "      },                               
        {"Foreign Language"      },                            
        {"Religious Music "      },                           
        {"Religious Talk  "      },                          
        {"Personality     "      },                        
        {"Public          "      },                   
        {"College         "      },                    
        {"Emergency Test  "      },                          
        {"ALERT! ALERT!   "      },                       
#endif
#if ENABLE_ANNOUNCEMENT
        {"Announcement  "        },                         
        {"  Announcement  "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Alarm           "      },                   
        {"Traffic News    "      },                             
        {"Transport News  "      },                           
        {"Warning         "      },                           
        {"News            "      },                      
        {"Weather         "      },                             
        {"Event           "      },                              
        {"Special event   "      },                         
        {"Radio info      "      },                                 
        {"Sports news     "      },                        
        {"Financial news  "      },                            
#endif
#if ENABLE_MULTI_LANGUAGE
        {"Spr\xF1k"              },                     
        {"Norsk"                 },                    
#endif
        /* mpt plus txt
        */
        {"Sl\xF1 av"             },                       
#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif

        {"Ja"                    },               
        {"Nei"                   },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"Skanneinnstilling"     },                  
        {"Sterk stasjon"         },                        
        {"Alle stasjoner"        },                     
#endif
#if BACKLIGHT_MENU
        {"Pause"                 },                  
        {"P\xF1"                 },                     
        {" Sek"                  },                      
        {"P\xF1 niv\xF1"         },                  
        {"Dimmerniv\xF1"         },                   
        {"H\xF7y"                },                  
        {"Midten"                },                    
        {"Lav"                   },                 
#endif
        {"L\xF7rdag"             },              
        {"s\xF7ndag"             },              
        {"Mandag"                },              
        {"Tirsdag"               },              
        {"Onsdag"                },              
        {"Torsdag"               },              
        {"Fredag"                },              

#if !START_POWER
        {"    Update      "      },                   
        {" Vennligst vent "      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"  SNOOZE:"             },                   
        {"      MUTE      "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {" Velkommen til  "      },                     
        {" digital radio  "      },                         
        {"  Lavt batteri  "      },                     
        {"Charge completed"      },                        
        {"   Lading...    "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Connected "         },                       
        {"   Pairing      "      },                    
        {"   Connecting   "      },                  
        {"  Incoming...   "      },                   
        {"  Outgoing...   "      },                   
        {"    Calling     "      },                  
#endif
        {"  AUX inngang   "      },                                     
        {"    LINE IN     "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bass          "        },                  
        {"Treble        "        },                    
        {"      Bass      "      },                  
        {"     Treble     "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#if LANGUAGE_FINNISH
    {
                         
        {"P\x91\x91valikko"      },                

                                
        {"\x8A\x91nen asetus"    },                      
        {"Stereo or mono"        },                      
        {"Vain mono"             },                  
#if DF_FORCE_STEREO
        {"Vain stereo"           },                    
#endif

#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif



                        
        {"Asemahaku     "        },                     
        {"T\x91ydell selaus"     },                  
        {"Manuaali haku"         },                    
        {"Asemaluettelo"         },                    
        {"t\x91ydell"            },              
        {"Ingen DAB-st."         },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"    H\x91lytys     "   },                  
        {"  Tallennettu   "      },                  
        {" Ei tallennettu "      },                     
        {"Alarm"                 },                 
        {"Pois   "               },               
        {"   H\x91lytys    "     },                  
        {"  Alarm detail  "      },                        
        {"H\x91lytys tilavuus"   },                        
        {"P\x91ivitt\x91in    "  },                  
        {"Kerran        "        },                 
        {"Arkip\x91ivin\x91   "  },                     
        {"Viikonloppuina"        },                     
        {"Days: "                },                
        {"     Days:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Summeri       "        },                   
        {"Tila: "                },                
        {"     Tila       "      },                 
        {"P\x91\x91ll\x91        "},               
        {"Pois p\x91\x91lt\x91   "},                
        {"Viimeksi kuun."        },                         
        {" unset"                },                 
        {" set  "                },               
        {"   Muistissa    "      },                   
        {"Tallentaa     "        },                 
        {"Aika: "                },                
        {"AsetaH\x91lytysaika"   },                         
        {"Ei aika asetettu"      },                       
        {"  Radioh\x91lytys  "   },                        
        {"  H\x91lytys pois  "   },                     
#if ALARM_SET_DURATION
        {"     Kesto      "      },                      
        {"Kesto:"                },                      
#endif
#endif

                         
        {"Taajuuskorjain"        },                   
#ifdef AMP_FUNC_EQ
        {"Tasainen"              },                  
        {"Rock"                  },                      
        {"Klassinen"             },                 
        {"jazz"                  },                 
        {"Pop"                   },                  
        {"Basso"                 },                 
        {"Akustinen"             },                     
#else
        {"EQ off"                },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vocal"                 },                  
        {"Acoustic"              },                     
#endif
                        
        {"Karsinta"              },               
        {"Karsinta?"             },                    
#if DATABASE_SORT_ENABLE
                        
        {"Station Order"         },               
        {"Multiplex"             },                         
        {"Alphanumeric"          },                     
        {"Active"                },                       
#endif
#if DF_CONFIG_AF
        {"Searching "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif
#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"Off"                   },                     
        {"Low"                   },                 
        {"High"                  },                  
#endif

                             
        {"Factory reset "        },                         
        {"Uusi aloitus... "      },                       
        {"Factory reset?  "      },                          
        {"K\x91ynnistys INFO "   },                        
        {"confirm reset   "      },                         

                          
        {"SW version"            },                 

                           
        {"Uniajastin"            },               
        {"Sleep timer"           },                       
        {"off"                   },                  
        {"Remain     "           },                   

                         
        {"Backlight"             },                   

                      
        {"Tilavuus"              },                

                          
        {"Time setup"            },                   
        {"Set clock"             },                  
        {"Aseta aika"            },                 
        {"Auto update"           },                    
        {"Esitys 12/24h "        },                     
        {"AM"                    },              
        {"PM"                    },              
        {"Ei p\x91ivityst\x91 "  },                  
        {"From radio    "        },                   
        {"Set 24 hour   "        },                   
        {"Set 12 hour   "        },                   
        {"    Ep\x91kelpo    "   },                    
        {"     P\x91iv\x91t     "},                 

                    
        {"[EiRadioteksti\x91]"   },                        
        {"Skannaus...     "      },                     
        {"MHz        "           },                
        {"[ei PTY]        "      },                  
        {"Ansluter      "        },                       
        {"Signaalivirhe"         },                        
        {"Skannaus     "         },                     
        {"[Ei nime\x91]      "   },                   
        {"Peliss\x91         "   },                    
        {"Ei saatavilla   "      },                         
        {"kbps"                  },                
        {"[No Time]       "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"DAB-asema  "           },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif

                      
        {"     Preset     "      },                        
        {"     stored     "      },                         
        {"    Preset"            },                   
        {"     empty      "      },                  
        {"Preset Recall "        },                         
        {" Preset Recall  "      },                         
        {"Preset Store	"         },                        
        {"	Preset Store  "       },                        
        {"(empty)    "           },                  
        {"Preset"                },                  


                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono    "              },                

                                                      
        {"Ei m\x91\x91ritelty   "},                 
        {"Uutiset         "      },                 
        {"Ajankohtaista   "      },                           
        {"Tiedotuksia     "      },                        
        {"Urheilu         "      },                   
        {"Opetus          "      },                      
        {"Kuunnelma       "      },                  
        {"Kulttuuri       "      },                 
        {"Tiede           "      },                    
        {"Puheviihde      "      },                 
        {"Pop             "      },                     
        {"Rock            "      },                      
        {"Kevyt musiikki  "      },                          
        {"Kevyt klassinen "      },                           
        {"Klassinen       "      },                           
        {"Muu musiikki    "      },                       
        {"S\x91\x91tiedotus     "},                    
        {"Talousohjelma   "      },                    
        {"Lastenohjelma   "      },                      
        {"Yhteiskunta     "      },                    
        {"Uskonto         "      },                     
        {"Yleis\x97kontakti  "   },                    
        {"Matkailu        "      },                   
        {"Vapaa-aika      "      },                    
        {"Jazz            "      },                         
        {"Country         "      },                         
        {"Kotim. musiikki "      },                          
        {"Oldies          "      },                        
        {"Kansanmusiikki  "      },                      
        {"Dokumentti      "      },                        
        {"<Undefined>     "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Alarm Test      "      },                      
        {"Alarm Alarm!    "      },                       
        {"Kulttuurien     "      },                    
        {"Puheviihde      "      },                         
        {"Kevyt klassinen "      },                           
        {"Klassinen       "      },                            
        {"S\x91\x91tiedotus"     },                           
        {"Lastenohjelma   "      },                           
        {"Yhteiskunta     "      },                          
        {"Matkailu        "      },                             
        {"Vapaa-aika      "      },                            
        {"Jazz            "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },                 
        {"Classic Rock    "      },                        
        {"Adult Hits      "      },                      
        {"Soft Rock       "      },                     
        {"Top 40          "      },                  
        {"Country         "      },                    
        {"Oldies          "      },                   
        {"Soft            "      },                 
        {"Nostalgia       "      },                      
        {"Jazz            "      },                 
        {"Classical       "      },                      
        {"Rhythm and Blues"      },                           
        {"Soft R & B      "      },                               
        {"Foreign Language"      },                            
        {"Religious Music "      },                           
        {"Religious Talk  "      },                          
        {"Personality     "      },                        
        {"Public          "      },                   
        {"College         "      },                    
        {"Emergency Test  "      },                          
        {"ALERT! ALERT!   "      },                       
#endif
#if ENABLE_ANNOUNCEMENT
        {"Announcement  "        },                         
        {"  Announcement  "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Alarm           "      },                   
        {"Traffic News    "      },                             
        {"Transport News  "      },                           
        {"Warning         "      },                           
        {"News            "      },                      
        {"Weather         "      },                             
        {"Event           "      },                              
        {"Special event   "      },                         
        {"Radio info      "      },                                 
        {"Sports news     "      },                        
        {"Financial news  "      },                            
#endif
#if ENABLE_MULTI_LANGUAGE
        {"Kieli"                 },                     
        {"Suomi"                 },                    
#endif
        /* mpt plus txt
        */
        {"Virta pois"            },                       
#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"Tak"                   },               
        {"Nie"                   },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"Skannausasetus"        },                  
        {"Vahva asema"           },                        
        {"Kaikki asemat"         },                     
#endif
#if BACKLIGHT_MENU
        {"Aikalis\x91"           },                  
        {"P\x91\x91ll\x91"       },                     
        {" Toi"                  },                      
        {"Tasolla"               },                  
        {"Himmentimen taso"      },                   
        {"Korkea"                },                  
        {"keskimm\x91inen"       },                    
        {"Matala"                },                 
#endif
        {"lauantai"              },              
        {"sunnuntai"             },              
        {"maanantai"             },              
        {"tiistai"               },              
        {"keskiviikko"           },              
        {"torstai"               },              
        {"perjantai"             },              

#if !START_POWER
        {"    Update      "      },                   
        {"  Please Wait   "      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"  SNOOZE:"             },                   
        {"      MUTE      "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {"   Tervetuloa   "      },                     
        {"digitaaliradioon"      },                         
        {"  Low Battery   "      },                     
        {"Charge completed"      },                        
        {" Lataaminen...  "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Connected "         },                       
        {"   Pairing      "      },                    
        {"   Connecting   "      },                  
        {"  Incoming...   "      },                   
        {"  Outgoing...   "      },                   
        {"    Calling     "      },                  
#endif
        {"     AUX IN     "      },                                     
        {"    LINE IN     "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bass          "        },                  
        {"Treble        "        },                    
        {"      Bass      "      },                  
        {"     Treble     "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#if LANGUAGE_SWEDISH
    {
                         
        {"System"                },                


                                
        {"Ljudinst\x91llning"    },                      
        {"Stereo till\xF1ten"    },                      
        {"Endast mono"           },                  
#if DF_FORCE_STEREO
        {"Endast stereo"         },                    
#endif

#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif



                        
        {"Stationss\x97kning"    },                     
        {"Full avs\x97kning"     },                  
        {"Manell Tuning"         },                    
        {"Stationslista"         },                    
        {"fullst\x91ndig"        },              
        {"Ingen DAB-st."         },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"     Alarm      "      },                  
        {"  Alarm sparat  "      },                  
        {"Alarm ej sparat "      },                     
        {"Alarm"                 },                 
        {"Av     "               },               
        {"    Alarm     "        },                  
        {" St\x91ll in alarm "   },                        
        {"   Alarmvolym   "      },                        
        {"Dagligen      "        },                  
        {"En g\xF1ng       "     },                 
        {"P\xF1 vardagar   "     },                     
        {"P\xF1 veckoslut  "     },                     
        {"Dagar:"                },                
        {"     Dagar:     "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Buzzer        "        },                   
        {"L\x91ge: "             },                
        {"     L\x91ge       "   },                 
        {"P\x9A            "     },               
        {"Av            "        },                
        {"Senast avlyss."        },                         
        {" unset"                },                 
        {" set  "                },               
        {"  F\x97rinst\x91lld   "},                   
        {"Spara         "        },                 
        {"Tid:  "                },                
        {"  Inst\x91llning    "  },                         
        {"  No time set   "      },                       
        {"   Radiolarm    "      },                        
        {"    Larm av     "      },                     
#if ALARM_SET_DURATION
        {"  Varaktighet   "      },                      
        {"Varaktighet:"          },                      
#endif
#endif

                         
        {"Utj\x91mnare"          },                   
#ifdef AMP_FUNC_EQ
        {"Platt"                 },                  
        {"Sten"                  },                      
        {"Klassisk"              },                 
        {"Jazz"                  },                 
        {"Pop"                   },                  
        {"Bas"                   },                 
        {"Akustisk"              },                     
#else
        {"EQ off"                },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vocal"                 },                  
        {"Acoustic"              },                     
#endif
                        
        {"Rensa"                 },               
        {"Rensa?"                },                    
#if DATABASE_SORT_ENABLE
                        
        {"Stationsordning"       },               
        {"Flerfaldig"            },                         
        {"Alfanumerisk"          },                     
        {"Aktiva"                },                       
#endif
#if DF_CONFIG_AF
        {"Searching "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif
#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"Av"                    },                 
        {"l\xF1g"                },                 
        {"H\x97g"                },                  
#endif

                             
        {"\xE1terst\x91ll fabriksinst\x91llningar"},                         
        {"Startar om...   "      },                       
        {"\xE1terst\x91ll fabriksinst\x91llningar?"},                          
        {"Tryck p\xF1'Enter' till"},                        
        {"                "      },                         

                          
        {"Programversion"        },                 

                           
        {"Sleep"                 },               
        {"Ange sleep-tid"        },                       
        {"Av"                    },                  
        {"F\x97rbli      "       },                   

                         
        {"Bakgrundsbelysning"    },                   

                      
        {"Volym"                 },                

                          
        {"St\x91ll in tid/datum" },                   
        {"St\x91ll in tid"       },                  
        {"St\x91ll in datum"     },                 
        {"Automatisk uppdatering"},                    
        {"St\x91ll in 12/24-timmar"},                     
        {"AM"                    },              
        {"PM"                    },              
        {"Ingen uppdater"        },                  
        {"Uppdatering fr\xF1n any"},                   
        {"V\x91lj 24 timmar"     },                   
        {"V\x91lj 12 timmar"     },                   
        {"   Ogiltigt     "      },                    
        {"      Datum     "      },                 

                    
        {"[IngenRadioText]"      },                        
        {"Avs\x97ker...      "   },                     
        {"MHz        "           },                
        {"[Ingen PTY]     "      },                  
        {"Ansluta         "      },                       
        {"Signalfel    "         },                        
        {"Avs\x97ker...   "      },                     
        {"[Inget namn]    "      },                   
        {"Spelar          "      },                    
        {"Inte tillg\x91nglig"   },                         
        {"kbps"                  },                
        {"[No Time]       "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"DAB-stationen"         },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif

                      
        {"  F\x97rinst\x97lld   "},                        
        {"     stored     "      },                         
        {"F\x97rinst\x97lld"     },                   
        {"      Tom       "      },                  
        {"H\x91mta f\x97rinst."  },                         
        {" H\x91mta f\x97rinst. "},                         
        {"Lagra f\xF6rinst."     },                        
        {" Lagra f\xF6rinst. "   },                        
        {"(Tom)      "           },                  
        {"Preset"                },                  


                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono    "              },                

                                                      
        {"Pty saknas      "      },                 
        {"Nyheter         "      },                 
        {"Aktualiteter    "      },                           
        {"Information     "      },                        
        {"Sport           "      },                   
        {"Utbildning      "      },                      
        {"Teater          "      },                  
        {"Kultur          "      },                 
        {"Vetenskap       "      },                    
        {"Underh\x9Allning   "   },                 
        {"Popmusik        "      },                     
        {"Rockmusik       "      },                      
        {"L\x91ttlyssnat     "   },                          
        {"L\x91tt klassiskt  "   },                           
        {"Klassisk musik  "      },                           
        {"\xD7vrig musik     "   },                       
        {"V\x91""der           " },                    
        {"Ekonomi         "      },                    
        {"F\x97r barn        "   },                      
        {"Sociala fr\x9Agor  "   },                    
        {"Andliga fr\x9Agor  "   },                     
        {"Telefonv\x91kteri  "   },                    
        {"Resor & semester"      },                   
        {"Fritid & hobby  "      },                    
        {"Jazzmusik       "      },                         
        {"Countrymusik    "      },                         
        {"Nationell musik "      },                          
        {"Gamla godingar  "      },                        
        {"Folkmusik       "      },                      
        {"Dokument\x91rer    "   },                        
        {"<Odefinierad>   "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Larmtest        "      },                      
        {"Larm - larm!    "      },                       
        {"Kultur          "      },                    
        {"Underh\x9Allning"      },                         
        {"L\x91tt klassiskt"     },                           
        {"Klassisk musik  "      },                            
        {"V\x91""der      "      },                           
        {"F\x97r barn     "      },                           
        {"Sociala fr\x9Agor"     },                          
        {"Resor & semester"      },                             
        {"Fritid & hobby  "      },                            
        {"Jazzmusik       "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },                 
        {"Classic Rock    "      },                        
        {"Adult Hits      "      },                      
        {"Soft Rock       "      },                     
        {"Top 40          "      },                  
        {"Country         "      },                    
        {"Oldies          "      },                   
        {"Soft            "      },                 
        {"Nostalgia       "      },                      
        {"Jazz            "      },                 
        {"Classical       "      },                      
        {"Rhythm and Blues"      },                           
        {"Soft R & B      "      },                               
        {"Foreign Language"      },                            
        {"Religious Music "      },                           
        {"Religious Talk  "      },                          
        {"Personality     "      },                        
        {"Public          "      },                   
        {"College         "      },                    
        {"Emergency Test  "      },                          
        {"ALERT! ALERT!   "      },                       
#endif
#if ENABLE_ANNOUNCEMENT
        {"Announcement  "        },                         
        {"  Announcement  "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Alarm           "      },                   
        {"Traffic News    "      },                             
        {"Transport News  "      },                           
        {"Warning         "      },                           
        {"News            "      },                      
        {"Weather         "      },                             
        {"Event           "      },                              
        {"Special event   "      },                         
        {"Radio info      "      },                                 
        {"Sports news     "      },                        
        {"Financial news  "      },                            
#endif
#if ENABLE_MULTI_LANGUAGE
        {"Spr\xF1k"              },                     
        {"Svenska"               },                    
#endif
        /* mpt plus txt
        */
        {"St\x91ng av"           },                       
#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"Ja"                    },               
        {"Nej"                   },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"Skanningsinst\x91llning"},                  
        {"Stark station"         },                        
        {"Alla stationer"        },                     
#endif
#if BACKLIGHT_MENU
        {"Paus"                  },                  
        {"P\xF1"                 },                     
        {" And"                  },                      
        {"P\xF1 niv\xF1"         },                  
        {"Dimmerniv\xF1"         },                   
        {"H\x97g"                },                  
        {"Mitten"                },                    
        {"L\xF1g"                },                 
#endif

        {"l\x97rdag"                      },              
        {"s\x97ndag"                      },              
        {"M\xE5ndag"                      },             
        {"Tisdag"                           },              
        {"Onsdag"                           },              
        {"Torsdag"                         },              
        {"Fredag"                           },              

#if !START_POWER
        {"Uppdatering   "                },                   
        {"     V\x91nta      "   },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"  SNOOZE:"             },                   
        {"     Ljud av    "      },              
        {"    S\x91tt p\xF1     "},                   
        {SOFT_VER                          },                
        {"  V\x91lkommen t.  "   },                     
        {" Digital Radio  "      },                         
        {"  Batteri l\xF1gt  "   },                     
        {"Charge completed"      },                        
        {"  Laddning...   "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Connected "         },                       
        {"   Pairing      "      },                    
        {"   Connecting   "      },                  
        {"  Incoming...   "      },                   
        {"  Outgoing...   "      },                   
        {"    Calling     "      },                  
#endif
        {"      Aux       "      },                                     
        {"    LINE IN     "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bas           "        },                  
        {"Diskant       "        },                    
        {"      Bas      "       },                  
        {"    Diskant    "       },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#if LANGUAGE_DANISH
    {
                         
        {"System"                },                

                                
        {"Audio Indstilling"     },                      
        {"Stereo tilladt"        },                      
        {"Kun mono"              },                  
#if DF_FORCE_STEREO
        {"Kun stereo"            },                    
#endif

#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif



                        
        {"Station scan"          },                     
        {"Fuld Scanning"         },                  
        {"Manual Tuning"         },                    
        {"Stations Liste"        },                    
        {"fuld"                  },              
        {"Ingen DAB Stat."       },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"     Alarm      "      },                  
        {"  Alarmer Gemt  "      },                  
        {"Alarmer IkkeGemt"      },                     
        {"Alarm"                 },                 
        {"Fra    "               },               
        {"    Alarm     "        },                  
        {"  Alarm detail  "      },                        
        {"Alarm Bind      "      },                        
        {"Daily         "        },                  
        {"Engang        "        },                 
        {"Hverdage      "        },                     
        {"Weekender     "        },                     
        {"Days: "                },                
        {"     Days:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Buzzer        "        },                   
        {"Mode: "                },                
        {"Mode            "      },                 
        {"Til           "        },               
        {"Sluk          "        },                
        {"Last listened "        },                         
        {" unset"                },                 
        {" set  "                },               
        {"    Forindst    "      },                   
        {"Gemme         "        },                 
        {"Tid:  "                },                
        {" Set alarm time "      },                         
        {"  No time set   "      },                       
        {"  Radio Alarm   "      },                        
        {" Alarm slukket  "      },                     
#if ALARM_SET_DURATION
        {"	  Varighed	  "        },                      
        {"Varighed:"             },                      
#endif
#endif

                         
        {"Equalizer"             },                   
#ifdef AMP_FUNC_EQ
        {"Flad"                  },                  
        {"Rock"                  },                      
        {"Klassisk"              },                 
        {"Jazz"                  },                 
        {"Pop"                   },                  
        {"Bass"                  },                 
        {"Akustisk"              },                     
#else
        {"EQ off"                },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vocal"                 },                  
        {"Acoustic"              },                     
#endif
                        
        {"Nedsk\xF2r"            },               
        {"Nedsk\xF2r?"           },                    
#if DATABASE_SORT_ENABLE
                        
        {"Stations R\xF2kkef\xF7lge"},               
        {"Multiplex"             },                         
        {"Alfanumerisk"          },                     
        {"Aktiv"                 },                       
#endif
#if DF_CONFIG_AF
        {"Searching "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif
#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"Fra"                   },                 
        {"Lav"                   },                 
        {"H\xF7j"                },                  
#endif

                             
        {"Gendan Fabriksindstillinger"},                         
        {"Genstarter...   "      },                       
        {"Gendan Fabriksindstillinger?"},                          
        {"Tryk p\xF1'Enter' til" },                        
        {"                "      },                         

                          
        {"SW version"            },                 

                           
        {"Sleep"                 },               
        {"Indst. sleeptid"       },                       
        {"Fra"                   },                  
        {"Forblive    "          },                   

                         
        {"Baggrundslys"          },                   

                      
        {"Volumen"               },                

                          
        {"Indstil tid/dato"      },                   
        {"Indstil tid"           },                  
        {"Indstil dato"          },                 
        {"Automatisk opdatering" },                    
        {"Indstil 12/24 tidsformat"},                     
        {"AM"                    },              
        {"PM"                    },              
        {"Opdater Ikke  "        },                  
        {"Opdater fra alt"       },                   
        {"Indstil 24-timers format"},                   
        {"Indstil 12-timers format"},                   
        {"    Ugyldig     "      },                    
        {"      Days      "      },                 

                    
        {"[Ingen tekst]   "      },                        
        {"Scanner¡­       "      },                     
        {"MHz        "           },                
        {"[Ingen PTY]     "      },                  
        {"Tilslutter      "      },                       
        {"Signal fejl  "         },                        
        {"Scanner..    "         },                     
        {"[Intet Navn]    "      },                   
        {"Afspiller       "      },                    
        {"Ikke tilg\x87ngelig"   },                         
        {"kbps"                  },                
        {"[No Time]       "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"DAB Station"           },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif

                      
        {"    Station     "      },                        
        {"      Gemt      "      },                         
        {"   Station"            },                   
        {"      Tom       "      },                  
        {"Genkald station"       },                         
        {"Genkald station "      },                         
        {"Gem station   "        },                        
        {"  Gem station   "      },                        
        {"(Tom)      "           },                  
        {"Preset"                },                  


                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono    "              },                

                                                      
        {"PTY mangler     "      },                 
        {"Korte nyheder   "      },                 
        {"Nyh. og baggrund"      },                           
        {"Almen Info      "      },                        
        {"Sport           "      },                   
        {"Uddannelse      "      },                      
        {"Drama           "      },                  
        {"Kultur          "      },                 
        {"Videnskab       "      },                    
        {"Underholdning   "      },                 
        {"PopMusik        "      },                     
        {"Rockmusik       "      },                      
        {"Uhld.Musik      "      },                          
        {"Let klassisk    "      },                           
        {"Klassisk        "      },                           
        {"Blandet Musik   "      },                       
        {"Vejr            "      },                    
        {"\x9Bkonomi&erhverv "   },                    
        {"B\xF7rneprogram    "   },                      
        {"Social prg.     "      },                    
        {"Kirke & Tro     "      },                     
        {"Tlf. Prg.       "      },                    
        {"Rejser og ferie "      },                   
        {"Hobby og fritid "      },                    
        {"Jazzmusik       "      },                         
        {"Countrymusik    "      },                         
        {"Dansktop musik  "      },                          
        {"Gamle kendinge  "      },                        
        {"Folkemusik      "      },                      
        {"Dokummentar     "      },                        
        {"<Udefineret>    "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Alarm Test      "      },                      
        {"Alarm Alarm!    "      },                       
        {"Kultur          "      },                    
        {"Underholdning   "      },                         
        {"Let klassisk    "      },                           
        {"Klassisk        "      },                            
        {"Vejr            "      },                           
        {"B\xF7rneprogram "      },                           
        {"Social prg.     "      },                          
        {"Rejser og ferie "      },                             
        {"Hobby og fritid "      },                            
        {"Jazzmusik       "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },                 
        {"Classic Rock    "      },                        
        {"Adult Hits      "      },                      
        {"Soft Rock       "      },                     
        {"Top 40          "      },                  
        {"Country         "      },                    
        {"Oldies          "      },                   
        {"Soft            "      },                 
        {"Nostalgia       "      },                      
        {"Jazz            "      },                 
        {"Classical       "      },                      
        {"Rhythm and Blues"      },                           
        {"Soft R & B      "      },                               
        {"Foreign Language"      },                            
        {"Religious Music "      },                           
        {"Religious Talk  "      },                          
        {"Personality     "      },                        
        {"Public          "      },                   
        {"College         "      },                    
        {"Emergency Test  "      },                          
        {"ALERT! ALERT!   "      },                       
#endif
#if ENABLE_ANNOUNCEMENT
        {"Announcement  "        },                         
        {"  Announcement  "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Alarm           "      },                   
        {"Traffic News    "      },                             
        {"Transport News  "      },                           
        {"Warning         "      },                           
        {"News            "      },                      
        {"Weather         "      },                             
        {"Event           "      },                              
        {"Special event   "      },                         
        {"Radio info      "      },                                 
        {"Sports news     "      },                        
        {"Financial news  "      },                            
#endif
#if ENABLE_MULTI_LANGUAGE
        {"Sprog"                 },                     
        {"Dansk"                 },                    
#endif
        /* mpt plus txt
        */
        {"Sluk"                  },                       

#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"Ja"                    },               
        {"Nej"                   },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"Scanningsindstilling"  },                  
        {"St\xF2rk station"      },                        
        {"Alle stationer"        },                     
#endif
#if BACKLIGHT_MENU
        {"Tiden er g\xF1\x65t"   },                  
        {"P\xF1"                 },                     
        {" And"                  },                      
        {"P\xF1 niveau"          },                  
        {"Dimmerniveau"          },                   
        {"H\xF7j"                },                  
        {"Mellem\xF7sten"        },                    
        {"Lav"                   },                 
#endif
        {"L\xF7rdag"             },              
        {"S\xF7ndag"             },              
        {"Mandag"                },              
        {"Tirsdag"               },              
        {"Onsdag"                },              
        {"Torsdag"               },              
        {"Fredag"                },              

#if !START_POWER
        {"    Update      "      },                   
        {"  Please Wait   "      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"  SNOOZE:"             },                   
        {"      MUTE      "      },              
        {"      LYD       "      },                   
        {SOFT_VER                          },                
        {" Velkommen til  "      },                     
        {" Digital Radio  "      },                         
        {"  Lavt batteri  "      },                     
        {"Charge completed"      },                        
        {"  Opladning...  "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Connected "         },                       
        {"   Pairing      "      },                    
        {"   Connecting   "      },                  
        {"  Incoming...   "      },                   
        {"  Outgoing...   "      },                   
        {"    Calling     "      },                  
#endif
        {"Hj\xF2lpe indg.eff."   },                                     
        {"    LINE IN     "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bass          "        },                  
        {"Treble        "        },                    
        {"      Bass      "      },                  
        {"     Treble     "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#if LANGUAGE_FRENCH
    {
                         
        {"Syst\x83me"            },                


                                
        {"R\x83glage audio"      },                      
        {"St\x82r\x82o admis"    },
        {"Stations mono"         },
#if DF_FORCE_STEREO
        {"Stereo only"           },                    
#endif
#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif



                        
        {"Station scan"          },                     
        {"Recherche totale"      },                  
        {"R\x82glage manuel"     },                    
        {"Liste de stat."        },                    
        {"Complet"               },              
        {"Pas de ch. DAB"        },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"    R\x82veil      "   },                  
        {"   Enregistr\x82   "   },                  
        {" Non enregistr\x82 "   },                     
        {"Alarm"                 },                 
        {"De     "               },               
        {"Alarmes       "        },
        {"Details alarme  "      },                              
        {" Volume alarme  "      },                        
        {"Quotidien     "        },                  
        {"Une fois      "        },                 
        {"Semaine       "        },                     
        {"Week-end      "        },                     
        {"Jours:"                },                
        {"     Jours:     "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Buzzer        "        },                   
        {"Mode: "                },                
        {"      Modo      "      },                 
        {"Activ\x82        "     },               
        {"D\x82sactiv\x82     "  },                
        {"Dernier ecoute"        },                         
        {"nonjeu"                },                 
        {"R\x82glez"             },               
        {"   Pr\x82r\x82glez    "},                   
        {"Enregistrez   "        },                 
        {"Heure:"                },                
        {"R\x82glez le r\x82veil"},                         
        {"Aucun jeu \x80heure"   },                       
        {"  Alarme radio   "     },                        
        {" Alarme\x82teinte "    },                     
#if ALARM_SET_DURATION
        {"     Dur\x82\x65      "   },                      
        {"Dur\x82\x65:"             },                      
#endif
#endif

                         
        {"\xC2galiseur"          },                   
#ifdef AMP_FUNC_EQ
        {"Appartement"           },                  
        {"Roche"                 },                      
        {"Classique"             },                 
        {"le jazz"               },                 
        {"Pop"                   },                  
        {"Basse"                 },                 
        {"Acoustique"            },                     
#else
        {"EQ off"                },                  
        {"Bass boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Vocal"                 },                  
        {"Acoustique"            },
#endif
                        
        {"Ecr\x92\x61ter"        },               
        {"Ecr\x92\x61ter?"       },                    
#if DATABASE_SORT_ENABLE
                        
        {"Ordre de stations"     },
        {"Multiplex"             },
        {"Alphanum\x82rique"     },
        {"Actif"                 },

#endif
#if DF_CONFIG_AF
        {"Recherche "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif

#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"D\x82sactiv\x82"       },                     
        {"Bas"                   },                 
        {"Haut"                  },                  
#endif

                             
        {"R\x82gl. en usine"     },
        {"Red\x82marrage...  "   },
        {"R\x82gl. en usine?"    },

        {"Appuyez sur 'Entr\x82\x65' pour"},
        {""                      },


                         
        {"Version logiciel"      },


                           
        {"Mode sommeil"          },               
        {"Mode sommeil"          },                       
        {"Arr.mode sommeil"      },                  
        {"Restantes   "          },                   

                         
        {"R\x82tro\x82\x63lairage"},                   

                      
        {"Volume"                },                

        {"R\x82gl. heure/date"   },                   
        {"R\x82glez heure"       },                  
        {"R\x82glez date"        },                 
        {"MAJ Automatique"       },                    
        {"R\x82gl. 12/24 h "     },                     
        {"AM"                    },              
        {"PM"                    },              
        {"No update"             },                  
        {"De radio"              },                   
        {"R\x82gl. 24 h"         },                   
        {"R\x82gl. 12 h"         },                   
        {"  Pas valable   "      },                    
        {"      Date      "      },                 

                    
        {"[Aucun Texte]   "      },
        {"Recherche...    "      },
        {"MHz        "           },
        {"[Aucun PTY]     "      },
        {"Connexion       "      },
        {"Erreur signal"         },
        {"Recherche... "         },
        {"[Pas de nom]    "      },
        {"Lecture         "      },
        {"Pas disponible  "      },
        {"kbps"                  },
        {"[Aucun temps]   "      },
        {"FM"                    },
        {"Ch "                   },
        {"Station DAB"           },

#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif
                      
        {"     Preset     "      },                        
        {"    m\x82moire     "   },                         
        {"    Preset"            },                   
        {"      Vide      "      },                  
        {"Rappel m\x82moris\x82" },                         
        {"Rappel m\x82moris\x82 "},                         
        {"M\x82mor. pr\x82r\x82gl."},                        
        {" M\x82mor. pr\x82r\x82gl. "},                        
        {"(Vide)     "           },                  
        {"Preset"                },                  

        {"Stereo  "              },
        {"J-Stereo"              },
        {"DChannel"              },
        {"Mono    "              },

                                                      
        {"Non_d\x82\x66ini      "},
        {"Informations    "      },
        {"Magazine        "      },
        {"Info-Service    "      },
        {"Sport           "      },
        {"Educatif        "      },
        {"Fiction         "      },
        {"Culture         "      },
        {"Sciences        "      },
        {"Divertissement  "      },
        {"Musique_Pop     "      },
        {"Musique_Rock    "      },
        {"Chansons        "      },
        {"Classique_l\x82ger "   },
        {"MusiqueClassique"      },
        {"Autre_Musique   "      },
        {"M\x82t\x82o           "},
        {"Economie        "      },
        {"Enfants         "      },
        {"Soci\x82t\x82         "},
        {"Religion        "      },
        {"Ligne_ouverte   "      },
        {"Voyage          "      },
        {"Loisirs         "      },
        {"Jazz            "      },
        {"Country         "      },
        {"Chanson_du_pays "      },
        {"Musique_r\x82tro   "   },
        {"Folklore        "      },
        {"Documentaire    "      },
        {"<Undefined>     "      },

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"R\x82veil-test     "   },
        {"Alarme alarme!  "      },

        {"Cultures        "      },                    
        {"Varied Speech   "      },                         
        {"Light Classics M"      },                           
        {"Serious Classics"      },                            
        {"Weather & Metr  "      },                           
        {"Children's Progs"      },                           
        {"Social Affairs  "      },                          
        {"Travel & Touring"      },                             
        {"Leisure & Hobby "      },                            
        {"Jazz Music      "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },
        {"Rock classique  "      },
        {"Hits \x80\x61\x64ultes   "   },
        {"Rock l\x82ger      "   },
        {"Top 40          "      },
        {"Pays            "      },
        {"R\x82tro           "   },
        {"L\x82ger           "   },
        {"Nostalgie       "      },
        {"Jazz            "      },
        {"Classique       "      },
        {"Rhythm & Blues  "      },
        {"R 'n' B l\x82ger   "   },
        {"Langue \x82trang\x83re"},
        {"Musique sacr\x82\x65  "   },
        {"Talk religieux  "      },
        {"Personnalit\x82    "   },
        {"Public          "      },
        {"Coll\x83ge         "   },
        {"Test \x80urgence   "   },
        {"ALERT! ALERT!   "      },
#endif
#if ENABLE_ANNOUNCEMENT
        {"Annonce       "        },                         
        {"    Annonce     "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                                     
        {"Alarme          "      },                   
        {"Nouvelles du tra"      },                             
        {"Transport News  "      },                           
        {"Attention       "      },                           
        {"Nouvelles       "      },                      
        {"M\x82t\x82O           "},                             
        {"un \x82v\x82nement    "},                              
        {"Special event   "      },                         
        {"Sp\x82\x63ial         "},                                 
        {"Sp\x82\x63ial         "},                        
        {"financi\x83res     "   },                            
#endif


#if ENABLE_MULTI_LANGUAGE
        {"Language"              },                     
        {"Fran\x9B\x61is"        },                    
#endif
        /* mpt plus txt
        */
        {"\xC2teindre"           },                       
#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"Oui"                   },               
        {"Non"                   },              
        {"     Veille     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"R\x82glage de num\x82risation"},                  
        {"Station forte"         },                        
        {"Toutes les stations"   },                     
#endif
#if BACKLIGHT_MENU
        {"Temps libre"           },                  
        {"Sur"                   },                     
        {" Sec"                  },                      
        {"Au niveau"             },                  
        {"Niveau de gradateur"   },                   
        {"Haute"                 },                  
        {"Milieu"                },                    
        {"Faible"                },                 
#endif
        {"Samedi"                },              
        {"Dimanche"              },              
        {"Lundi"                 },              
        {"Mardi"                 },              
        {"Mercredi"              },              
        {"Jeudi"                 },              
        {"Vendredi"              },              

#if !START_POWER
        {" Mettre \x81 jour  "   },                   
        {"   Un instant   "      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"Veilleuse:"            },                   
        {"    SILENCE     "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {"Bienvenue \x81 la  "   },                    
        {"radio num\x82rique"    },                         
        {"Batterie \x82puis\x82\x65"},                     
        {"Charge completed"      },                        
        {"   Charge...    "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Connect\x82 "       },                       
        {"   Pairing      "      },                    
        {"   Connexion    "      },                  
        {"Appel entrant..."      },                   
        {"   Sortant...   "      },                   
        {"    Appelez     "      },                  
#endif
        {"   Entre\x82\x41ux   " },                                     
        {"    LINE IN     "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"Bass          "        },                  
        {"Treble        "        },                    
        {"      Bass      "      },                  
        {"     Treble     "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#if LANGUAGE_GERMAN
    {
                         
        {"System"                },                


                                
        {"Audio-Einstellung"     },                      
        {"Stereo m\x97glich"     },                      
        {"Nur Mono"              },                  
#if DF_FORCE_STEREO
        {"Nur Stereo"            },                    
#endif
#if ENABLE_FM_TRANSMITTER
        {"Transmitter"           },                     
        {"Set Frequency"         },                         
        {"Auto Set Freq"         },                        
        {"Set Power"             },                     
        {"dBuV"                  },              
#endif



                        
        {"Sendersuchlauf"        },                     
        {"Vollst\x91ndiger Suchlauf"},                  
        {"Manuell einstellen"    },                    
        {"Senderliste"           },                    
        {"vollst\x91ndig"        },              
        {"Kein DAB-Sender"       },                  
        {"MHz"                   },               
                     

#if (ALARM_NUM_MAX != 0)
        {"     Wecker     "      },                  
        {"  Gespeichert   "      },                  
        {"Nich.gespeichert"      },                     
        {"Wecker"                },                 
        {"Aus    "               },               
        {"Alarmzeiten   "        },                  
        {"  Wecker-Detail  "     },                        
        {"Lautst\x91rke      "   },                        
        {"T\x91glich       "     },                  
        {"Einmal        "        },                 
        {"Werktags      "        },                     
        {"Wochenende    "        },                     
        {"Tage: "                },                
        {"     Days:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Buzzer        "        },                   
        {"Modus:"                },                
        {"     Modus      "      },                 
        {"An            "        },               
        {"Aus           "        },                
        {"Zuletzt geh\x97rt"     },                         
        {" unset"                },                 
        {" Satz "                },               
        {" Voreinstellung "      },                   
        {"Speichern     "        },                 
        {"Zeit: "                },                
        {"Alarm einstellen"      },                         
        {"   Uhr einst.   "      },                       
        {"  Radio wecker  "      },                        
        {"   Alarm aus    "      },                     
#if ALARM_SET_DURATION
        {"     Dauer      "      },                      
        {"Dauer:"                },                      
#endif
#endif

                         

        {"Equalizer"             },                   
#ifdef AMP_FUNC_EQ
        {"Eben"                  },                  
        {"Rock"                  },                      
        {"Klassisch"             },                 
        {"Jazz"                  },                 
        {"Pop"                   },                  
        {"Bass"                  },                 
        {"Akustik"               },                     
#else
        {"EQ Aus"                },                  
        {"Bass-Boost"            },                      
        {"Jazz"                  },                 
        {"Live"                  },                 
        {"Gesang"                },                  
        {"Akustische"            },                     
#endif
                        
        {"Leeren"                },               
        {"Leeren?"               },                    
#if DATABASE_SORT_ENABLE
                        
        {"Senderreihenfolge"     },               
        {"Multiplex"             },                         
        {"Alphanumerisch"        },                     
        {"Aktive"                },                       
#endif
#if DF_CONFIG_AF
        {"Suche     "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif

#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"Aus"                   },                     
        {"Tilef"                 },                 
        {"Hoch"                  },                  
#endif
                             
        {"Werkseinstellung"      },                         
        {"Neustart...     "      },                       
        {"Werkseinstellung?"     },                          
        {"Enter' dr\x99\x63ken " },                        
        {"                "      },                         

                          
        {"SW-Version"            },                 

                           
        {"Sleep"                 },               
        {"Schlaf-Timer"          },                       
        {"Aus"                   },                  
        {"Bleiben     "          },                   

                         
        {"Hintergrundbeleuchtung"},                    
                      
        {"Lautst\x91rke"         },                
                          
        {"Zeit/Datum einstellen" },                   
        {"Zeit einstellen"       },                  
        {"Datum einstellen"      },                 
        {"Autom. Update "        },                    
        {"12/24 Std. einstellen" },                     
        {"AM"                    },              
        {"PM"                    },              
        {"Kein Update   "        },                  
        {"Update alle   "        },                   
        {"24 Std. einstellen"    },                   
        {"12 Std. einstellen"    },                   
        {"    Ung\x99ltig    "   },                    
        {"     Datum      "      },                 
                    
        {"[Kein RadioText]"      },                        
        {"Suchlauf...     "      },                     
        {"MHz        "           },                
        {"[Keine PTY]     "      },                  
        {"Connecting      "      },                       
        {"Signal fehler"         },                        
        {"Suchlauf...  "         },                     
        {"[Kein Name]     "      },                   
        {"Wiedergabe      "      },                    
        {"Nicht verf\x99gbar "   },                         
        {"kbps"                  },                
        {"[Keine Zeit]    "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"DAB-Station"           },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif



                      
        {"    Programm    "      },                        
        {"  Gespeichert   "      },                         
        {"  Programm"            },                   
        {"      Leer      "      },                  
        {"Progr.aufrufen"        },                         
        {" Progr.aufrufen "      },                         
        {"Progr. speichern"      },                        
        {"Progr. speichern"      },                        
        {"(Leer)     "           },                  
        {"Preset"                },                  

                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono    "              },                

                                                      
        {"Kein_PTY        "      },
        {"Nachrichten     "      },
        {"Aktuelle_Info   "      },
        {"Service_Programm"      },
        {"Sport           "      },
        {"Bildung         "      },
        {"H\x97rspiel_+_Lit  "   },
        {"Kultur+Gesellsch"      },
        {"Wissenschaft    "      },
        {"Unterhaltung    "      },
        {"Pop_Musik       "      },
        {"Rock_Musik      "      },
        {"Unterhalt_Musik "      },
        {"Leichte_Klassik "      },
        {"Ernste_Klassik  "      },
        {"Spezielle_Musik "      },
        {"Wetter          "      },
        {"Wirtschaft      "      },
        {"Kinderprogramm  "      },
        {"Soziales        "      },
        {"Religion        "      },
        {"Anrufsendung    "      },
        {"Reiseinformation"      },
        {"Freizeit        "      },
        {"Jazz            "      },
        {"Country_Musik   "      },
        {"Landesmusik     "      },
        {"Oldies_Musik    "      },
        {"Folklore        "      },
        {"Feature         "      },
        {"<Undefiniert>   "      },


#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Alarm-Test      "      },
        {"Alarm Alarm!    "      },
        {"Cultures        "      },                    
        {"Varied Speech   "      },                         
        {"Light Classics M"      },                           
        {"Serious Classics"      },                            
        {"Weather & Metr  "      },                           
        {"Children's Progs"      },                           
        {"Social Affairs  "      },                          
        {"Travel & Touring"      },                             
        {"Leisure & Hobby "      },                            
        {"Jazz Music      "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },
        {"Klassisch-Rock  "      },
        {"Erwachsen-Hits  "      },
        {"Leicht-Popmusik "      },
        {"Top 40          "      },
        {"Land            "      },
        {"Oldies          "      },
        {"Leicht          "      },
        {"Nostalgie       "      },
        {"Jazz            "      },
        {"Klassisch       "      },
        {"Rhythm & Blues  "      },
        {"Leichtes R & B  "      },
        {"Fremdsprache    "      },
        {"Religi\x97se Musik "   },
        {"Religi\x97ser Talk "   },
        {"Pers\x97nlich      "   },
        {"\xD7\x66\x66\x65ntlich      "   },
        {"Universit\x91t     "   },
        {"Notfall-Test    "      },
        {"Achtung!        "      },
#endif
#if ENABLE_ANNOUNCEMENT
        {"Ank\x99ndigung   "     },                         
        {"  Ank\x99ndigung   "   },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                             
        {"Alarm           "      },                   
        {"Verkehrsnachric."      },                             
        {"Transport Nachr."      },                           
        {"Warnung         "      },                           
        {"Nachrichten     "      },                      
        {"Wetter          "      },                             
        {"Veranstaltung   "      },                              
        {"Sonderveranstal."      },                         
        {"Radio info      "      },                                 
        {"Sport Nachricht."      },                        
        {"Finanznachricht."      },                            
#endif

#if ENABLE_MULTI_LANGUAGE
        {"Sprache"               },                     
        {"Deutsch"               },                    
#endif
        /* mpt plus txt
        */
        {"Ausschalten"           },                       
#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"Yes"                   },               
        {"No"                    },              
        {"    Stand-by    "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    

#if FM_SCAN_TH
        {"Scan-Einstellung"      },                  
        {"Starke Station"        },                        
        {"Alle Stationen"        },                     
#endif
#if BACKLIGHT_MENU
        {"Auszeit"               },                  
        {"Auf"                   },                     
        {" Zwe"                  },                      
        {"Auf Ebene"             },                  
        {"Dimmerstufe"           },                   
        {"Hoch"                  },                  
        {"Mitte"                 },                    
        {"Niedrig"               },                 
#endif
        {"Samstag"               },              
        {"Sonntag"               },              
        {"Montag"                },              
        {"Dienstag"              },              
        {"Mittwoch"              },              
        {"Donnerstag"            },              
        {"Freitag"               },              

#if !START_POWER
        {"Aktualisieren  "       },                   
        {"  Bitte warte   "      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"Schlummern"            },                   
        {"     STUMM      "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {" Willkommen zu  "      },                    
        {" Digital Radio  "      },                         
        {"Batterie schwach"      },                     
        {"Charge completed"      },                        
        {"  Aufladung...  "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Verbunden    "      },                       
        {"    Suchen      "      },                    
        {"    Suchen      "      },                  
        {"  Eingehend...  "      },                   
        {"  Ausgehende... "      },                   
        {"    Anrufen     "      },                  
#endif

        {"  Hilfseingang  "      },                 
        {"   Kassetten    "      },                 
        {"     PHONO      "      },                 
        {" delete"               },                   
        {" erfolgreich !  "      },                       
        {"Bass          "        },                  
        {"H\x97hen         "     },                    
        {"      Bass      "      },                  
        {"     H\x97hen      "   },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station       "        },                         
    },
#endif
#if LANGUAGE_ITALIAN
    {
                         
        {"Sistema"               },                

                                
        {"Impost.audio"          },                      
        {"Ricezione stereo"      },                      
        {"Solo mono"             },                  
#if DF_FORCE_STEREO
        {"Solo stereo"           },                    
#endif

#if ENABLE_FM_TRANSMITTER
        {"Trasmettitore"         },                     
        {"Imposta la frequenza"  },                         
        {"Auto imposta freq"     },                        
        {"Imposta la potenza"    },                     
        {"dBuV"                  },              
#endif


                        
        {"Station scan"          },                     
        {"Ricerca completa"      },                  
        {"Sintonizz. manuale"    },                    
        {"Lista stazioni"        },                    
        {"completa"              },              
        {"Ness. Staz. DAB"       },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"    Allarme     "      },                  
        {"  Memorizzata   "      },                  
        {"Non memorizzata "      },                     
        {"Alarm"                 },                 
        {"Off    "               },               
        {"Allarme       "        },                  
        {"Dettagli allarme"      },                        
        {" Volume allarme "      },                        
        {"Quotidiano    "        },                  
        {"Una volta     "        },                 
        {"Giorni feriali"        },                     
        {"Fine settimana"        },                     
        {"Giorni:"               },                
        {"    Giorni:     "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Cicalino      "        },                   
        {"Modo: "                },                
        {"      Modo      "      },                 
        {"Allarme attivato"      },               
        {"Allarme disatt"        },                
        {"Last listened "        },                         
        {" unset"                },                 
        {" set  "                },               
        {"   Preimposta   "      },                   
        {"Salva         "        },                 
        {"Tempo:"                },                
        {"Imposta sveglia "      },                         
        {"Ora no impostata"      },                       
        {" Allarme radio  "      },                        
        {"  Allarme Off   "      },                     
#if ALARM_SET_DURATION
        {"     Durata     "      },                      
        {"Durata:"               },                      
#endif

#endif

                         
        {"Equalizzatore"         },                   
#ifdef AMP_FUNC_EQ
        {"Piatto"                },                  
        {"Roccia"                },                      
        {"Classico"              },                 
        {"Jazz"                  },                 
        {"Pop"                   },                  
        {"Basso"                 },                 
        {"Acustico"              },                     
#else
        {"EQ off"                },
        {"Bass boost"            },
        {"Jazz"                  },
        {"En directo"            },
        {"Vocal"                 },
        {"Ac\x88stica"           },

#endif
                        
        {"Elimina       "        },
        {"    Elimina?    "      },
#if DATABASE_SORT_ENABLE
                        
        {"Ordine stazioni"       },               
        {"Molteplice"            },                         
        {"Alphanumeric"          },                     
        {"Active"                },                       
#endif
#if DF_CONFIG_AF
        {"Ricerca   "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif

#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"Disattivato"           },                     
        {"Basso"                 },                 
        {"Alto"                  },                  
#endif

                             
        {"Ripristino valori di default"},
        {"Riavvio...      "      },
        {"Ripristino valori di default?"},
        {"Premere 'Invio' su"    },
        {""                      },

                         
        {"Versione del software" },                 

                           
        {"Sleep"                 },               
        {"Tempo di sleep"        },                       
        {"OFF"                   },                  
        {"Rimangono   "          },                   

                         
        {"controluce"            },                    
                      
        {"Volume"                },                

                          
        {"Impost. ora/data"      },                   
        {"Impost. ora"           },                  
        {"Impost. data"          },                 
        {"Aggiorn. automatico"   },                    
        {"Impost. 12/24 ore"     },                     
        {"AM"                    },              
        {"PM"                    },              
        {"Nessun aggiorn."       },                  
        {"Aggiorn. da qualsiasi" },                   
        {"Impost. 24 ore"        },                   
        {"Impost. 12 ore"        },                   
        {"   non valida   "      },                    
        {"      Date      "      },                 



                    
        {"[Nessun testo]  "      },
        {"Ricerca...      "      },
        {"MHz        "           },
        {"[No PTY]        "      },
        {"Collegamento    "      },
        {"Err. Segnale"          },
        {"Ricerca...  "          },
        {"[Nessun nome]   "      },
        {"Riproduzione    "      },
        {"Non disponibile "      },
        {"kbps"                  },
        {"[Nessuna ora]   "      },
        {"FM"                    },
        {"St "                   },
        {"StazioneDAB"           },

#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif

                      
        {"   Preselez.    "      },                        
        {"   memorizzata  "      },                         
        {"    Preset"            },                   
        {"     vuoto      "      },                  
        {"Visual.preselez."      },                         
        {"Visual.preselez."      },                         
        {"Memor.preselez."       },                        
        {"Memor.preselez. "      },                        
        {"(vuoto)    "           },                  
        {"Preset"                },                  

                                                   
        {"Stereo  "              },                  
        {"J-Stereo"              },                   
        {"DChannel"              },                    
        {"Mono	  "               },                

                                                      
        {"Nessun_PTY      "      },
        {"Notiziario      "      },
        {"Magazine        "      },
        {"Informazioni    "      },
        {"Sport           "      },
        {"Educazione      "      },
        {"Prosa           "      },
        {"Cultura         "      },
        {"Scienza         "      },
        {"Vari_Generi     "      },
        {"Musica_Pop      "      },
        {"Musica_Rock     "      },
        {"Musica_Leggera  "      },
        {"Classica_Leggera"      },
        {"Musica_Classica "      },
        {"Musica_Varia    "      },
        {"Meteo           "      },
        {"Economia        "      },
        {"Ragazzi         "      },
        {"Societa'        "      },
        {"Religione       "      },
        {"Opinioni        "      },
        {"Viaggi_e_Turismo"      },
        {"Svago           "      },
        {"Musica_Jazz     "      },
        {"Musica_Country  "      },
        {"Musica_Italiana "      },
        {"Revival         "      },
        {"Musica_Folk     "      },
        {"Documentari     "      },
        {"<Undefined>     "      },

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Test di allarme "      },
        {"Allarme!       "       },

        {"Cultures	    "         },                    
        {"Varied Speech   "      },                         
        {"Light Classics M"      },                           
        {"Serious Classics"      },                            
        {"Weather & Metr  "      },                           
        {"Children's Progs"      },                           
        {"Social Affairs  "      },                          
        {"Travel & Touring"      },                             
        {"Leisure & Hobby "      },                            
        {"Jazz Music      "      },                      
#elif (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_NORTH_AMERICA)
                                                                          
        {"Rock            "      },
        {"Rock Classico   "      },
        {"Hits Adulti     "      },
        {"Soft Rock       "      },
        {"Top 40          "      },
        {"Paese           "      },
        {"vecchi successi "      },
        {"Soft            "      },
        {"Romantica      "       },
        {"Jazz            "      },
        {"Classica        "      },
        {"Rhythm and Blues"      },
        {"Soft R & B      "      },
        {"Lingua straniera"      },
        {"Musica religiosa"      },
        {"Talk religioso  "      },
        {"Personalit\x81     "   },
        {"Pubblico        "      },
        {"College         "      },
        {"Test \x80\x61llarme   "   },
        {"ALERT! ALERT!   "      },
#endif
#if ENABLE_ANNOUNCEMENT
        {"annuncio      "        },                         
        {"    annuncio    "      },                         
#endif
#if DAB_CONFIG_ANNOUNCEMENT
                             
        {"Allarme         "      },                   
        {"Notizie sul tra."      },                             
        {"Notizie di tras."      },                           
        {"avvertimento    "      },                           
        {"notizie         "      },                      
        {"Weather         "      },                             
        {"tempo           "      },                              
        {"Evento speciale "      },                         
        {"Informazioni    "      },                                 
        {"Notizie sportive"      },                        
        {"Notizie finanzi."      },                            
#endif

#if ENABLE_MULTI_LANGUAGE
        {"Lingua"                },                     
        {"Italiano"              },                    
#endif
        /* mpt plus txt
        */
        {"Spegni"                },                       
#if ENABLE_COOK
        {"Timer"                 },                        
        {"    Set Hour    "      },              
        {"   Set Minute   "      },              
        {"Buzzer Volume "        },                        
#endif
#ifdef DT_FUNC
        {"DT            "        },                
        {"       DT       "      },                
        {"      OFF     "        },                    
        {"      ON      "        },                   
#endif
        {"S\x85"                 },               
        {"No"                    },              
        {"    Standby     "      },                     
        {"DAB"                   },                     
        {"FM"                    },                    
        {"	  I2SIN"              },                       
        {"	 BEEPER"              },                        
        {"SINGLETONE"            },                            
        {"Noise"                 },                       
        {"Line in 1"             },                         
        {"Line in 2"             },                         
        {"AUX"                   },                     
        {"TAPE"                  },                      
        {"PHONO"                 },                       
        {"Bluetooth"             },                    
        {"USB"                   },                     
        {"CARD"                  },                      
        {"CD"                    },                    
#if FM_SCAN_TH
        {"Impostazioni di scansione"},                  
        {"Stazione forte"        },                        
        {"Tutte le stazioni"     },                     
#endif
#if BACKLIGHT_MENU
        {"Tempo scaduto"         },                  
        {"Sopra"                 },                     
        {" Sec"                  },                      
        {"A livello"             },                  
        {"Livello dimmer"        },                   
        {"Alto"                  },                  
        {"Mezzo"                 },                    
        {"Basso"                 },                 
#endif
        {"Sabato"                },              
        {"Domenica"              },              
        {"Lunedi"                },              
        {"Marted\x85"            },              
        {"Mercoled\x85"          },              
        {"Giovedi"               },              
        {"Venerd\x85"            },              

#if !START_POWER
        {"Aggiornamento pe"      },                   
        {"   Attendere    "      },                 
#else
        {"          "            },                   
        {"          "            },                 
#endif
        {"  SNOOZE:"             },                   
        {"      MUTO      "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {"  Benvenuti a   "      },                     
        {" Digital Radio  "      },                         
        {"Batt.in esaurim."      },                     
        {"Batteria scarica"      },                        
        {"  Ricarica...   "      },                       
#if MP3_TYPE
        {"No song"               },                 
        {"Reading..."            },               
        {"Total:"                },               
        {"NO USB"                },                
        {"NO CARD"               },                 
        {"NO DISC"               },                 
        {"OPEN"                  },              
        {"CLOSE"                 },               
        {"Opening"               },                 
        {"Closing"               },                 
        {"ONE"                   },                 
        {"FOL"                   },                    
        {"ALL"                   },                 
        {"RAN"                   },                   
        {"INT"                   },                  
        {"	 "                    },                 
        {"T:"                    },                
        {"Timer"                 },                
        {"MEM "                  },                 
        {"	 CD VER-"             },                   
        {"Full"                  },              
#if MP3_RECORD
        {"Delete One      "      },                 
        {"Delete Folder   "      },                    
        {"Delete All      "      },                 
        {"Deleting...     "      },                   
        {"Record One      "      },                  
        {"Record Folder   "      },                     
        {"Record All      "      },                  
        {"    No media    "      },                   
        {"Card protection "      },                  
        {"   REC:"               },               
        {" Please wait... "      },                     
        {" End recording  "      },                   
        {"   Recording    "      },                      
        {"     Error      "      },                   
        {"      TS        "      },                  
        {"      ONE       "      },                 
        {"     FOLDER     "      },                    
        {"      ALL       "      },                 
#endif
#endif
#if BT_FUNC
        {"   Bluetooth"          },                    
        {"   Collegato    "      },                       
        {"  Appaiamento   "      },                    
        {"  ollegamento   "      },                  
        {"  Eingehend...  "      },                   
        {"  uscente... "         },                   
        {"    chiamata    "      },                  
#endif
        {"  Ingresso AUX  "      },                 
        {"   Cassetta     "      },                 
        {"    Fono        "      },                 
        {" delete"               },                   
        {"  successful !  "      },                       
        {"basso         "        },                  
        {"Alti          "        },                    
        {"      basso     "      },                  
        {"      Alti      "      },                    
        {"    Balance   "        },                     
        {"Preset        "        },                    
        {"Station list  "        },                         
    },
#endif
#endif
};


uint8 * code g_pu8TextTable_2[EN_TXT_MAX_2 - EN_TXT_MAX - 1] =
{

    {"      FM        "},               
    {"      DAB       "      },                
    {"    ERP test    "      },                
    {"Cancel ERP test "      },                      
    {"      MIC       "      },                
    {"      ECHO      "      },                 
    {"                "      },                       
    {"           "           },                       
    {"         "             },                      
    {"        "              },                      
    {"       "               },                      
    {"      "                },                      
    {"     "                 },                      
    {"    "                  },                      
    {"   "                   },                      
    {"    KeyStone    "      },                     
    {" Semiconductor  "      },                          
    {"    00:00:00  "        },                   
    {"   00-00-0000   "      },                   
    {"RSSI:-"                },                
#if ENABLE_CUVBROS
    {"    Oceanus     "      },                    
    {"   Upgrade FW   "      },                      
    {"  Press 'INFO'  "      },                      
    {"     FAILED     "      },                   
    {"    SUCCESS!    "      },                    
#endif
#if ENABLE_LINE_IN_UI
    {"Line in 1       "      },                     
    {"Line in 2       "      },                     
#endif

                                                   
    {"5A  "                  },              
    {"5B  "                  },              
    {"5C  "                  },              
    {"5D  "                  },              
    {"6A  "                  },              
    {"6B  "                  },              
    {"6C  "                  },              
    {"6D  "                  },              
    {"7A  "                  },              
    {"7B  "                  },              
    {"7C  "                  },              
    {"7D  "                  },              
    {"8A  "                  },              
    {"8B  "                  },              
    {"8C  "                  },              
    {"8D  "                  },              
    {"9A  "                  },              
    {"9B  "                  },              
    {"9C  "                  },              
    {"9D  "                  },              
    {"10A "                  },               
#if CONFIG_USE_N
    {"10N "                  },               
#endif
    {"10B "                  },               
    {"10C "                  },               
    {"10D "                  },               
    {"11A "                  },               
#if CONFIG_USE_N
    {"11N "                  },               
#endif
    {"11B "                  },               
    {"11C "                  },               
    {"11D "                  },               
    {"12A "                  },               
#if CONFIG_USE_N
    {"12N "                  },               
#endif
    {"12B "                  },               
    {"12C "                  },               
    {"12D "                  },               
    {"13A "                  },               
    {"13B "                  },               
    {"13C "                  },               
    {"13D "                  },               
    {"13E "                  },               
    {"13F "                  },               
#if CONFIG_USE_CHINA_BAND
    {"C6A "                  },               
    {"C6B "                  },               
    {"C6C "                  },               
    {"C6D "                  },               
    {"C6N "                  },               
    {"C7A "                  },               
    {"C7B "                  },               
    {"C7C "                  },               
    {"C7D "                  },               
    {"C8A "                  },               
    {"C8B "                  },               
    {"C8C "                  },               
    {"C8D "                  },               
    {"C8N "                  },               
    {"C9A "                  },               
    {"C9B "                  },               
    {"C9C "                  },               
    {"C9D "                  },               
    {"C10A"                  },                
    {"C10B"                  },                
    {"C10C"                  },                
    {"C10D"                  },                
    {"C10N"                  },                
    {"C11A"                  },                
    {"C11B"                  },                
    {"C11C"                  },                
    {"C11D"                  },                
    {"C12A"                  },                
    {"C12B"                  },                
    {"C12C"                  },                
    {"C12D"                  },                
#endif
};
#endif