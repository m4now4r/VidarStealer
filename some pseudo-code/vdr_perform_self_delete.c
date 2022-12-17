// #STR: "\" & exit", "C:\\Windows\\System32\\cmd.exe", "timeout /t 6 & del /f /q \""
void __stdcall __noreturn vdr_perform_self_delete()
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  memset(szCommand, 0, sizeof(szCommand));
  memset(&pExecInfo, 0, sizeof(pExecInfo));
  lstrcatA(szCommand, "/c ");
  lstrcatA(szCommand, "timeout /t 6 & del /f /q \"");
  dwCurrProcId = GetCurrentProcessId_1();
  str_process_full_path = vdr_retrieve_full_path_of_process(&sdtStr, dwCurrProcId);
  v5 = 0;
  if ( str_process_full_path->dwDynamicNumBytes >= 0x10u )
  {
    str_process_full_path = str_process_full_path->pszString;
  }
  lstrcatA(szCommand, str_process_full_path);
  v5 = 0xFFFFFFFF;
  std::string::_Tidy(&sdtStr, 1, 0);
  lstrcatA(szCommand, "\" & exit");
  pExecInfo.lpParameters = szCommand;
  pExecInfo.cbSize = '<';
  pExecInfo.fMask = 0;
  pExecInfo.hwnd = 0;
  pExecInfo.lpVerb = "open";
  pExecInfo.lpFile = "C:\\Windows\\System32\\cmd.exe";
  pExecInfo.lpDirectory = 0;
  pExecInfo.nShow = 0;
  pExecInfo.hInstApp = 0;
  ShellExecuteExA(&pExecInfo);
  memset(&pExecInfo, 0, sizeof(pExecInfo));
  memset(szCommand, 0, sizeof(szCommand));
  ExitProcess_1(0);
}
