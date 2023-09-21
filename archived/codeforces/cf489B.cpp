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
vector <pair <long long, long long> > v;
vector <long long> x;
vector <long long> y;
string str;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    cin >> m;
    for(i=0;i<m;i++){
        cin >> temp;
        y.push_back(temp);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    ans = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(x[i]-y[j])<=1){
                ans++;
                y[j] = INT_MAX;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}















