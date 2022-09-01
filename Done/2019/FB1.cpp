#include <iostream>
using namespace std;

int main(){
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    int d, e, f;
    int a, b, c;
    cin >> d >> e >> f;
    int sum = d+e+f;
    a = min(d, e);
    a = min(a, f);
    c = max(d, e);
    c = max(c, f);
    b = sum - a -c;
    int minim = 0;
    int maxim = max(b-a, c-b) - 1;
    if(a+1 == b && b+1 == c){
        minim = 0;
    } else if (b-a == 2 || c-b == 2){
        minim = 1;
    } else {
        minim = 2;
    }
    cout << minim << endl;
    cout << maxim;
}