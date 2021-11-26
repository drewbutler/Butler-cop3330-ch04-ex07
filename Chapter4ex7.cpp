/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Drew Butler
 */

#include <iostream>
#include <string>
using namespace std;

double getNumbers(string str) {

    double num; 

    if (str=="zero" || str == "0"){
        num = 0;
    } else if (str == "one" || str == "1") {
        num = 1;
    } else if (str == "two" || str == "2") {
        num = 2;
    } else if (str == "three" || str == "3") {
        num = 3;
    } else if (str == "four" || str == "4") {
        num = 4;
    } else if (str == "five" || str == "5") {
        num = 5;
    } else if (str == "six" || str == "6") {
        num = 6;
    } else if (str == "seven" || str == "7") {
        num = 7;
    } else if (str == "eight" || str == "8") {
        num = 8;
    } else if (str == "nine" || str == "9") {
        num = 9;
    } else {
        num = stod(str);
        cout << num << " is not a single digit number";
    }

    return num;

}

int main(void) {
    string num1, num2;
    double result, x, y;
    char operation;

    cout << "Enter a single digit number:\n";
    cin >> num1;
    cout << "Enter another single digit number:\n";
    cin >> num2;
    cout << "Enter one of the following operation symbols: '+ - * /'\n";
    cin >> operation;

    x = getNumbers(num1);
    y = getNumbers(num2);

    if (operation == '+') {
        result = x+y;
        cout << "The sum of " << x << " and " << y << " is " << result << ".\n";
    } else if (operation == '-') {
        result = x-y;
        cout << "The difference of " << x << " and " << y << " is " << result << ".\n";
    } else if (operation == '*') {
        result = x*y;
        cout << "The product of " << x << " and " << y << " is " << result << ".\n";
    } else {
        result = x/y;
        cout << "The quotient of " << x << " and " << y << " is " << result << ".\n";
    }

    return 0;
}