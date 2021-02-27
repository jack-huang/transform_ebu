
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
        {"Ręczne dostrajanie"},                    
        {"Lista stacji"          },                    
        {"Pełny"              },              
        {"Brak stacji DAB"       },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"     Alarm      "      },                  
        {"     Zapisano   "      },                  
        {"  Nie zapisano  "      },                     
        {"Alarm"                 },                 
        {"Wyłącz "      },               
        {"Alarms        "        },                  
        {"Szczegóły alarmu"},                        
        {"Głośność alarmu "},                        
        {"Codziennie    "        },                  
        {"Jeden raz     "        },                 
        {"Dni powszednie"        },                     
        {"Weekendy      "        },                     
        {" Dni:"                 },                
        {"      Dni:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Brzęczyk      "  },                   
        {"Żródło: "  },                
        {"     Żródło     "},                 
        {"Włącz         "},               
        {"Alarm wyłączony"},                
        {"Ostatnio grane"        },                         
        {" unset"                },                 
        {" set  "                },               
        {"     Preset     "      },                   
        {"Zapisz        "        },                 
        {"Czas: "                },                
        {"Ustaw czas alarmu"     },                         
        {"   Brak czasu   "      },                       
        {" Alarm Radiowy  "      },                        
        {"Alarm wyłączony"},                     
#if ALARM_SET_DURATION
        {"    Duraçåo     "},                      
        {"Duraçåo:"        },                      
#endif
#endif

                         
        {"Wyrównywacz"        },                   
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
                        
        {"Przyciąć"        },               
        {"Przyciąć?"       },                    
#if DATABASE_SORT_ENABLE
                        
        {"Kolejność stacji"},               
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
        {"DRC wył."           },                     
        {"DRC niski"             },                 
        {"DRC wysoki"            },                  
#endif

                             
        {"Reset fabryczny"       },                         
        {"Wznawianie...   "      },                       
        {"Reset fabryczny?"      },                          
        {"Naciśnij 'Enter', aby"},                        
        {"Zresetuj        "      },                         

                          
        {"Wersja oprogramowania" },                 

                           
        {"Czuwanie"              },               
        {"Wył."               },                  
        {"Ustaw czuwanie"        },                       
        {"Pozostawać  "       },                   

                         
        {"Podświetlenie"      },                   

                      
        {"Głośność"  },                

                          
        {"Ustaw czas/datę"    },                   
        {"Ustaw czas"            },                  
        {"Ustaw datę"         },                 
        {"Autoaktualizacja"      },                    
        {"Set 12/24 hour"        },                     
        {"AM"                    },              
        {"PM"                    },              
        {"Brak aktualizacji"     },                  
        {"Aktualizuj ze wszystkich"},                   
        {"Ustaw 24-godzinny czas"},                   
        {"Ustaw 12-godzinny czas"},                   
        {" Nieprawidłowy  "   },                    
        {"      Data      "      },                 

                    
        {"[Brak RadioText]"      },                        
        {"Przeglądanie... "},                     
        {"MHz        "           },                
        {"[Brak PTY]      "      },                  
        {"Łączenie        "},                       
        {"Błędny sygnał"},                        
        {"Przeglądanie "},                     
        {"[Brak nazwy]    "      },                   
        {"Odtwarzanie     "      },                    
        {"Niedostępne   "     },                         
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
        {"Język"              },                     
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
        {"Poziom ściemniacza"},                   
        {"Wysoki"                },                  
        {"Środkowy"           },                    
        {"Niska"                 },                 
#endif


        {"sobota"                },              
        {"niedziela"             },              
        {"poniedziałek"    },              
        {"wtorek"                },              
        {"środa"              },              
        {"czwartek"              },              
        {"piętek"             },              

#if !START_POWER
        {"  Aktualizacja  "      },                   
        {" Proszż czekać  "},                 
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
        {"  Ładowanie...  "},                       

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
        {"   Połączony "},                       
        {"   Parowanie    "      },                    
        {"    Łączenie    "},                  
        {"Przychodzące... "},                   
        {"Idźdo telefonu.."},                   
        {"   Powoł\61nie    " },                  
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
        {"Estéreo permitido"  },                      
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



                        
        {"Escaneo de estaciÓn"},                     
        {"Búsqueda completa"  },                  
        {"Sintonización manual"},                    
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
        {"ías de semana "  },                     
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
        {"Última escuchada"   },                         
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
        {"    Duración    "   },                      
        {"Duración:"          },                      
