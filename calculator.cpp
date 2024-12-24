#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout << "\n\n\n\n\n\t\t\t\t\t ***** CALCULATOR *****";
    cout << "\n\n\t\t";
    cout << "\n\n\t\t 1. ADDITION.";
    cout << "\n\n\t\t 2. SUBTRACT.";
    cout << "\n\n\t\t 3. MULTIPLICATION.";
    cout << "\n\n\t\t 4. DIVIDING.";
    cout << "\n\n\t\t 5. PERCENTAGE.";
    cout<<"\n\n\n\t\t\t";
    cout<<"choose the above option:";
    cin>>num;
    switch(num)
    {
        case 1:
        add();
    }
    return 0;
}
int add()
{
    double num1,num2;
    cout<<"Enter the first and second number"; 

}