#include <iostream>
using namespace std;

int main() {
    int a,c;
    char b;

    cin >> a >> b >> c;
    
    if(a+1 > 24) {
        a = 0;
    }
    
    cout << a+1 << b << c;
    return 0;
}