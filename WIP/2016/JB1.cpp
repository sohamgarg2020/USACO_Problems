#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> dir;
    vector<int> length;
    vector<int> timestamps;
    for (int i = 0; i < n; i++){
        char temp1;
        int temp2;
        cin >> temp1 >> temp2;
        dir.push_back(temp1);
        length.push_back(temp2);
    }
    timestamps.push_back(0)
    for (int i = 0; i < n; i++){
        if (dir[i] == 'N'){
            for (int j = timestamps.length(); j < timestamps.length()+length[i]; j++){
                timpestamps.push_back(j);
            }
        }
    }
}