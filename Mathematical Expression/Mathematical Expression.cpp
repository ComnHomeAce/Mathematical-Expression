// This program will get numbers a, b, c, d, and r print
// the result of a mathematical expression.

#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, r, result;

    cout << "This program will get numbers a, b, c, d, and r print\n";
    cout << "the result of the below mathematical expression.\n\n";
    cout << "   4                3+d(2+a)\n";
    cout << "------- - 9(a+bc) + --------\n";
    cout << "3(r+34)               a+bd\n\n";

    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;
    cout << "Enter a value for c: ";
    cin >> c;
    cout << "Enter a value for d: ";
    cin >> d;
    cout << "Enter a value for r: ";
    cin >> r;

    result = 4 / (3 * (r + 34)) - 9 * (a + b * c) + ((3 + d * (2 + a)) / (a + b * d));
    

    cout << "\nThe result is " << result << "\n";
}