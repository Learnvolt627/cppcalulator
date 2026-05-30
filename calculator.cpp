#include <iostream>
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

    if (op=='+')
    {
        cout << num1 + num2;
    }
    else if (op== '-')
    {
        cout << num1 - num2;
    }

    else if (op== '*')
    {
        cout << num1 * num2;
    }
    else if (op=='/')
    {
        cout << num1 / num2;
    }
    else 
    {
        cout << "please enter valid operator";
    }

    return 0;
}