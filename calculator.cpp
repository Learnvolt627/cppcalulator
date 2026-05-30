#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num1, num2;
    char op;

    cout << "enter your first number";
    cin >> num1;
    cout << "enter the operation to perform";
    cin >> op;
    cout << " enter your second number";
    cin >> num2;

    switch(op)
    {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;
        

        case '/':
            if(num2==0)
            {
                cout << "division by zero not possible";
            }
            else
            {
                cout << num1 / num2;
            }
            break;

        case '%':
            cout << fmod(num1, num2);
            break;
    }
    return 0;
}