#endif

#endif

                         
        {"Igualada"              },                   
#ifdef AMP_FUNC_EQ
        {"Plano"                 },                  
        {"Rock"                  },                      
        {"Clásico"            },                 
        {"Jazz"                  },                 
        {"Popular"               },                  
        {"Bajo"                  },                 
        {"Acústico"           },                     
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
        {"alfanumérico"       },                     
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

                          
        {"Versión de software"},                 

                           
        {"Sleep"                 },               
        {"Def. hora sleep"       },                       
        {" Desactivado  "        },                  
        {"Rimangono   "          },                   

                         
        {"Retroiluminaciün"   },                    


                      
        {"Volumen"               },                

                          
        {"Ajustar horaťcha"},                   
        {"Ajustar hora"          },                  
        {"Ajustar fecha"         },                 
        {"Actualización automática"},                    
        {"Ajustar 12/24 horas"   },                     
        {"AM"                    },              
        {"PM"                    },              
        {"No actualizar "        },                  
        {"Actualizar de cualquiera"},                   
        {"Ajustar 24 horas"      },                   
        {"Ajustar 12 horas"      },                   
        {"    Inválida    "   },                    
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
        {"Estación DAB"       },                        
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
        {"Información      "  },                        
        {"Deportes        "      },                   
        {"Educación    "      },                      
        {"Drama           "      },                  
        {"Arte            "      },                 
        {"Ciencia         "      },                    
        {"Varios          "      },                 
        {"Música Pop      "   },                     
        {"Música Rock     "   },                      
        {"Grandes éxitos  "   },                          
        {"Música ligera   "   },                           
        {"Música clásica      "},                           
        {"Música varia    "   },                       
        {"Meteorología    "},                    
        {"Economía        "},                    
        {"Infancia        "      },                      
        {"Sociedad        "      },                    
        {"Religión        "   },                     
        {"Opinión-oyentes "   },                    
        {"Viajes          "      },                   
        {"Ocio            "      },                    
        {"Música Jazz     "   },                         
        {"Música country  "   },                         
        {"Música nacional "   },                          
        {"Música de ayer  "   },                        
        {"Música folk     "   },                      
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
        {"Español"            },                    
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

        {"SÍ"                 },               
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
        {"Configuración de escaneo"},                  
        {"Estación fuerte"    },                        
        {"Todas las estaciones"  },                     
#endif
#if BACKLIGHT_MENU
        {"Se acabó el tiempo" },                  
        {"En"                    },                     
        {" Seg"                  },                      
        {"En el nivel"           },                  
        {"Nivel de atenuador"    },                   
        {"Alto"                  },                  
        {"Medio"                 },                    
        {"Bajo"                  },                 
#endif
        {"sàbado"    },              
        {"domingo"               },              
        {"lunes"                 },              
        {"martes"                },              
        {"miércoles"          },              
        {"jueves"                },              
        {"viernes"               },              


#if !START_POWER
        {"  Actualizar    "      },                   
        {"Espere por favor"      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"Repetición:"        },                   
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
        {"    Vocación    "   },                  
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
        {"Pñ            "     },               
        {"Av            "        },                
        {"Sist hørt pñ  "  },                         
        {" unset"                },                 
        {" set  "                },               
        {"Forhñndsinnstill"   },                   
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
        {"Høy"                },                  
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
        {"Vòrmelding      "   },                    
        {"çkonomi         "   },                    
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
        {"Vòrmelding   "      },                           
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
        {"Språk"              },                     
        {"Norsk"                 },                    
#endif
        /* mpt plus txt
        */
        {"Slå av"             },                       
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
        {"På"                 },                     
        {" Sek"                  },                      
        {"På nivå"         },                  
        {"Dimmernivå"         },                   
        {"Høy"                },                  
        {"Midten"                },                    
        {"Lav"                   },                 
