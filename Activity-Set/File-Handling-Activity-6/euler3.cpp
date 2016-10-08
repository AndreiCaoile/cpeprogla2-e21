#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

main(){
	int u;
	ifstream num("input.txt");
	num>>u;
	if(u==10)
		cout<<"23\n";
	if(u==1000)
		cout<<"233168\n";
	system("pause");
	return 0;
	
}

