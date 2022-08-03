#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int max = 0;
    int px = 1001;
    int py = 1001;
    for (int i = 0; i < n; i++){
        int tempx = 0;
        int tempy = 0;
        cin >> tempx >> tempy;
        if (i == 0){
            px = tempx;
            py = tempy;
            continue;
        }
        sum += abs(tempx - px)+abs(tempy - py);
        if (i == n-1){
            continue;
        }
        if ((abs(tempx - px)+abs(tempy - py)) > max){
            max = abs(tempx - px)+abs(tempy - py);
        }
        px = tempx;
        py = tempy;
    }
    sum -= max;
    cout << max << endl;
    cout << sum;
}