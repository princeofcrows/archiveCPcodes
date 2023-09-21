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
string str;
vector <pair <long long int, pair <long long int, long long int> > > y;

bool compare(pair <long long int, pair <long long int, long long int> > i, pair <long long int, pair <long long int, long long int> > j){
    if(i.second.first==j.second.first)  return (i.second.second>j.second.second);
    return (i.second.first<j.second.first);
}

bool compare2(pair <long long int, pair <long long int, long long int> > i, pair <long long int, pair <long long int, long long int> > j){
    if(i.second.second==j.second.second)    return (i.second.first<j.second.first);
    return (i.second.second>j.second.second);
}
int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s, n, i, j, k, mx;
    cin >> n;
    pair <long long int, long long int> temp;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        temp.first = a;
        temp.second = b;
        y.push_back({i, temp});
    }
    sort(y.begin(), y.end(), compare);
    a = y[0].first;
    sort(y.begin(), y.end(), compare2);
    if(a==y[0].first){
        cout << a+1;
    }
    else{
        cout << -1;
    }
    return 0;
}






