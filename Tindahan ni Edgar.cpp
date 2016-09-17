#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;

main(){
	cout<<fixed<<setprecision(2);
	struct Name{
       char lastName[30];
       char firstName[30];
       char NameLister[3];
	};
	
	struct Item{
		int id;
		char name[50];
		float price;
	};
	
	struct Date{
		int day;
		int month;
		int year;
	};
	
	struct Order{
		Date date;
		Item item;
		int quantt;
	};
	
	struct Customer{
		Name name;
		char contactnum[15];
		Order order;
	};
	
	cout<<"Enter 3 customers\n\n\n";
	
	for()
	
}
