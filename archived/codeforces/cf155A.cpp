#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < long long > xy;
vector < pair <long long, long long> > pxy;
string str;
long long int ara[100005];

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, s, b, t, c, d ,e;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    a = ara[0];
    b = ara[0];
    ans = 0;
    for(i=1;i<n;i++){
        if(ara[i]<a){
            ans++;
            a = ara[i];
        }
        if(ara[i]>b){
            ans++;
            b = ara[i];
        }
    }
    cout << ans;
}











