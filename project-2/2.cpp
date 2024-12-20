#include<iostream>
using namespace std;

int main() 
{
	int number,count=0;
	
	cout <<"ENTER ANY NUMBER: ";
    cin >> number;
    
    if(number == 0)
    {
    	count = 1;
	}
	else
	{
		while(number != 0)
		{
		   number /= 10;
		   count++;
		}
		
		cout <<"TOTAL NUMBER OF DIGITS: "<< count << endl;
	}
}