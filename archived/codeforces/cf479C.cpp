#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < pair <long long int, long long int> > x;
vector <long long int> y;

bool compare(pair <long long int, long long int> i, pair <long long int, long long int> j) {
    if(i.first<j.first)return true;
    else if(i.first==j.first) return(i.second<j.second);
    else return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp >> temp2;
        x.push_back({temp, temp2});

    }
    sort(x.begin(), x.end(), compare);
    if(x[0].first<x[0].second){
        y.push_back(x[0].first);
    }
    else{
        y.push_back(x[0].second);
    }
    for(i=1;i<n;i++){
        if(y[i-1]<=x[i].second&&x[i].first>x[i].second){
            y.push_back(x[i].second);
        }
        else{
            y.push_back(x[i].first);
        }
    }
    cout << y[n-1];
    return 0;
}
