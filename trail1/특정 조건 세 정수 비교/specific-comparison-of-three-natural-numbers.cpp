#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int a,b,c;
    int lowest;
    cin >> a >> b >> c;

    if(a <= b && a <= c){
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    
    if(a == b && b == c){
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    return 0;
}