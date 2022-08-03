#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int a, b, x, y;
    cin >> a >> b;
    cin >> x >> y;
    int answer = abs(a-b); // no teleport
    answer = min(answer, abs(a-x) + abs(b-y));
    answer = min(answer, abs(a-y) + abs(b-x));
    cout << answer << "\n";
    return 0;
}