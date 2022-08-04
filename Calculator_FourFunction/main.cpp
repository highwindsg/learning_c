#include <iostream>
using namespace std;


int main()
{
    int num1, num2;
    char op; //op means either plus, minus, division or multiplication operator.
    int result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    
    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else {
        cout << "Invalid Operator";
    }
    cout << result << endl;

    return 0;
}

