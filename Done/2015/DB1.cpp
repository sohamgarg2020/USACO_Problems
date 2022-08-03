#include <iostream>
using namespace std;

int main(){
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d;

    cin >> a >> b;
    cin >> c >> d;
    int total;
    for (int i =0; i < 100; i++){
        if (i >= a && i+1 <= b){
            total++;
        } else if (i >= c && i+1 <= d){
            total++;
        }
    }
    cout << total;


    return 0;
}