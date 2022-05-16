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
vector <long long int> x;
long long int ara[100005];
int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2, m, j, k;
    cin >> n >> m >> k;
    for(i=0;i<n;i++){
        cin >> temp;
        ara[temp] = i;
        x.push_back(temp);
    }
    ans = 0;
    i = 1;
    while(m--){
        cin >> temp;
        j = ara[temp];
        a = j/k+1;
        ans+=abs(a-i)+1;
        if(j!=0){
            ara[temp]--;
            ara[x[j-1]]++;
            t = x[j];
            x[j] = x[j-1];
            x[j-1] = t;
        }
    }
    cout << ans;
    return 0;
}
