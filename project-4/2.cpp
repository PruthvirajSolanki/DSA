#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int i,j;
    int row,col;
    int n;
    
    cout << "ENTER ARRAY'S ROW SIZE: ";
    cin >> row;
    
    cout << "Enter ARRAY'S COLUMN SIZE: ";
    cin >> col;
    
    cout << "\nENTER ARRAY'S ELEMENTS:\n";
    
     for(i=0;i<row;i++) 
    {
        for(j=0;j<col;j++) 
        {
            cout << "ENTER VALUE OF a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    
    n = a[0][0];
    
    for(i=0;i<row;i++) 
    {
        for(j=0;j<col;j++) 
        {
            if(n<a[i][j]) 
            {
                n=a[i][j];
            }
        }
    }
    
    cout << "\nTHE LARGEST ELEMENT IS: " << n << endl;
}