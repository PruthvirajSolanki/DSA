#include<iostream>
using namespace std;

int main()
{
	int num,first,last,sum;
	
	cout <<"ENTER THE VALUE OF ANY NUMBER: ";
    cin >> num;
    
    last=num%10; 
    
    while(num >= 10) 
    {
    	num=num/10;
    }
    
	first = num; 
	
	sum = first + last;
	
	cout <<"\nSUM OF FIRST AND LAST DIGIT = "<< sum << endl;
}