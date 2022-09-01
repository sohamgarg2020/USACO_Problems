#include <iostream>
#include <cstdlib>
using namespace std;

struct Triangle{
    int x1, x2, x3, y1, y2, y3;
     
    int area(){
        return abs(x1*y2+x2*y3+x3*y1-(x2*y1+x3*y2+x1*y3));
    }

    bool isParallel(){
        return ((x1==x2 || x2 == x3 || x1==x3) && (y1==y2 || y2==y3 || y1==y3));
    }
};


int main(){
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n;
    cin >> n;
    int xc[n];
    int yc[n];
    for (int i = 0; i < n; i++){
        cin >> xc[i] >> yc[i];
    }
    int area = 0;
    for (int i = 0; i <n-2; i++){
        for (int j = i+1; j <n-1; j++){
            for (int h = j+1; h < n; h++){
                Triangle t;
                t.x1 = xc[i]; t.x2 = xc[j]; t.x3 = xc[h]; t.y1=yc[i]; t.y2 = yc[j]; t.y3 = yc[h];
                if (t.isParallel()){
                    if (t.area() > area){
                        area = t.area();
                    }
                }
            }
        }
    }
    cout << area;
}