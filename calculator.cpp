#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("cls");
    int op,result;
    double num1,num2;
    cout << "\n\n\n\n\n\t\t\t\t\t ***** CALCULATOR *****";
    cout << "\n\n\t\t";
    cout << "\n\n\t\t 1. ADDITION.";
    cout << "\n\n\t\t 2. SUBTRACT.";
    cout << "\n\n\t\t 3. MULTIPLICATION.";
    cout << "\n\n\t\t 4. DIVIDING.";
    cout << "\n\n\t\t 5. PERCENTAGE.";
    cout<<"\n\n\n\t\t\t";
    cout<<"choose the above option:";
    cin>>op;
    cout<<" Enter the two number:";
    cin>>num1>>num2;
    switch(op)
    {
        case 1:
        result=num1+num2;
        cout<<result;
        break;
        case 2:
        result=num1-num2;
        cout<<result;
        break;
        case 3:
        result=num1*num2;
        cout<<result;
        break;
        case 4:
        if(num2==0)
        {
            cout<<"can not divide";
            return 1;
        }
        result=num1/num2;
        cout<<result;
        break;
        case 5:
        result=num1/num2*100;
        cout<<result;
        break;

    }
    return 0;
}
