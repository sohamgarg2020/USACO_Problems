#include <iostream>
#include <string>
using namespace std;

int main(){
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    int line = 0;
    string word;
    for (int i = 0; i < n; i++){
        cin >> word;
        if (line + word.length() > k){
            cout << endl << word;
            line = word.length();
        } else {
            if (line != 0){
                cout << " " << word;
            } else {
                cout << word;
            }
            line += word.length();
        }
    }

}