#include <iostream>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;

    int Obesity = (10000 * w) / (h*h);
    cout << Obesity << endl;

    if(Obesity >= 25){
        cout << "Obesity";
    }
    return 0;
}