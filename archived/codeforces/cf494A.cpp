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
vector <long long int> x;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, prev, dec, le, i, j, t, td, cnt, a, b, mn, temp;
    cin >> str;
    n = str.length();
    long long int ara[n];
    a = b = cnt = 0;
    if(str[0]=='('){
        ara[0] = 1;
        a++;
    }
    else{
        cout << -1;
        return 0;
    }
    for(i=1;i<n;i++){
        if(str[i]=='('){
            ara[i] = ara[i-1]+1;
            a++;
        }
        else{
            if(str[i]==')') b++;
            if(str[i]=='#'){
                 cnt++;
                 j = i;
            }
            ara[i] = ara[i-1]-1;
            if(ara[i]<0){
                cout << -1;
                return 0;
            }
        }
    }
    temp = 0;
    for(i=n-1;i>j;i--){
        if(str[i]==')') temp--;
        if(str[i]=='(') temp++;
        if(temp>0){
            cout << -1;
            return 0;
        }
    }
    for(i=1;i<=cnt;i++){
        if(i==cnt) cout << (a-b)-cnt+1;
        else cout << 1<<endl;
    }

    return 0;
}






