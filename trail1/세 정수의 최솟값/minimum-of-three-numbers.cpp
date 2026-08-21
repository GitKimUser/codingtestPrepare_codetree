#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int lowest;

    cin >> a >> b >> c;

    lowest = a < b ? a : b;
    lowest = c < lowest ? c : lowest;

    cout << lowest;
    return 0;
}