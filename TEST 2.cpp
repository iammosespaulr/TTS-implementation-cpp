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
    system(charCommand);   
}
int main()
{   Voice Moses;
	string apples;
    getline(cin, apples);
	Moses.speak(apples);
	getch();
	return 0;
}