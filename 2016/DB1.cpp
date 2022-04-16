#include <iostream>
#include <cmath>
using namespace std;

int main(){
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    int x1, y1, x2, y2;
    int ax1, ay1, ax2, ay2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> ax1 >> ay1 >> ax2 >> ay2;

    x1 = min(x1, ax1);
    y1 = min(y1, ay1);
    x2 = max(x2, ax2);
    y2 = max(y2, ay2);
    if (x2 - x1 >= y2 - y1){
        cout << (x2 - x1) * (x2-x1);
    } else {
        cout << (y2-y1) * (y2-y1);
    }




    return 0;
}