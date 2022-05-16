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

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, diglen, n, m, mx, mn, ans, k, c;
    string str;
    char ct;
    cin >> str;
    n = str.length();
    c = str[n-1]-'0';
    bool flag = false;
    mn= -1;
    for(int i=0; i<n-1; i++){
        if((str[i]-'0')%2==0){
            if((str[i]-'0')<c){
                ct = str[i];
                str[i] = str[n-1];
                str[n-1] = ct;
                flag = true;
                break;
            }
            else{
                mn = i;
            }
        }
    }
    if(flag) cout<<str;
    else if(mn==-1) cout << -1;
    else{
        ct = str[mn];
        str[mn] = str[n-1];
        str[n-1] = ct;
        cout << str;
    }
    return 0;
}
















