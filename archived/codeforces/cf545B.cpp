#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
#define lli long long int


int main() {
    //freopen("in.txt", "r", stdin);
    int i, j, ans, n;
    string s, t;
    cin >> s;
    cin >> t;
    n = s.length();
    bool flag[n+5], cn;
    memset(flag, false, sizeof flag);
    ans= 0;
    for(int i=0; i<n; i++){
        if(s[i]!=t[i]){
            ans++;
            flag[i] = true;
        }
    }
    if(ans%2==1){
        cout << "impossible";
    }
    else{
        cn = false;
        for(int i=0; i<n; i++){
            if(s[i]!=t[i]){
                if(cn){
                    cout << s[i];
                    cn=!cn;
                }
                else{
                    cout << t[i];
                    cn=!cn;
                }
            }
            else{
                cout << s[i];
            }
        }
    }
    return 0;
}
