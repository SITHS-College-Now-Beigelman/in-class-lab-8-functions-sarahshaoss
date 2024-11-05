//Sarah Shao
//11/04/2024
//Lab 8

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//shortcut

int main()
// main function to display the outputs
{
    int doubleMultiply (int a, int b);
    //declares that you'll be using this later
    double getSum (double a, double b, double c);
    //declares that you'll be using this later
    double x;
    //creates variable for x
    double result;
    //creates variable for result

    cout << showpoint << fixed << setprecision(2);
    //show 2 numbers after decimal

    cout << "Enter a floating point number: ";
    cin >> x;

    cout << "The square root of the number: " << sqrt(x) << endl;
    //uses the function square
    cout << "The number raised to the 4th power: " << pow(x,4) << endl;
    //uses the function four
    cout << "The floor of the number: " << floor(x) << endl;
    //uses the function floor

    int num1, num2;
    //creates variables for num1 and num2
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: "
    << doubleMultiply(num1, num2) << endl;
    //uses the function doubleMultiply

    double a, b, c;
    //creates variables for a, b, and c
    cout << "Enter three numbers (separated by spaces): ";
    cin >> a >> b >> c;
    result = getSum(a,b,c);
    //uses the function getSum and puts the return value in the variable
    cout<< "The result of the sum of the three numbers is: " << result << endl;

    return 0;
    //ends program
}

//functions used

int doubleMultiply (int a, int b)
//function for doubleMultiply
{
    int product;
    //creates variable for product
    product = a * b * 2;
    //multiplies the two numbers and doubles the product
    return product;
}

double getSum (double a, double b, double c)
//function for getSum
{
    return a + b + c;
    //adds the three numbers
}

/* Enter a floating point number: 5.5
The square root of the number: 2.35
The number raised to the 4th power: 915.06
The floor of the number: 5.00
Enter two integers: 5 8
Twice the product of the numbers is: 80
Enter three numbers (separated by spaces): 2 9 5
The result of the sum of the three numbers is: 16.00 */
