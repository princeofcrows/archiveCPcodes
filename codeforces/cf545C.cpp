#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <long long int> x;
vector <long long int> h;

int main() {
    //freopen("in.txt", "r", stdin);
    int i, j, ans, n, temp, sum, temp2;
    cin>>n;
    ans= 0;
    for(i=0; i<n; i++){
        cin >> temp >> temp2;
        x.push_back(temp);
        h.push_back(temp2);
    }
    if(n==1){
        cout << 1;
        return 0;
    }
    ans = 2;
    sum = x[0];
    for(i=1; i<n-1; i++){
        if(sum<x[i]-h[i]){
            ans++;
            sum = x[i];
        }
        else if(x[i]+h[i]<x[i+1]){
            ans++;
            sum = x[i]+h[i];
        }
        else{
            sum = x[i];
        }
    }
    cout << ans;
    return 0;
}
