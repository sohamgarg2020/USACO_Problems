#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    int cows;
    string order;
    string cow;
    int ch, cg;
    cin >> cows;
    cin >> order;
    for (int len = 3; len < order.length(); len++){
        for (int i = 0; i < order.length() - (len-1); i++){
            cow = order.substr(i, len);
            ch = 0;
            cg = 0;
            for (int j = 0; j < cow.length(); j++){
                if (cow.at(j) == 'H')
                    ch++;
                else
                    cg++;
            }
            if (ch == 1 || cg == 1){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}