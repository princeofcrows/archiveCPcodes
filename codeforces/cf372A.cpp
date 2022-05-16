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

long long ara[100005];
vector <long long> x;

int main(){
	//freopen("in.txt", "r", stdin);
    long long n, i, j, ans, p;
    cin >> n;
    memset(ara, 0, sizeof ara);
    for(i=0;i<n;i++){
        cin >> j;
        x.push_back(j);
    }
    sort(x.begin(), x.end());
    bool flag = false;
    i = n/2-1;
    ans = n;
    for(j=n-1;i>=0&&j>=n/2;){
        if(x[j]>=x[i]*2){
            ans--;
            j--;
            i--;
        }
        else if(x[j]<2*x[i]){
            i--;
        }
    }
    cout << ans;
	return 0;
}












