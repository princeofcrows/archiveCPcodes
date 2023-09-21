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

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> temp;
        v.push_back({temp, i+1});
    }
    sort(v.begin(), v.end(), compare);
    j = n - 1;
    for(i=0;i<n/2;i++){
        cout << v[i].second << " " << v[j].second <<endl;
        j--;
    }

    return 0;
}















