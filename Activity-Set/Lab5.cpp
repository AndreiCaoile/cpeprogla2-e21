#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

void Problem1();
void Problem2();
void Problem3();

main(){
	Problem1();
	cout<<endl;
	system("pause");
	system("cls");
	Problem2();
	//cout<<endl;
	//system("pause");
	//system("cls");
	//Problem3();
	//cout<<endl;
	//system("pause");
}

void Problem1(){
	struct Studrec{
		int id;
		char name[50];
		int grade[3];
	};
	int i;
	float ave;
	void newline();
	cout<<fixed<<setprecision(2);
	Studrec stud;
	cout<<"Enter Student Record: \n";
	cout<<"ID: ";
	cin>>stud.id;
	cout<<"Name: ";
	cin.ignore();
	gets(stud.name);
	for(i=0;i<3;i++){
		cout<<"Quiz "<<i+1<<" :";
		cin>>stud.grade[i];
		ave+=stud.grade[i];
	}
	cout<<"\n\n";
	cout<<"Student Record:\n";
	cout<<"ID: "<<stud.id<<endl;
	cout<<"Name: "<<stud.name<<endl;
	cout<<"Grade: "<<ave/3<<endl;
	if(ave/3>=75){
		cout<<"Remarks: Passed"<<endl;
	}
	else{
		cout<<"Remarks: Failed";
	}
	
	
}

void Problem2(){
	struct Studrec{
		int id;
		char name[50];
		int grade[3];
		string mark[10];
	};
	
	void newline();
	int i,j,adder(0);
	bool flag=0;
	float ave[5];
	cout<<fixed<<setprecision(2);
	Studrec stud[5];
	cout<<"Enter 5 Student Records\n\n";
	for(i=0;i<5;i++){
		cout<<"Student "<<i+1<<endl;
		cout<<"ID: ";
		cin>>stud[i].id;
		cout<<"Name: ";
		cin>>stud[i].name;
		cout<<"Enter Quiz Scores: ";
		adder=0;
		for(j=0;j<3;j++){
			cin>>stud[i].grade[j];
			adder+=stud[i].grade[j];
			ave[i]=adder/3;
		}
		
		cout<<endl;
	}
	cout<<"\n\n";
	cout<<setw(5)<<"No."<<setw(15)<<"Student No."<<setw(25)<<"Name"<<setw(20)<<"Grade"<<setw(15)<<"Remarks"<<endl;
	for(i=0;i<5;i++){
		cout<<setw(5)<<i+1<<setw(15)<<stud[i].id<<setw(25)<<stud[i].name<<setw(20)<<ave[i]<<setw(15);
		if(ave[i]>=75){
			cout<<"Passed";
		}
		else{
			cout<<"Failed";
		}
		cout<<endl;
	}
}
