#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int fmakeNew(string hi){
	system("cls");
	cout <<"-----------FMAKE------------"<< endl;
	cout <<"WRITE TO FILE: write<<:" << endl;
	cout <<"CREATE FILE: create<<:" << endl;
	cout <<"READ FILE: read<<:"<< endl;
	cout <<"EXIT FMAKE: <exit()>"<< endl;
	
	string fmakemain;
	cin >> fmakemain;
	
	if(fmakemain=="write<<:"){
		cout <<".... ";
		
		string filename;
		cin >> filename;
		
		fstream file;
		file.open(filename.c_str());
		system("cls");
		
		string foo[5];
		cin >> foo[1];
		getline(cin,foo[1]);
		
		
		file << foo[1]<< endl;
		cin >> foo[2];
		getline(cin,foo[2]);
		
		
		file << foo[2]<< endl;
		cin >> foo[3];
		getline(cin,foo[3]);
		
		
		file << foo[3]<< endl;
		cin >> foo[4];
		getline(cin,foo[4]);
		
		
		file << foo[4]<< endl;
		cin >> foo[5];
		getline(cin,foo[5]);
		
		
		file << foo[5]<< endl;
		file << hi<< endl;
		system("pause");
		fmakeNew("KRNLOUT");
	}
	else if(fmakemain=="create<<:"){
		system("cls");
		cout <<"Filename: ";
		string filename;
		cin >> filename;
		
		ofstream newFile(filename.c_str());
		fstream fileKey;
		fileKey.open(filename.c_str());
		
		cout <<"File Created!"<< endl;
		fmakeNew("KRNLOUT");
	}
	else if(fmakemain=="read<<:"){
		cout <<".... ";
		
		string filename;
		cin >> filename;
		
		system("cls");
		
		string outText;
		
		ifstream readFile(filename.c_str());
		
		while(getline(readFile, outText)){
			cout << outText << endl;
		}
		
		cout <<"File Read!"<< endl;
		system("pause");
		fmakeNew("KRNLOUT");
	}
	else if(fmakemain=="<exit()>"){
		system("pause");
		system("cls");
	}
	else{
		fmakeNew("KRNLOUT");
	}
}
