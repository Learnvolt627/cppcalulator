#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num1, num2;
    char op;

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter the operation to perform: ";
    cin >> op;
    cout << "Enter your second number: ";
    cin >> num2;

    switch(op)
    {
        case '+':
            cout << "result= "<< num1 + num2;
            break;

        case '-':
            cout << "result= "<< num1 - num2;
            break;

        case '*':
            cout << "result= "<<num1 * num2;
            break;
        

        case '/':
            if(num2==0)
            {
                cout << "division by zero not possible";
            }
            else
            {
                cout <<"result= "<< num1 / num2;
            }
            break;

        case '%':
            if (num2==0)
            {
                cout << 'division by zero is not possible';
            }
            else
            {
                 cout << fmod(num1, num2);

            }
           
            break;

        default:
            cout << "Invalid operator";
            break;
    }
    return 0;
}