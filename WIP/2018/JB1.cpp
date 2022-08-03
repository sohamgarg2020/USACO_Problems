#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    int x1, y1, x2, y2;
    int x11, y11, x21, y21;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x11 >> y11 >> x21 >> y21;
    int maxh = 0;
    int maxv = 0;
    for (int j = y1+1; j <= y2; j++){
        int temp=0;
        for (int i = x1+1; i <= x2; i++){
            
            if (x11 <= i && i <= x21){
                if (y11 <= j && j <= y21){
                    continue;
                }
                
            }
            temp++;
        }
        if (temp > maxv){
            maxv = temp;
        }
    }

    for (int j = x1+1; j <= x2; j++){
        int temp=0;
        for (int i = y1+1; i <= y2; i++){
            
            if (y11 <= i && i <= y21){
                if (x11 <= j && j <= x21){
                    continue;
                }
            }
            temp++;
        }
        if (temp > maxh){
            maxh = temp;
        }
    }
    int val = maxh *maxv;
    cout << val << endl;
    

}