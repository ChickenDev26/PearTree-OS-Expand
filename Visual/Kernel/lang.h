#include <iostream>
#include <string>
using namespace std;

string varVal;
string varName;
int intVal;
string intName;
string commandDatabase[4]={"PRINT:","VARIABLE:","READ:","IF:"};

int printCall();
int variableCall();
int readCall();
int ifCall();

int commandInputer(){
	
	cout <<">> ";
	string input;
	cin >> input;
	
	if(input=="PRINT:"){
		printCall();
	}
	else if(input=="VAR:"){
		variableCall();
	}
	else if(input=="READ:"){
		readCall();
	}
	else if(input=="IF:"){
		ifCall();
	}
	else if(input=="exit:toolkit"){
		system("pause");
		system("cls");
	}
	else{
		commandInputer();
	}
}

int ifCall(){
	string boolState;
	cout <<"......";
	cin >> boolState;
	if(boolState=="=="){
		string varInpName;
		cout <<"......";
		cin >> varInpName;
		cout <<"......";
		string value;
		cin >> value;
		if(varInpName==varName){
			if(varVal==value){
				cout <<"BASECAP CPU: STATEMENT TRUE!"<< endl;
				commandInputer();
			}
			else{
				cout <<"BASECAP CPU: STATEMENT FALSE!"<< endl;
				commandInputer();
			}
		}
		else{
			commandInputer();
		}
	}
}

int readCall(){
	cout <<"type:";
	string varType;
	cin >> varType;
	
	if(varType=="var"){
		cout <<"......";
		string varPassName;
		cin >> varPassName;
		if(varPassName==varName){
			cout <<"BASECAP CPU: "<< varVal << endl;
		}
	}
	else if(varType=="int"){
		cout <<"......";
		string intPassName;
		cin >> intPassName;
		if(intPassName==intName){
			cout <<"BASECAP CPU: "<< intVal << endl;
		}
	}
	
	commandInputer();
}

int variableCall(){
	cout <<"int/var:";
	string intOrVar;
	cin >> intOrVar;
	if(intOrVar=="var"){
		cout <<"......";
      cin >> varName;
	   cout << varName << "=";
	
      cin >> varVal;
	}
	else{
		cout <<"......";
	   cin >> intName;
	   cout << intName << "=";
	   
	   cin >> intVal;
	}
	commandInputer();
}

int printCall(){
	cout <<"......";
	string outputer;
	cin >> outputer;
	cout <<"BASECAP CPU: "<< outputer<< endl;
	commandInputer();
}
