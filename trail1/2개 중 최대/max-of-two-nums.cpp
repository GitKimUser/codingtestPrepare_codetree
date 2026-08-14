#include <iostream>
using namespace std;

int main() {
    int A,B,max;
    cin >> A >> B;

    max = A > B ? A : B;

    cout << max;
    return 0;
}