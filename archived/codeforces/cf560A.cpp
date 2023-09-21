
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
vector <pair <long long, long long> > x;
vector <pair <long long, long long> > y;
string str;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long ara[55][55];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b ,v;
    cin >> n;
    bool flag = false;
    for(i=0;i<n;i++){
        cin >> h;
        if(h==1) flag = true;
    }
    if(flag) cout << -1;
    else cout << 1;
    return 0;
}















