#include <iostream>
using namespace std;

int main(){


    //Declaring Variables Here
    double num1;
    double num2;
    double num3;
    double product;

    //Creating Inputs
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    //Processing 
    product = num1 * num2 * num3;

    //Output
    cout << "The product of your two numbers are: ";
    cout << product;


}