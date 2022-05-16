/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

long long ara[1000005], ara2[1000005], ara3[1000005];


//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

void seive(){
    memset(ara2, 0, sizeof ara2);
    for(int i=2;i<=1000000;i++){
        if(ara2[i]==0){
            ara3[i] = i;
            for(int j=i*2;j<=1000000;j+=i){
                ara2[j] = 1;
                ara3[j] = i;
            }
        }
    }
}
vector <pair <long long, long long> > div1;

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> a >> b;
    ans = 0;
    seive();
    ara[1] = 0;
    for(i=2;i<=b;i++){
        if(ara2[i]==0){
            ara[i] = 2;
            continue;
        }
        ara[i] = ara[i/ara3[i]]+1;
    }
    ans = 0;
    for(i=a;i<=b;i++){
        ans+=ara[i];
        cout << a <<" "<<ara[i]<<endl;
    }
    cout << ans;
    return 0;
}











