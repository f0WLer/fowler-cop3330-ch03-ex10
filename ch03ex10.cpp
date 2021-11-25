/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alex Fowler
 */

#include <iostream>

using namespace std;

int main() {
    char op;
    double x;
    double y;
    scanf("%c %lf %lf", &op, &x, &y);

    double result = 0;
    if (op == '+') {
        result = x + y;
    } else if (op == '-') {
        result = x - y;
    } else if (op == '*') {
        result = x * y;
    } else if (op == '/') {
        result = x / y;
    }

    cout << result << endl;
}
