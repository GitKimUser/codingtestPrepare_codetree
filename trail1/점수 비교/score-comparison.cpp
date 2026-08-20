#include <iostream>
using namespace std;

int main() {
    int A_Math, A_Eng;
    int B_Math, B_Eng;

    cin >> A_Math >> A_Eng >> B_Math >> B_Eng;

    cout << (A_Math > B_Math && A_Eng > B_Eng);
    return 0;
}