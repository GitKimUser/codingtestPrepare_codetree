#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int a,b,c;
    int lowest;
    cin >> a >> b >> c;

    lowest = a < b ? a : b;
    lowest = c < lowest ? c : lowest;  

    if(a == lowest){
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