#endif
        {"Lørdag"             },              
        {"søndag"             },              
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
                         
        {"Päävalikko"      },                

                                
        {"Ñänen asetus"    },                      
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
        {"Täydell selaus"     },                  
        {"Manuaali haku"         },                    
        {"Asemaluettelo"         },                    
        {"täydell"            },              
        {"Ingen DAB-st."         },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"    Hälytys     "   },                  
        {"  Tallennettu   "      },                  
        {" Ei tallennettu "      },                     
        {"Alarm"                 },                 
        {"Pois   "               },               
        {"   Hälytys    "     },                  
        {"  Alarm detail  "      },                        
        {"Hälytys tilavuus"   },                        
        {"Päivittäin    "  },                  
        {"Kerran        "        },                 
        {"Arkipäivinä   "  },                     
        {"Viikonloppuina"        },                     
        {"Days: "                },                
        {"     Days:      "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Summeri       "        },                   
        {"Tila: "                },                
        {"     Tila       "      },                 
        {"Päällä        "},               
        {"Pois päältä   "},                
        {"Viimeksi kuun."        },                         
        {" unset"                },                 
        {" set  "                },               
        {"   Muistissa    "      },                   
        {"Tallentaa     "        },                 
        {"Aika: "                },                
        {"AsetaHälytysaika"   },                         
        {"Ei aika asetettu"      },                       
        {"  Radiohälytys  "   },                        
        {"  Hälytys pois  "   },                     
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
        {"Käynnistys INFO "   },                        
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
        {"Ei päivitystä "  },                  
        {"From radio    "        },                   
        {"Set 24 hour   "        },                   
        {"Set 12 hour   "        },                   
        {"    Epäkelpo    "   },                    
        {"     Päivät     "},                 

                    
        {"[EiRadiotekstiä]"   },                        
        {"Skannaus...     "      },                     
        {"MHz        "           },                
        {"[ei PTY]        "      },                  
        {"Ansluter      "        },                       
        {"Signaalivirhe"         },                        
        {"Skannaus     "         },                     
        {"[Ei nimeä]      "   },                   
        {"Pelissä         "   },                    
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

                                                      
        {"Ei määritelty   "},                 
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
        {"Säätiedotus     "},                    
        {"Talousohjelma   "      },                    
        {"Lastenohjelma   "      },                      
        {"Yhteiskunta     "      },                    
        {"Uskonto         "      },                     
        {"Yleisökontakti  "   },                    
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
        {"Säätiedotus"     },                           
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
        {"Aikalisä"           },                  
        {"Päällä"       },                     
        {" Toi"                  },                      
        {"Tasolla"               },                  
        {"Himmentimen taso"      },                   
        {"Korkea"                },                  
        {"keskimmäinen"       },                    
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


                                
        {"Ljudinställning"    },                      
        {"Stereo tillåten"    },                      
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



                        
        {"Stationssökning"    },                     
        {"Full avsökning"     },                  
        {"Manell Tuning"         },                    
        {"Stationslista"         },                    
        {"fullständig"        },              
        {"Ingen DAB-st."         },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"     Alarm      "      },                  
        {"  Alarm sparat  "      },                  
        {"Alarm ej sparat "      },                     
        {"Alarm"                 },                 
        {"Av     "               },               
        {"    Alarm     "        },                  
        {" Ställ in alarm "   },                        
        {"   Alarmvolym   "      },                        
        {"Dagligen      "        },                  
        {"En gång       "     },                 
        {"På vardagar   "     },                     
        {"På veckoslut  "     },                     
        {"Dagar:"                },                
        {"     Dagar:     "      },                 
        {"DAB           "        },                
        {"FM            "        },               
        {"Buzzer        "        },                   
        {"Läge: "             },                
        {"     Läge       "   },                 
        {"Pñ            "     },               
        {"Av            "        },                
        {"Senast avlyss."        },                         
        {" unset"                },                 
        {" set  "                },               
        {"  Förinställd   "},                   
        {"Spara         "        },                 
        {"Tid:  "                },                
        {"  Inställning    "  },                         
        {"  No time set   "      },                       
        {"   Radiolarm    "      },                        
        {"    Larm av     "      },                     
#if ALARM_SET_DURATION
        {"  Varaktighet   "      },                      
        {"Varaktighet:"          },                      
#endif
#endif

                         
        {"Utjämnare"          },                   
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
        {"låg"                },                 
        {"Hög"                },                  
