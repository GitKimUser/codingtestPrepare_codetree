#include <iostream>
using namespace std;

int main() {
    double N;
    cin >> N;

    cout << fixed;
    cout.precision(1);

    cout << 30.48 * N;
    return 0;
}