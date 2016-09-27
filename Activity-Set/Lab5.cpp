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
	cout<<endl;
	system("pause");
	system("cls");
	Problem3();
	cout<<endl;
	system("pause");
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

void Problem3(){
	struct Name{
		char lastname[50];
		char firstname[50];
	};
	
	struct Item{
		int code;
		char itemname[50];
		float price;
	};
	
	struct Date{
		int day;
		int month;
		int year;
	};
	
	struct Order{
		Date date;
		Item item[3];
		int quantt[3];
	};
	
	struct Customer{
		Name name;
		char contactNo[20];
		Order order;
	};
	
	void newline();
	Customer cust[3];
	int i,j,totprice[3];
	cout<<fixed<<setprecision(2);
	cout<<"Enter 3 Customers\n\n";
	for(i=0;i<3;i++){
		cout<<"First Name: ";
		cin>>cust[i].name.lastname;
		cout<<"Last Name: ";
		cin>>cust[i].name.firstname;
		cout<<"Contact No: ";
		cin>>cust[i].contactNo;
		cout<<"Order Date:\n ";
		cout<<"Day: ";
		cin>>cust[i].order.date.day;
		cout<<"Month: ";
		cin>>cust[i].order.date.month;
		cout<<"Year: ";
		cin>>cust[i].order.date.year;
		cout<<"Enter 3 Items\n";
		for(j=0;j<3;j++){
		
		cout<<"ID: ";
		cin>>cust[i].order.item[j].code;
		cout<<"Name: ";
		cin>>cust[i].order.item[j].itemname;
		cout<<"Price: ";
		cin>>cust[i].order.item[j].price;
		cout<<"Quantity: ";
		cin>>cust[i].order.quantt[j];
		totprice[i]+=cust[i].order.item[j].price*cust[i].order.quantt[j];
	}
	cout<<"\n\n";	
	}
	cout<<setw(5)<<"#"<<setw(30)<<"Customer Name"<<setw(15)<<"Order Date"<<setw(10)<<"Items"<<setw(8)<<"Price"<<setw(10)<<"Quantity"<<endl;
	for(i=0;i<3;i++){
	
	cout<<setw(5)<<i+1<<setw(22)<<cust[i].name.lastname<<", "<<cust[i].name.firstname<<setw(15)<<cust[i].order.date.month<<"/"<<cust[i].order.date.day<<"/"<<cust[i].order.date.year<<setw(10)<<cust[i].order.item[0].price<<setw(8)<<cust[i].order.item[0].price<<setw(7)<<cust[i].order.quantt[0]<<endl;
	for(j=1;j<3;j++){
		cout<<setw(59)<<cust[i].order.item[j].price<<setw(8)<<cust[i].order.item[j].price<<setw(7)<<cust[i].order.quantt[j]<<endl;
	}
	cout<<setw(59)<<"TOTAL PRICE: "<<totprice[i]<<endl;
	}
}
