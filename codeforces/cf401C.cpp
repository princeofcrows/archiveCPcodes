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
    long long int n, ans, temp, t, diglen, i, m, k, j;
    cin >> n >> m;
    if(n-1>m){
        cout <<-1;
        return 0;
    }
    if(m>(2*n+2)){
        cout <<-1;
        return 0;
    }
    while(n!=m&&n-1!=m&&n!=0){
        str+="110";
        n--;
        m-=2;
    }
    bool flag = false;
    if(n-1==m){
        flag = true;
        n--;
    }
    while(n!=0&&m!=0){
        str+="10";
        n--;
        m--;
    }
    if(flag) cout <<"0";
    cout << str;
    if(m!=0){
        while(m!=0){
            cout << "1";
            m--;
        }
    }
    return 0;
}











