#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, k, r, avg, t2, temp2, j, ans;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
        y.push_back(temp);
    }
    sort(x.begin(), x.end());
    ans = lower_bound(x.begin(), x.end(), y[0])-x.begin();
    temp = ans;
    while(y[j]==y[0]&&j<n) j++;
    j--;
    while(x[ans]==y[0]&&ans<n) ans++;
    ans--;
    if(j==n-1){
        cout << 0;
        return 0;
    }
    ans-=j;
    j = 0;
    for(int i=ans;i<n;i++){
        if(x[i]!=y[j++]){
            cout << -1;
            return 0;
        }
    }
    for(int i=0;i<ans;i++){
        if(x[i]!=y[j++]){
            cout << -1;
            return 0;
        }
    }
    cout << ans;
    return 0;
}






