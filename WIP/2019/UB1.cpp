#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    char farm[10][10];
    int bx, by, lx, ly, rx, ry;
    int count = 0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin >> farm[i][j];
            if (farm[i][j] == 'B'){
                bx = i;
                by = j;
            } else if (farm[i][j] == 'L'){
                lx = i;
                ly = i;
            } else if (farm[i][j] == 'R'){
                rx = i;
                ry = i;
            }
        }
    }

    if ((bx == lx && bx == rx) || (by == ly && by == ry)){
        cout << (abs(bx - lx) + abs(by - lx));
    } else{
        cout << (abs(bx-lx) + abs(by-ly) - 4);
    }

    return 0;
}