#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <stdio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string firstTeamName;
string secondTeamName;

std::string firstTeamSquad[7];
std::string secondTeamSquad[7];

void enterFirstTeamName();
char firstLetterToUpper(string wordParameter);
void enterSecondTeamName();
void enterFirstTeamSquad();
void enterSecondTeamSquad();
void prepareTeamName();
void showBothTeamSquadsOnConsole();



int main(int argc, char** argv) {

	cout << "Takim Olusturma Sihirbazina Hosgeldiniz\n\n";
		
	enterFirstTeamName();
	
	firstTeamName[0] = firstLetterToUpper(firstTeamName);
	
	enterSecondTeamName();

	secondTeamName[0] = firstLetterToUpper(secondTeamName); 
	 
	enterFirstTeamSquad();
	 
	enterSecondTeamSquad();
	
	prepareTeamName();
	
	showBothTeamSquadsOnConsole();
	 
	return 0;
}

void enterFirstTeamName(){
	
	cout << "Lutfen Birinci Takim Ismi Giriniz: ";
	cin >> firstTeamName;	
}

char firstLetterToUpper(string wordParameter){

	char upperCharacter = toupper(wordParameter[0]);	
	return upperCharacter;
}

void enterSecondTeamName(){
	
	cout << "Lutfen Ikinci Takim Ismi Giriniz: ";
	cin >> secondTeamName;
}

void enterFirstTeamSquad(){
	
	cout << "\n";
	for(int i = 0; i < 7; i++) {
	string futbolcuAdi;
	cout << firstTeamName << " Takiminin " << i+1 << ". Futbolcu Adi Giriniz: ";
	cin >> futbolcuAdi;
		
	firstTeamSquad[i] = futbolcuAdi;
		
	//Özel isim ilk harf büyütme.
	firstTeamSquad[i][0] = firstLetterToUpper(firstTeamSquad[i]); 
	}
	
}

void enterSecondTeamSquad(){
	
	cout << "\n";
	for(int i = 0; i < 7; i++) {
		string futbolcuAdi;
		cout << secondTeamName << " Takiminin " << i+1 << ". Futbolcu Adi Giriniz: ";
		cin >> futbolcuAdi;
		
		secondTeamSquad[i] = futbolcuAdi;	
	
		//Özel isim ilk harf büyütme.
		secondTeamSquad[i][0] = firstLetterToUpper(secondTeamSquad[i]); 
	}
}

void prepareTeamName(){
	
	cout << "\n";
	cout << firstTeamName << "\t\t\t\t" << secondTeamName << "\n";
	cout << "-----" << "\t\t\t\t" << "-----" << "\n";
}

void showBothTeamSquadsOnConsole(){	
	
	cout << "\n";
	for(int i = 0; i < 7; i++){
		
	cout << firstTeamSquad[i]; 
	cout << "\t\t\t\t";
	cout << secondTeamSquad[i];
	cout << "\n";
	}
	
	
}


