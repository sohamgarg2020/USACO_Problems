#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int m, n, k;
    cin >> m >> n >> k;
    vector<string> l;
    vector<string> w;
    for (int i = 0; i < m; i++){
        string temp;
        cin >> temp;
        l.push_back(temp);
    }
    int a = l.size();
    string temp;
    for (int i = a-1; i >=0; i--){ //gets the string
        for (int j = 0; j < n; j++){
            for (int b = 0; b < k; b++){
                temp += l[i].at(j);
            }
        }
        l[i] = temp;
        temp = "";
    }
    for (int i = 0; i < l.size();i++){
        for (int j = 0; j < k; j++){
            w.push_back(l[i]);
        }

    }
    for (int i = 0; i < w.size(); i++){
        cout << w[i] << endl;
    }



    return 0;
}