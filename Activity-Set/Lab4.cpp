#include <iostream>
#include <string.h>
using namespace std;

void asker();
void progstrcmp();
void progstrcpy();
void progstrcat();
void progstrlen();
char progstrrev();
void reverseChar();

char str1[100];
char str2[100];
char *str1p, *str2p;
int flag(0),i,x(0),length;
char *a,*b;

void asker(){
	cout << "Enter the first word: ";
	gets(str1);
	cout << "Enter the second word: ";
	gets(str2);
	str1p = &str1[100];
	str2p = &str2[100];
	
}

void progstrcpy(char *a,char *b){
	
	while (*b != '\0') 
	{ 
	*a= *b; 
	a++; 
	b++; 
	} 
	*a='\0'; 
}

void progstrcmp(char *a,char *b){
	(int) str1[i];
    (int) str2[i];
    	if (*a==*b) flag+=0;
		else if (*b<*a) flag+=1;
		else if (*b>*a) flag-=1;
	
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
	cout<<endl;
}

void progstrcat(){
	asker();
	for(int i=0;i<strlen(str1);i++){
    	a=&str1[i];
    	cout<<*a;
	}
	for(int i=0;i<strlen(str2);i++){
    	b=&str2[i];
    	cout<<*b;
	}
}

void progstrlen(){
	int len(char *);
	int l;
	cout<<"\nEnter a string:  ";
    gets(str1);
    l=len(str1);
	cout<<"The value for strlen is: "<<l;
	
}

int len(char *t){
		int ct=0;
    while(*t!='\0')
    {
        ct++;
        t++;
    }
    return(ct);
	}

char progstrrev(){
	int l,i;
	cout<<"\nEnter a string: ";
	cin.ignore();
    gets(str1);
    l=strlen(str1);
    for(int i=l-1;i>=-1;i--) {
		cout<<str1[i];
	}
    return 0;	
}




main(){
	asker();
	progstrcpy(str1,str2);
	cout<<"The new value for str1 is: " <<str1 << " (ACTIVITY 4.2)"<<endl;
	system ("Pause");
	system("cls");
	asker();
	progstrcmp(str1,str2);
	system ("Pause");
	system("cls");
	progstrcat();
	cout<<endl;
	system ("Pause");
	system("cls");
	progstrlen();
	cout<<endl;
	system ("Pause");
	system("cls");
	progstrrev();
	
}
