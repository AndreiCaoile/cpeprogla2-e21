#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;

	struct Quiz{
		float grade;
	};
	
	struct Student{
		Quiz quiz[3];
		int studno;
		char name[50];
	};
	
	void newLine();
	
main(){
	char passer;
	int i,j;
	cout<<fixed<<setprecision(2);
	Student stud[5];
	
	for(i=0;i<=4;i++){
		cout<<"Student " <<i+1<<endl;
		cout<<"ID: ";
		cin>>stud[i].studno;
		cout<<"Name: ";
		cin.getline(stud[i].name)
		cout<<"Enter Quiz scores: ";
		for(j=0;j>3;j++){
			cin >> stud[i].quiz[j].grade;
		}
		
	}
}
