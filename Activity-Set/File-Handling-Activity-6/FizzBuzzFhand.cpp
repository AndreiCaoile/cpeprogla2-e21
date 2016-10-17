#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("input.txt");
	int counter(0),i;
	
	
	while(in>>counter)
	{
		if (counter%3== 0 && counter%5==0)
		{
			cout<<"FizzBuzz";
		}
		else if (counter%5==0)
		{
			cout<<"Buzz";
		}
		else if (counter%3== 0)
		{
			cout<<"Fizz";
		}
		else
		{
			cout <<counter;
		}
		cout << endl;
	}
	
}
