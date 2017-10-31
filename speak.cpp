#include<iostream>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<windows.h>

using namespace std;
class Voice {
public:
    void speak(string apple);  
};
void Voice::speak(string apple){
    string command = "espeak \"" + apple + "\"";    
    const char* charCommand = command.c_str();    
    cout << apple << endl;   
    system(charCommand);   
}
void main()
{   Voice Moses;
    string apples;
	cout<<"Enter The Text To Be Spoken :\t";
	getline(cin, apples);
	Moses.speak(apples);
	getch();
}