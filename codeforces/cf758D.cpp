#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, prev, dec, le, i, j, t, td, x, cnt;
    cin >> n;
    cin >> str;
    le = str.length();
    t = 1;
    ans =0;
    for(i=le-1;i>=0; i--){
        dec = prev = 0;
        j = i;
        td = 1;
        bool fal = false;
        cnt = 0;
        while(dec<n){
            if(j<0){
                prev = dec;
                fal = true;
                break;
            }
            prev = dec;
            dec = dec+(str[j]-'0')*td;
            td*=10;
            cnt++;
            j--;
        }
        ans+=(prev)*t;
        t*=n;
        if(fal) break;
        if(prev)i = i-log10(prev);
        else{
            while(str[i]=='0'&&i>=0)i--;
        }
    }
    cout << ans;
    return 0;
}






