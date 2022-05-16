#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;
vector <pair <long long, long long> > x;

bool compare(pair <long long, long long> i, pair <long long, long long> j) {
    if(i.second<j.second) return true;
    if(i.second==j.second) return (i.first<j.first);
    else return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, k, r, avg, t2, temp2, j, ans;
    cin >> n >> r >> avg;
    t2=0;
    for(int i=0;i<n;i++){
        cin >> temp >> temp2;
        t2+=(temp-avg);
        x.push_back({temp, temp2});
    }
    sort(x.begin(), x.end(), compare);
    ans = 0;
    j = 0;
    if(t2>=0){
        cout << 0;
        return 0;
    }
    while(t2!=0){
        if(r-x[j].first>-1*t2){
            ans+=-1*t2*x[j].second;
            t2 = 0;
        }
        else{
            ans+=(r-x[j].first)*x[j].second;
            t2+=(r-x[j].first);
        }
        j++;
    }
    cout << ans;
    return 0;
}






