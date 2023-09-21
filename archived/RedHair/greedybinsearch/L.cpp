#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    long double a, b, c, d, l, h, m;
    int i = 0;
    cin >> a >> b >> c >> d;
    l = 0;
    h = 9999999999;
    while(i<=100000){
        m = (h+l)/2.0;
        double h1 = min(min((a-m)*(d-m), (a+m)*(d+m)), min((a-m)*(d+m), (a+m)*(d-m)));
        double h2 = max(max((a-m)*(d-m), (a+m)*(d+m)), max((a-m)*(d+m), (a+m)*(d-m)));
        double j1 = min(min((b-m)*(c-m), (b+m)*(c+m)), min((b-m)*(c+m), (b+m)*(c-m)));
        double j2 = max(max((b-m)*(c-m), (b+m)*(c+m)), max((b-m)*(c+m), (b+m)*(c-m)));
        if(h1<=j2&&h2>=j1) h = m;
        else l = m;
        i++;
    }
    cout << fixed << setprecision(10);
    cout << l;
    return 0;
}
