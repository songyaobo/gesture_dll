// testDll.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h> 
#include "NiTE.h"
#include <NiteSampleUtilities.h>
#include<vector>
#include<iostream>
#include<myDll.h>

using namespace std;

//typedef int(*RecFunc)();
//typedef int(*InitializationFunc)();

HMODULE hModule = NULL;  

int _tmain(int argc, _TCHAR* argv[])
{	
	
	Initialization();

	while (!wasKeyboardHit())
	{
		switch (HandRec())
		{
		case 1:
			cout<<"++++horizontal++++"<<endl;
			break;
		case 2:
			cout<<"----horizontal----"<<endl;	
			break;
		case 3:
			cout<<"++++vertical++++"<<endl;	
			break;
		case 4:
			cout<<"----vertical------"<<endl;		
			break;
		}
	}

	/*hModule = LoadLibraryA("Gesture_Rec.dll");

	if(hModule==NULL)  
	{  
	cout<<"LoadLibrary error"<<endl;  
	getchar();  
	return 0;  
	}  

	RecFunc _RecFunc=(RecFunc)GetProcAddress(hModule,"HandRec");
	InitializationFunc _InitializationFunc=(InitializationFunc)GetProcAddress(hModule,"Initialization");  	

	_InitializationFunc();

	while (!wasKeyboardHit())
	{
	switch (_RecFunc())
	{
	case 1:
	cout<<"++++horizontal++++"<<endl;
	break;
	case 2:
	cout<<"----horizontal----"<<endl;	
	break;
	case 3:
	cout<<"++++vertical++++"<<endl;	
	break;
	case 4:
	cout<<"----vertical------"<<endl;		
	break;
	}
	}	
	FreeLibrary(hModule);  */


	return 0;
}

