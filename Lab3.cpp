#include <iostream>
#include <string.h>
using namespace std;

void Asky();
void Kopya();
void Nagsama();
void Kapitalize();
void Baliktaran();



void Asky(){
	char str1[100];
	char str2[100];
	int a;
	cout << "Enter the first word: ";
	gets(str1);
	cout << "Enter the second word: ";
	gets(str2);
	if(strcmp(str1,str2)>0)
	cout << "Positive";
	else if (strcmp(str1,str2)<0)
	cout << "Negative";
	else
	cout << "Equal";
}

void Kopya(){
	char str1[100];
	char str2[100];
	cout << "Enter the first word: ";
	gets(str1);
	cout << "Enter the second word: ";
	gets(str2);
	strcpy(str1,str2);
	cout << "New string value for first string: " << str1;
	

}

void Nagsama(){
	char str1[100];
	char str2[100];
	cout << "Enter the first word: ";
	gets(str1);
	cout << "Enter the second word: ";
	gets(str2);
	strcat(str1,str2);
	cout << "New string value for first string: " << str1;
}

void Kapitalize(){
	char str1[100];
	int i, length;
	
	cout<<"Enter word: ";
	gets(str1);
	
	length = strlen(str1);
	strlwr(str1);
	
	str1[0]-=32;
	{
		for(i=0; i<length-1;i++){
			if (str1[i]==32){
				str1[i+1]-=32;
			}
		}
		
	}
	cout<<str1;
}

void Baliktaran(){
	char str1[100];
	int i, a(0), length;
	cout<<"Enter the string: ";
	gets(str1);
	
	length=strlen(str1);
	for(i=length;i>=0;i--){
		if(str1[i]==32){
			a=i+1;
			while(str1[a]!=32&&a<length){
				cout<<str1[a];
				a++;
			}
			cout<<endl;
		}
	}
	a=0;
	while(str1[a]!=32){
		cout<<str1[a];
		a++;
	}
}


main(){
	cout<<"Comparison of 2 Strings\n\n";
	Asky();
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"Copy between 2 Strings\n\n";
	Kopya();
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"Cocatenation of 2 Strings\n\n";
	Nagsama();
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"Capitalization of Strings\n\n";
	Kapitalize();
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"Reverse order of multiples Strings\n\n";
	Baliktaran();
	cout<<endl;
	system("pause");
	system("cls");
}
