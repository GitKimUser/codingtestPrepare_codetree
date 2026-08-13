#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp;

    temp = b;
    b = a;
    a = c;
    c = temp;


    cout << a << endl << b << endl << c << endl;
    return 0;
}