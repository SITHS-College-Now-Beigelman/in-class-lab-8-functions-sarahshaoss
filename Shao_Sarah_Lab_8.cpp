//Sarah Shao
//11/04/2024
//Lab 8

#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;
//shortcut



int main()
// main function to display the outputs
{
    double x;
    //creates variable for x

    cout << "Enter a floating point number:\n> ";
    cin >> x;

    cout << "The square root of the number: " << sqrt(x) << endl;
    //uses the function square
    cout << "The number raised to the 4th power: " << pow(x,4) << endl;
    //uses the function four
    cout << "The floor of the number: " << floor(x) << endl;
    //uses the function floor
    
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: "
    << doubleMultiply(num1, num2) << endl;

    return 0;
    //ends program
}

int doubleMultiply (int a, int b)
{
    int product;
    product = a * b * 2;
    return product;
}

