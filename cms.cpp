#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int now = 1;
string in;

void start(){
	system("cls");
	cout<<"CMS @1.0 for windows"<<endl;
	cout<<"Type [.help] to get help"<<endl;
}



void command_output(){
	string in;
	cin>>in;
	cout<<"[CMS @1.0][output]>>"<<in<<endl;
	
}

void command_help(){
	cout<<"\n\n";
	cout<<"[HELP for CMS]\n";
	cout<<".HELP        To get the help\n";
	cout<<".CNM [sth]   Print characters\n";
	cout<<".EXIT        Exit the CMS";
	
	
	
	cout<<"\n\n";
	
} 
void command(string in){
	if(in == ".help"||in == ".HELP"){
		command_help();
	}else if(in == ".CNM"||in == ".cnm"){
		command_output();
	}else if(in == ".exit"||in == ".EXIT")
	{
		now = 0;
		cout<<"SEE U NEXT TIME!\n";
	}else{
		cout<<"unknown command!plz try to type [.help]\n";
	}
	
	
}
int main(){
	start();
	while(now){
		now = 1;
		cout<<"[CMS @1.0]# ";
		cin>>in;
		command(in);
		in = " ";
		
	}
} 
