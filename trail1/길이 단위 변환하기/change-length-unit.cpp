#include <iostream>
using namespace std;

int main() {
    double a = 30.48 * 9.2;
    double b = 1.3 * 160934;
    cout << fixed;
    cout.precision(1);
    cout << "9.2ft = " << a << "cm" << endl;
    cout << "1.3mi = " << b << "cm" << endl;
}