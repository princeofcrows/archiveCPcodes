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
    cin >> a >> b;
    ans = 0;
    while(a&&b){
        temp = a % b;
        j = a/b;
        a = b;
        b = temp;
        ans+=j;
        //cout << a <<" " <<b<<endl;
    }
    cout << ans;
    return 0;
}















