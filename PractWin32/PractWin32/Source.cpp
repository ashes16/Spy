#include<Windows.h>
#include"SystemMetrics.h"

int ipaintflag=0;
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	HWND hwnd;
	MSG msg;
	WNDCLASSEX	 wndclass;
	TCHAR azAppName[] = TEXT("MY Window");

	wndclass.cbSize = sizeof(wndclass);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = WndProc;
	wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hInstance = hInstance;
	wndclass.lpszClassName = azAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	RegisterClassEx(&wndclass);
	hwnd = CreateWindow(azAppName,TEXT("HEY"),WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,NULL,NULL,hInstance,NULL);

	ShowWindow(hwnd, iCmdShow);
	UpdateWindow(hwnd);

	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return(int)msg.wParam;
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT imsg, WPARAM wparam, LPARAM lparam)
{
	
	TCHAR str[]=TEXT("!!! HELLO WORLD !!!");
	HDC hdc;
	RECT rect;
	TEXTMETRIC tm;
	PAINTSTRUCT ps;
	switch (imsg)
	{
	case WM_CHAR:
		switch (wparam)
		{
		case 'r':
		case 'R':
			ipaintflag = 1;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case 'g':
		case 'G':
			ipaintflag = 2;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case 'b':
		case'B':
			ipaintflag = 3;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case 'c':
		case'C':
			ipaintflag = 4;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case'm':
		case 'M':
			ipaintflag = 5;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case 'y':
		case'Y':
			ipaintflag = 6;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		}
		break;
	case WM_LBUTTONDOWN:
		ipaintflag = 7;
		InvalidateRect(hwnd, NULL, TRUE);
		break;
	case WM_RBUTTONDOWN:
		ipaintflag = 8;
		InvalidateRect(hwnd, NULL, TRUE);
		break;
	case WM_PAINT:
		GetClientRect(hwnd, &rect);
		hdc = BeginPaint(hwnd, &ps);
		SetBkColor(hdc, RGB(0, 0, 0));
		if (ipaintflag == 1)
			SetTextColor(hdc, RGB(255, 0, 0));
		else if (ipaintflag == 2)
			SetTextColor(hdc, RGB(0, 255, 0));
		else if (ipaintflag == 3)
			SetTextColor(hdc, RGB(0, 0, 255));
		else if (ipaintflag == 4)
			SetTextColor(hdc, RGB(0, 255, 255));
		else if (ipaintflag == 5)
			SetTextColor(hdc, RGB(255, 0, 255));
		else if (ipaintflag == 6)
			SetTextColor(hdc, RGB(255, 225, 0));
		else if (ipaintflag == 7)
			SetTextColor(hdc, RGB(255, 255, 255));
		else if (ipaintflag == 8)
			SetTextColor(hdc, RGB(255, 165, 0));

		DrawText(hdc, str, -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
		EndPaint(hwnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		break;
	}

	return DefWindowProc(hwnd, imsg, wparam, lparam);
}