#endif

                             
        {"Återställ fabriksinställningar"},                         
        {"Startar om...   "      },                       
        {"Återställ fabriksinställningar?"},                          
        {"Tryck på'Enter' till"},                        
        {"                "      },                         

                          
        {"Programversion"        },                 

                           
        {"Sleep"                 },               
        {"Ange sleep-tid"        },                       
        {"Av"                    },                  
        {"Förbli      "       },                   

                         
        {"Bakgrundsbelysning"    },                   

                      
        {"Volym"                 },                

                          
        {"Ställ in tid/datum" },                   
        {"Ställ in tid"       },                  
        {"Ställ in datum"     },                 
        {"Automatisk uppdatering"},                    
        {"Ställ in 12/24-timmar"},                     
        {"AM"                    },              
        {"PM"                    },              
        {"Ingen uppdater"        },                  
        {"Uppdatering från any"},                   
        {"Välj 24 timmar"     },                   
        {"Välj 12 timmar"     },                   
        {"   Ogiltigt     "      },                    
        {"      Datum     "      },                 

                    
        {"[IngenRadioText]"      },                        
        {"Avsöker...      "   },                     
        {"MHz        "           },                
        {"[Ingen PTY]     "      },                  
        {"Ansluta         "      },                       
        {"Signalfel    "         },                        
        {"Avsöker...   "      },                     
        {"[Inget namn]    "      },                   
        {"Spelar          "      },                    
        {"Inte tillgänglig"   },                         
        {"kbps"                  },                
        {"[No Time]       "      },                   
        {"FM"                    },              
        {"St "                   },              
        {"DAB-stationen"         },                        
#if FM_AUTOSCAN_STATION_MAX
        {"FM Station List "      },                            
#endif

                      
        {"  Förinstölld   "},                        
        {"     stored     "      },                         
        {"Förinstölld"     },                   
        {"      Tom       "      },                  
        {"Hämta förinst."  },                         
        {" Hämta förinst. "},                         
        {"Lagra fõrinst."     },                        
        {" Lagra fõrinst. "   },                        
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
        {"Underhñllning   "   },                 
        {"Popmusik        "      },                     
        {"Rockmusik       "      },                      
        {"Lättlyssnat     "   },                          
        {"Lätt klassiskt  "   },                           
        {"Klassisk musik  "      },                           
        {"Övrig musik     "   },                       
        {"Vä""der           " },                    
        {"Ekonomi         "      },                    
        {"För barn        "   },                      
        {"Sociala frñgor  "   },                    
        {"Andliga frñgor  "   },                     
        {"Telefonväkteri  "   },                    
        {"Resor & semester"      },                   
        {"Fritid & hobby  "      },                    
        {"Jazzmusik       "      },                         
        {"Countrymusik    "      },                         
        {"Nationell musik "      },                          
        {"Gamla godingar  "      },                        
        {"Folkmusik       "      },                      
        {"Dokumentärer    "   },                        
        {"<Odefinierad>   "      },                      

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Larmtest        "      },                      
        {"Larm - larm!    "      },                       
        {"Kultur          "      },                    
        {"Underhñllning"      },                         
        {"Lätt klassiskt"     },                           
        {"Klassisk musik  "      },                            
        {"Vä""der      "      },                           
        {"För barn     "      },                           
        {"Sociala frñgor"     },                          
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
        {"Språk"              },                     
        {"Svenska"               },                    
#endif
        /* mpt plus txt
        */
        {"Stäng av"           },                       
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
        {"Skanningsinställning"},                  
        {"Stark station"         },                        
        {"Alla stationer"        },                     
#endif
#if BACKLIGHT_MENU
        {"Paus"                  },                  
        {"På"                 },                     
        {" And"                  },                      
        {"På nivå"         },                  
        {"Dimmernivå"         },                   
        {"Hög"                },                  
        {"Mitten"                },                    
        {"Låg"                },                 
#endif

        {"lördag"                      },              
        {"söndag"                      },              
        {"MÝndag"                      },             
        {"Tisdag"                           },              
        {"Onsdag"                           },              
        {"Torsdag"                         },              
        {"Fredag"                           },              

#if !START_POWER
        {"Uppdatering   "                },                   
        {"     Vänta      "   },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"  SNOOZE:"             },                   
        {"     Ljud av    "      },              
        {"    Sätt på     "},                   
        {SOFT_VER                          },                
        {"  Välkommen t.  "   },                     
        {" Digital Radio  "      },                         
        {"  Batteri lågt  "   },                     
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
                        
        {"Nedskær"            },               
        {"Nedskær?"           },                    
