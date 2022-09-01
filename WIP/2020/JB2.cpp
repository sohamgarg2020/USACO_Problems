#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int xc[n-1];
    for (int i =0; i < n-1; i++){
        cin >> xc[i];
    }
    bool finish = false;
    int output[n];
    int sum= 0;
    int test[n];
    for (int i = 0; i < n; i++){
        test[i] = i;
    }
    for (int i = 1; i <= n; i++){
        output[0] = i;
        for (int j = 1; j < n; j++){
            if (xc[j-1] - output[j-1] > 0){
                output[j] = xc[j-1] - output[j-1];
            } else {
                break;
            }
        }
        int temp[n];
        for (int j=0; j < n; j++){
            temp[j] = output[j];
        }
        bool yes = true;
        for (int j = 0; j < n; j++){
            sort(temp, temp+n);
            if (temp[j] != test[j]){
                yes = false;
                break;
            }
        }
        if (yes == true){
            finish = true;
            break;
        }
    }
    if (finish){
        for (int i = 0; i < n; i++){
            cout << output[i] << " ";
        }
    }
}