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
    for(i=0;i<n;i++){
        cin >> h >> v;
        x.push_back({h, v});
    }
    sort(x.begin(), x.end(), compare);
    for(i=0;i<n-1;i++){
        if(x[i].second>x[i+1].second){
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;
}















