#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int siout[3],i,a,b;
int main()
{
	cout<<"Welcome!!\n\n";
	cout<<"Number from Notepad:\n\n\n";
	ifstream handler("input.txt");
	for(i=0;i<3;i++)
	{
		handler>> a >> b;
		siout[i]=abs(a-b);
	}
	
	cout<<endl<<siout[0]<<endl<<siout[1]<<endl<<siout[2]<<endl;
	return 0;
}
