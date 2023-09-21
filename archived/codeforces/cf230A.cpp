#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < long long > xy;
vector < pair <long long, long long> > pxy;
string str;
string str2, str3;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    if(i.first==j.first) return (i.second>j.second);
    return (i.first<j.first);
}

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, s, b;
    cin >> s >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        pxy.push_back({a, b});
    }
    sort(pxy.begin(), pxy.end(), compare);
    temp = s;
    for(i=0;i<n;i++){
        s-=pxy[i].first;
        if(s<=0){
            cout <<"NO";
            return 0;
        }
        temp+=pxy[i].second;
        s = temp;
    }
    cout <<"YES";
	return 0;
}











