#include <iostream>
using namespace std;




int main(){
    int n;
    cin >> n;
    int b[n-1], a[n];
    bool duplicate = false;
    for (int i = 0; i < n-1; i++){
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++){
        a[0] = i;
        for (int j = 1; j < n; j++){
            a[i] = b[i-1] - a[i-1];
        }
        // after this we have a full list of the cows in order
        // now we have to check whether this set of cows works
        /* 
        Post-condition:
            - all numbers must be distinct
            - all numbers must be positive
            - numbers must range from 1 - n
        */
       for (int j = 0; j < sizeof(a); j++){
           if (a[j] <= 0){
               break;
           } else {
               int count = 0;
               for (int x = 1; x <= n; x++){
                   count = 0;
                   for (int y = 0; y < sizeof(a); y++){
                       if (a[y] == x){
                           count++;
                       }
                   }
                   if (count > 1){
                       duplicate = true;
                   } else {
                       duplicate = false;
                   }
               }
               if (duplicate == true){
                   break;
               } else {
                   for (int y = 0; y < sizeof(a); y++){
                       cout << a[y] << " ";
                   }
               }
           }
       }
    }
}