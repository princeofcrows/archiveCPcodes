
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
vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
string str;
long long ara[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> temp;
        ab.push_back({temp, i+1});
    }
    sort(ab.begin(), ab.end(), compare);
    ans = j = 0;
    for(i=0;i<n;i++){
        ans+=ab[i].first;
        if(ans>k) break;
        j++;
    }
    cout << j <<endl;
    for(i=0;i<j;i++){
        cout << ab[i].second <<" ";
    }
    return 0;
}















