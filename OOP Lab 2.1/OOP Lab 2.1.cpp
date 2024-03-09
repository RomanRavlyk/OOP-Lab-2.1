#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction makeNumber() {
        Fraction calculator;
        calculator.Read();
        return calculator;
}

int main() {
    Fraction a;
    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    Fraction calc = makeNumber();
    calc.Display();

    return 0;
}