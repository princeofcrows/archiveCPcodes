
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

long long ara[200005];

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    ans = ara[0];
    for(i=1;i<n;i++){
        ans = gcd(ara[i], ans);
    }
    for(i=0;i<n;i++){
        temp = ara[i]/ans;
        while(temp%2==0){
            temp = temp/2;
        }
        while(temp%3==0){
            temp = temp/3;
        }
        if(temp!=1){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}















