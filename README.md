# VidarStealer
Notes some analysis related to VidarStealer sample

## Sample:
**Loader:** https://bazaar.abuse.ch/sample/816c4a2117b90dc75d91056ca32a36ffd32d561aa433ee3f97126ba490e6d60a/

**Unpacked:** 7bd942857a29e7f2931da2bd8fa1d118

## Decrypt strings
Here is the pseudo-code of function will decrypt strings: 

    _BYTE *__usercall vdr_decrypt_strings@<eax>(uint32_t len@<ecx>, char *xor_key, const char *encStr)
    {
      // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]
    
      cnt = 0x208;
      v5 = Destination;
      do
      {
        *(_BYTE *)v5 = 0;
        v5 = (wchar_t *)((char *)v5 + 1);
        --cnt;
      }
      while ( cnt );
      wcscat(Destination, L"Nor again is there anyone who loves or pursues or desires to obtain pain of itself, because it is pain");
      wcslen(Destination);
      wcslen(Destination);
      wcslen(Destination);
      wcslen(Destination);
      decStr = LocalAlloc(0x40u, len + 1);
      wcslen(Destination);
      wcslen(Destination);
      wcslen(Destination);
      wcslen(Destination);
      decStr[len] = 0;
      wcslen(Destination);
      wcslen(Destination);
      wcslen(Destination);
      wcslen(Destination);
      for ( i = 0; i < len; ++i )
      {
        wcslen(Destination);
        wcslen(Destination);
        decStr[i] = xor_key[i] ^ encStr[i % strlen(encStr)];
        wcslen(Destination);
        wcslen(Destination);
      }
      wcslen(Destination);
      wcslen(Destination);
      memset(Destination, 0, sizeof(Destination));
      return decStr;
    }
