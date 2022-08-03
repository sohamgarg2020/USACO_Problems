#include <iostream>
#include <vector>

using namespace std;

int change(vector<int> arr){
    int count = 0;
    int lastnum = -1;
    for (int i = 0; i < arr.size(); i++){
        if (arr.at(i) == lastnum){
            continue;
        } else {
            count++;
            lastnum = arr.at(i);
        }
    }
    if (count >= 1){
        return count-1;
    } else {
        return 0;
    }
}

int main(){
    freopen("crossroad.in", "r", stdin);
    freopen("crossroad.out", "w", stdout);
    int n; 
    cin >> n;
    int chicks[n][2];
    int total = 0;
    vector<int> l;
    for (int i = 0; i < n; i++){
        cin >> chicks[i][0] >> chicks[i][1];
    }

    for (int chick = 1; chick < 11; chick++){
        l.clear();
        for (int i = 0; i < n; i++){
            if (chicks[i][0] == chick){
                l.push_back(chicks[i][1]);
            }
        }
        total += change(l);
    }
    cout << total;
    return 0;
}