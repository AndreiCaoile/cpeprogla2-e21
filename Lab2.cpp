#include <iostream> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
#include <windows.h>
using namespace std;


void Problem1();
void Problem2();
void callbyvalue();
void Maximum();

main(){
	Problem1();
	system("pause");
		Beep(900,100);
	Beep(900,100);
	Beep (330,100);
	Sleep(300);
	system("cls");
	Problem2();
	system("pause");
	Beep (330,100);
	system("cls");
	callbyvalue();
	system("pause");
	system("cls");
		Beep(900,100);
	Beep(900,100);
	Beep (330,100);
	Sleep(300);
	Maximum();
	
}

void Problem1(){
	double num;
	cout<<"Enter number to round off: ";
	cin>>num;
	cout<<"Round off Value: "<<round(num)<<endl;
	
}

void Problem2(){
	int uniques[10], num;
	srand((unsigned)time(NULL)); 
	for(int i=0;i<10;i++){
		num=(rand()%21);
		if(num==uniques[i]) num=(rand()%21);
		else{
			
			uniques[i] = num;
			cout << uniques[i]<<" ";
			Beep (392,100);Sleep(300);
		}
	}
	cout<<endl;
}

void callbyvalue(){
	int n, result=1;
	cout<<"Get the factorial of the number: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0) cout<<" Result: 1\n";
		else result=result*i;
	}
	cout<<"Result: "<<result<<endl;
}

void Maximum(){
	int num1,num2;
	cout<< "Enter 2 Numbers: ";
	cin >> num1 >> num2;
	if (num1==num2)
	cout<<"Same numbers: " << num1;
	else{
		cout << "The Maximum is: " <<fmax(num1,num2);
	}
}