#if DATABASE_SORT_ENABLE
                        
        {"Stations Rækkefølge"},               
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
        {"Høj"                },                  
#endif

                             
        {"Gendan Fabriksindstillinger"},                         
        {"Genstarter...   "      },                       
        {"Gendan Fabriksindstillinger?"},                          
        {"Tryk på'Enter' til" },                        
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
        {"Scanner��       "      },                     
        {"MHz        "           },                
        {"[Ingen PTY]     "      },                  
        {"Tilslutter      "      },                       
        {"Signal fejl  "         },                        
        {"Scanner..    "         },                     
        {"[Intet Navn]    "      },                   
        {"Afspiller       "      },                    
        {"Ikke tilgòngelig"   },                         
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
        {"çkonomi&erhverv "   },                    
        {"Børneprogram    "   },                      
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
        {"Børneprogram "      },                           
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
        {"Stærk station"      },                        
        {"Alle stationer"        },                     
#endif
#if BACKLIGHT_MENU
        {"Tiden er gået"   },                  
        {"På"                 },                     
        {" And"                  },                      
        {"På niveau"          },                  
        {"Dimmerniveau"          },                   
        {"Høj"                },                  
        {"Mellemøsten"        },                    
        {"Lav"                   },                 
#endif
        {"Lørdag"             },              
        {"Søndag"             },              
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
        {"Hjælpe indg.eff."   },                                     
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
                         
        {"Système"            },                


                                
        {"Règlage audio"      },                      
        {"Stéréo admis"    },
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
        {"Réglage manuel"     },                    
        {"Liste de stat."        },                    
        {"Complet"               },              
        {"Pas de ch. DAB"        },                  
        {"MHz"                   },               

                     
#if (ALARM_NUM_MAX != 0)
        {"    Réveil      "   },                  
        {"   Enregistré   "   },                  
        {" Non enregistré "   },                     
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
        {"Activé        "     },               
        {"Désactivé     "  },                
        {"Dernier ecoute"        },                         
        {"nonjeu"                },                 
        {"Réglez"             },               
        {"   Préréglez    "},                   
        {"Enregistrez   "        },                 
        {"Heure:"                },                
        {"Réglez le réveil"},                         
        {"Aucun jeu áheure"   },                       
        {"  Alarme radio   "     },                        
        {" Alarmeéteinte "    },                     
#if ALARM_SET_DURATION
        {"     Durée      "   },                      
        {"Durée:"             },                      
#endif
#endif

                         
        {"Égaliseur"          },                   
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
                        
        {"Ecrêater"        },               
        {"Ecrêater?"       },                    
#if DATABASE_SORT_ENABLE
                        
        {"Ordre de stations"     },
        {"Multiplex"             },
        {"Alphanumérique"     },
        {"Actif"                 },

#endif
#if DF_CONFIG_AF
        {"Recherche "            },                      
        {"Alt-freq      "        },                    
        {"    Alt-freq    "      },                    
#endif

#if ENABLE_DAB_DRC
        {"DRC"                   },              
        {"Désactivé"       },                     
        {"Bas"                   },                 
        {"Haut"                  },                  
#endif

                             
        {"Régl. en usine"     },
        {"Redémarrage...  "   },
        {"Régl. en usine?"    },

        {"Appuyez sur 'Entrée' pour"},
        {""                      },


                         
        {"Version logiciel"      },


                           
        {"Mode sommeil"          },               
        {"Mode sommeil"          },                       
        {"Arr.mode sommeil"      },                  
        {"Restantes   "          },                   

                         
        {"Rétroéclairage"},                   

                      
        {"Volume"                },                

        {"Régl. heure/date"   },                   
        {"Réglez heure"       },                  
        {"Réglez date"        },                 
        {"MAJ Automatique"       },                    
        {"Régl. 12/24 h "     },                     
        {"AM"                    },              
        {"PM"                    },              
        {"No update"             },                  
        {"De radio"              },                   
        {"Régl. 24 h"         },                   
        {"Régl. 12 h"         },                   
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
        {"    mémoire     "   },                         
        {"    Preset"            },                   
        {"      Vide      "      },                  
        {"Rappel mémorisé" },                         
        {"Rappel mémorisé "},                         
        {"Mémor. prérégl."},                        
        {" Mémor. prérégl. "},                        
        {"(Vide)     "           },                  
        {"Preset"                },                  

        {"Stereo  "              },
        {"J-Stereo"              },
        {"DChannel"              },
        {"Mono    "              },

                                                      
        {"Non_défini      "},
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
        {"Classique_léger "   },
        {"MusiqueClassique"      },
        {"Autre_Musique   "      },
        {"Météo           "},
        {"Economie        "      },
        {"Enfants         "      },
        {"Société         "},
        {"Religion        "      },
        {"Ligne_ouverte   "      },
        {"Voyage          "      },
        {"Loisirs         "      },
        {"Jazz            "      },
        {"Country         "      },
        {"Chanson_du_pays "      },
        {"Musique_rétro   "   },
        {"Folklore        "      },
        {"Documentaire    "      },
        {"<Undefined>     "      },

