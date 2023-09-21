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

long long ara[55][55];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b ,v;
    cin >> n;
    memset(ara, 0, sizeof ara);
    for(i=0;i<n*n;i++){
        cin >> h >> v;
        if(ara[h-1][v-1]==0){
            for(j=0;j<n;j++){
                ara[j][v-1] = 1;
                ara[h-1][j] = 1;
            }
            x.push_back(i+1);
        }
    }
    for(i=0;i<x.size();i++){
        cout << x[i] << " ";
    }
    return 0;
}















