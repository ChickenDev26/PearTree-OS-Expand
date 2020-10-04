#include <iostream> //Includes iostream directory
#include <windows.h>
#include "fmakeapp.h"
#include "lang.h"
#include <fstream>
using namespace std;

//runtime variables
string startup;
bool kernelOn=false;
string kernelName="PearTree_kernel";
string version="vBETARELEASE:0.0.1.0";
string commandInp;
string currentPosition="C:/PEARTREEOS";

int main();
void command_operator();

void commandParser(string currentPos,string commandSent){
	if(currentPos=="C:/PEARTREEOS"){
		if(commandSent=="open<<.kernel"){
			currentPosition="C:/PEARTREEOS/KERNEL";
			command_operator();
		}
		else{
			cout <<"ERROR: Kernel not booted. Boot the kernel."<< endl;
			system("pause");
			system("cls");
			command_operator();
		}
	}
	
	if(currentPos=="C:/PEARTREEOS/KERNEL"){
		if(commandSent=="open<<.folder"){
			currentPosition="C:/PEARTREEOS/KERNEL/Folder";
			command_operator();
		}
		else{
			command_operator();
		}
	}
	
	if(currentPos=="C:/PEARTREEOS/KERNEL/Folder"){
		if(commandSent=="app<<.fmake"){
			fmakeNew("KRNLOUT");
			command_operator();
		}
		
		if(commandSent=="app<<.toolkit"){
			system("cls");
			commandInputer();
		}
		
		if(commandSent=="<back()>"){
			currentPosition="C:/PEARTREEOS/KERNEL";
			command_operator();
		}
		else{
			command_operator();
		}
	}
}

void command_operator(){
	cout << currentPosition << ">> ";
	
	cin >> commandInp;
	
	commandParser(currentPosition,commandInp);
}

int loop(){
   	cout <<"              DISCLAIMER:"<< endl;
   	cout <<" This project is legally owned by 3STRIPE"<< endl;
	   cout <<"ONLY 3SRTIPE OWNS THE RIGHTS TO USE THIS PROGRAM\n\n";
   	cout <<"               "<< endl;
   	cout <<" Any code-stealing will result in a lawsuit\n\n"<< endl;
	   cout <<"     ******************************"<< endl;
   	cout <<"     ******************************"<< endl;
   	cout <<"     ***                        ***"<< endl;
   	cout <<"     **    TYPE START TO START   **"<< endl;
   	cout <<"     **        THE KERNEL        **"<< endl;
	   cout <<"     **                          **"<< endl;
	   cout <<"     **     3STRIPE SOFTWARE     **"<< endl;
	   cout <<"     **                          **"<< endl;
	   cout <<"     **      3STRIPE 2020        **"<< endl;
	   cout <<"     **                          **"<< endl;
	   cout <<"     ***                        ***"<< endl;
	   cout <<"     ******************************"<< endl;
	   cout <<"     ******************************"<< endl;
	
      cin >> startup;
      currentPosition="C:/PEARTREEOS";
      system("cls");
}

int main(){
	system("mode 650");
	loop();
	
	if(startup=="start"){
		kernelOn=true;
		while(kernelOn==true){
			command_operator();
		}
	}
	else{
		loop();
	}
}