#if (CONFIG_USE_FM_REGION == CONFIG_FM_REGION_EUROPE)
                                                                      
        {"Réveil-test     "   },
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
        {"Hits áadultes   "   },
        {"Rock léger      "   },
        {"Top 40          "      },
        {"Pays            "      },
        {"Rétro           "   },
        {"Léger           "   },
        {"Nostalgie       "      },
        {"Jazz            "      },
        {"Classique       "      },
        {"Rhythm & Blues  "      },
        {"R 'n' B léger   "   },
        {"Langue étrangère"},
        {"Musique sacrée  "   },
        {"Talk religieux  "      },
        {"Personnalité    "   },
        {"Public          "      },
        {"Collège         "   },
        {"Test áurgence   "   },
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
        {"MétéO           "},                             
        {"un événement    "},                              
        {"Special event   "      },                         
        {"Spécial         "},                                 
        {"Spécial         "},                        
        {"financières     "   },                            
#endif


#if ENABLE_MULTI_LANGUAGE
        {"Language"              },                     
        {"Français"        },                    
#endif
        /* mpt plus txt
        */
        {"Éteindre"           },                       
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
        {"Réglage de numérisation"},                  
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
        {" Mettre à jour  "   },                   
        {"   Un instant   "      },                 
#else
        {"                "      },                   
        {"                "      },                 
#endif
        {"Veilleuse:"            },                   
        {"    SILENCE     "      },              
        {"     UNMUTE     "      },                   
        {SOFT_VER                          },                
        {"Bienvenue à la  "   },                    
        {"radio numérique"    },                         
        {"Batterie épuisée"},                     
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
        {"   Connecté "       },                       
        {"   Pairing      "      },                    
        {"   Connexion    "      },                  
        {"Appel entrant..."      },                   
        {"   Sortant...   "      },                   
        {"    Appelez     "      },                  
#endif
        {"   EntreéAux   " },                                     
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
        {"Stereo möglich"     },                      
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
        {"Vollständiger Suchlauf"},                  
        {"Manuell einstellen"    },                    
        {"Senderliste"           },                    
        {"vollständig"        },              
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
        {"Lautstärke      "   },                        
        {"Täglich       "     },                  
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
        {"Zuletzt gehört"     },                         
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
        {"Enter' drücken " },                        
        {"                "      },                         

                          
        {"SW-Version"            },                 

                           
        {"Sleep"                 },               
        {"Schlaf-Timer"          },                       
        {"Aus"                   },                  
        {"Bleiben     "          },                   

                         
        {"Hintergrundbeleuchtung"},                    
                      
        {"Lautstärke"         },                
                          
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
        {"    Ungültig    "   },                    
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
        {"Nicht verfügbar "   },                         
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
        {"Hörspiel_+_Lit  "   },
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
        {"Religiöse Musik "   },
        {"Religiöser Talk "   },
        {"Persönlich      "   },
        {"Öffentlich      "   },
        {"Universität     "   },
        {"Notfall-Test    "      },
        {"Achtung!        "      },
#endif
#if ENABLE_ANNOUNCEMENT
        {"Ankündigung   "     },                         
        {"  Ankündigung   "   },                         
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
        {"Höhen         "     },                    
        {"      Bass      "      },                  
        {"     Höhen      "   },                    
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
        {"Acústica"           },

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
        {"Personalità     "   },
        {"Pubblico        "      },
        {"College         "      },
        {"Test áallarme   "   },
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
        {"Sì"                 },               
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
        {"Martedì"            },              
        {"Mercoledì"          },              
        {"Giovedi"               },              
        {"Venerdì"            },              

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