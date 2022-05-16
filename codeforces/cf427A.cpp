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
vector <long long> v;
long long ara[4005];
long long dp[4005];
long long dp2[4005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k, m;
    cin >> n;
    ans = 0;
    j = 0;
    for(i=0;i<n;i++){
        cin >> temp;
        if(temp==-1){
            if(j){
                j--;
            }
            else{
                ans++;
            }
        }
        else{
            j+=temp;
        }
    }
    cout <<ans;
    return 0;
}















