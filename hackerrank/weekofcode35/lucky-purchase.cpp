#include <bits/stdc++.h>
using namespace std;
string str, astr;

int main(){
    int n, a4, a7, i, j, t, mn, num;
    cin >> n;
    mn = INT_MAX;
    astr = "";
    for(i=0;i<n;i++){
        cin >> str >> t;
        a4 = a7 = 0;
        num = t;
        if(t==0) continue;
        while(t){
            if(t%10==4){
                a4++;
            }
            else if(t%10==7){
                a7++;
            }
            else{
                a4 = 9999;
                a7= -1;
                break;
            }
            t/=10;
        }
        if(a4==a7){
            if(num<mn){
                mn = num;
                astr = str;
            }
        }
    }
    if(astr=="") cout << -1;
    else cout << astr;
    return 0;
}
