#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
long long int ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, ans, mx, i;
    stack <long long int> x;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> ara[i];
    }
    ans = mx = 0;
    i = 0;
    while(i<n){
        if(x.empty()||ara[x.top()]<=ara[i]){
            x.push(i++);
        }
        else{
            temp = x.top();
            x.pop();
            if(!x.empty()){
                ans = ara[temp]*(i-x.top()-1);
            }
            else{
                ans = ara[temp]*i;
            }
            mx = max(ans, mx);
        }
    }
    while(!x.empty()){
        temp = x.top();
        x.pop();
        if(!x.empty()){
            ans = ara[temp]*(i-x.top()-1);
        }
        else{
            ans = ara[temp]*i;
        }
        //cout << ans <<endl;
        mx = max(ans, mx);
    }
    cout << mx;
    return 0;
}
