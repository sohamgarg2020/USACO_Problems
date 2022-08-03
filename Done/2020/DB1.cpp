#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int list[7];
    for (int i = 0; i < 7; i++){
        cin >>list[i];
    }
    sort(list, list+7);
    cout << list[0] << " " << list[1] << " " << (list[6] - list[0]-list[1]) << endl;

    return 0;
}