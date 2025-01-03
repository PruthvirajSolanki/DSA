#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int i,size;
	
	cout << "ENTER ARRAY's SIZE: ";
    cin >> size;
    
    cout << "\nEnter array's elements:\n";
    for(i=0;i<size;i++) 
    {
        cout << "Enter value a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "\nNegative elements from an Array: ";
    
    for(i=0;i<size;i++) 
    {
        if(a[i]<0) 
        {
            cout << a[i] << " ";
        }
    }
}