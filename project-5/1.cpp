#include<iostream>
using namespace std;

void cal() 
{
    int s, a, b;

    do{
        cout << "\n1. ADDITION\n";
        cout << "2. SUBTRACTION\n";
        cout << "3. MULTIPLICATION\n";
        cout << "4. DIVISION\n";
        cout << "5. PERCENTAGE\n";
        cout << "0. EXIT\n";
        
        cout << "\nENTER YOUR CHOICE: ";
        cin >> s;
        
        if(s>=1 && s<=5) 
		{
            cout << "\nENTER THE FIRST NUMBER: ";
            cin >> a;
            cout << "ENTER THE SECOND NUMBER: ";
            cin >> b;
            
            switch(s) 
			{
                case 1:
                    cout << "\nADDITION IS: " << a + b << endl;
                    break;
                case 2:
                    cout << "\nSUBTRACTION IS: " << a - b << endl;
                    break;
                case 3:
                    cout << "\nMULTIPLICATION IS: " << a * b << endl;
                    break;
                case 4:
                    if (b != 0) 
					{
                        cout << "\nDIVISION IS: " << a / b << endl;
                    } 
					else 
					{
                        cout << "Error! Division by zero.\n";
                    }
                    break;
                case 5:
                    cout << "\nPERCENTAGE IS: " << (a * 100) / b << "%" << endl;
                    break;    
            }
        } 
		else 
		{
            cout << "\nENTER VALID NUMBER.\n";
        }
    } 
	while(s != 0); 
}

int main() 
{
    cal();
}