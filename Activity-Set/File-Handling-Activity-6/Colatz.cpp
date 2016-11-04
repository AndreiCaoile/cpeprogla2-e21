#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int num1, num2, hgh(1), grea(1), i;
int still_n, manipulator;
int main(){
	ifstream f("input.txt");
	while(f>>num1>>num2) {
		still_n=num2;
		for(i=num1;i<num2;i++) {
			manipulator=i;
			hgh=1;
			while(manipulator>1){
				if ((manipulator%2)==0) {
					manipulator=(manipulator/2);
					hgh++;
				}
				else if ((manipulator%2)!=0) {
					manipulator=((3*manipulator)+1);
					hgh++;
				}
			if (hgh>grea) grea=hgh;
			}
		}
		cout<<num1<<" "<<num2<<" "<<grea<<endl;
	}
	return 0;
}
