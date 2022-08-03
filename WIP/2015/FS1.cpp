#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string cur, censor, count;
    vector<int> c;
    cin >> cur;
    cin >> censor;
    for (int i = 0; i < cur.length(); i++){
        string str = cur.substr(i, censor.length());
        if (str == censor){
            if (c.size() == 0){
                count += cur.substr(0, i);
                i += censor.length();
                i--;
            } else {
                count += cur.substr(c.at(c.size()-1) + censor.length(), (i - (c.at(c.size()-1) + censor.length())));
                i += censor.length();
                i--;
            }
            c.push_back(i);
            continue;
        }
    }
    cout << count;


    return 0;
}