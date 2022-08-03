#include <iostream>
using namespace std;

int main(){
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int x, y, m;
    cin >> x >> y >> m;
    int max = 0;
    int a = m/x;
    for (int i = 0; i <= a; i++){
        int temp = 0;
        temp += x*i;
        int rem = (m - temp)/y;
        temp += rem * y;
        if (temp > max && temp <= m){
            max = temp;
        }
        
    }
    cout << max;
}