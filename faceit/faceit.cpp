#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <iostream>
#include "file.h"

void MorphScript::Script()
{
	keybd_event(VK_SPACE, 0x39, NULL, NULL);
	keybd_event(VK_SPACE, 0x39, KEYEVENTF_KEYUP, NULL);
}

void MorphScript::HideThis()
{
	HWND Stealth;
	AllocConsole();
	Stealth = FindWindowA(XorStr("ConsoleWindowClass"), NULL); //Find actually window
	ShowWindow(Stealth, 0);
}

void MorphScript::Message()
{
	MessageBox(NULL, XorStr("Successfully loaded!"), XorStr("FaceIT - Client"), MB_OK); //If everything works fine!
}

void MorphScript::Check()
{

}

int main()
{
	ScriptMorph* polymorphism = new MorphScript; //Define the way, polymorphism

	if (Hide) //If hide is "true"
		polymorphism->HideThis(); //Hide this window

	if (Message) //If message is "true"
		polymorphism->Message(); //Show up message

	while (true) //Loop
	{
		Sleep(1);
		if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000) //Bind on mouse4
		{
			polymorphism->Script(); //Start faceit script
		}

		if (GetAsyncKeyState(VK_DELETE)) //Bind key, what close this program
		{
			ExitProcess(-1); //Exit Process
		}
	}
}                     