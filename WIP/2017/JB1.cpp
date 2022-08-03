#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


int main(){
    map<string, int> e;
    e["Bessie"] =0,
    e["Elsie"] = 0;
    e["Daisy"] = 0;
    e["Gertie"] = 0;
    e["Annabelle"] = 0;
    e["Maggie"] = 0;
    e["Henrietta"] = 0;

    int n;
    int min = 9999999;
    int min2 = 99999999;
    int count = 0;
    
    for (int i = 0 ; i < n; i++){
        string temp1;
        int temp2;
        cin >> temp1 >> temp2;
        e[temp1] += temp2;
    }
    for (auto iter = e.begin(); iter != e.end(); ++iter){
        if (iter->second < min){
            min = iter->second;
        }
    }
    for (auto iter = e.begin(); iter != e.end(); ++iter){
        if (iter->second < min2 && iter->second > min){
            min2 = iter->second;
            count++;
        }
    }
    if (count != 1){
        cout << "Tie" << endl;
        return 0;
    } else {
        for(const auto & pair : e) {
            if(pair.second == min) cout << pair.first << endl;
        }
    }
}