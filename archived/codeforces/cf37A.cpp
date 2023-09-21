
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
vector <pair <long long, long long> > v2;
vector <long long> x;
vector <long long> y;
string str;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long ara[5500];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx;
    cin >> n;
    memset(ara, 0, sizeof ara);
    mx = ans = 0;
    for(i=0;i<n;i++){
        cin >> h;
        ara[h]++;
        if(ara[h]>mx) mx = ara[h];
        if(ara[h]==1) ans++;
    }
    cout << mx <<" "<<ans;
    return 0;
}















