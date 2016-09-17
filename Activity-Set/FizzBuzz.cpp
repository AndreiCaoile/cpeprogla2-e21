#include<iostream>
using namespace std;

int main()
{
	int counter(0),i,thri,five,thrienfive;
	for(i=0;i<=99;i++)
	{
		counter+=1;
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
