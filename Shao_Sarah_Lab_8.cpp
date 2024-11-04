//Sarah Shao
//11/04/2024
//Lab 8

#include <iostream>
using namespace std;
//shortcut

double square(double x)
// creates function to find the square of a number
{
    return x * x;
    //times number by itself
}

double four (double x)
//raises number to the fourth power
{
    return x* x* x *x;
}

double floor (double x)
//floors a number
{
    return static_cast<int>(x);
    //turns the double into and integer
}

int main()
// main function to display the outputs
{
    double x;
    //creates variable for x

    cout << "Enter a floating point number:\n> ";
    cin >> x;

    cout << "The square root of the number: " << square(x) << endl;
    //uses the function square
    cout << "The number raised to the 4th power: " << four(x) << endl;
    //uses the function four
    cout << "The floor of the number: " << floor(x) << endl;
    //uses the function floor

    return 0;
    //ends program
}

int doubleMultiply(int a, int b)
(
    int product;
    product - a * b * 2;
    return product;
)
int main()
(
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: "
    << doubleMultiply(num1, num2) << endl;

    system("PAUSE");
    return 0;
)