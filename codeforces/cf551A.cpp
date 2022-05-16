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
    return (i.first>j.first);
}
bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b;
    long long ara[2005];
    memset(ara, 0, sizeof ara);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        ara[temp]++;
        v.push_back({temp, i});
    }
    sort(v.begin(), v.end(), compare);
    j = 1;
    temp = v[0].first;
    for(i=0;i<n;i++){
        if(v[i].first==temp){
            v2.push_back({v[i].second, j});
        }
        else{
            temp = v[i].first;
            j = i+1;
            v2.push_back({v[i].second, j});
        }
    }
    sort(v2.begin(), v2.end(), compare2);
    for(i=0;i<n;i++){
        cout << v2[i].second <<" ";
    }
    return 0;
}















