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
string str;
long long ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<n;i++){
        t = i;
        for(j=i;j<n;j++){
            if(ara[j]<ara[t])
                t = j;
        }
        swap(ara[i], ara[t]);
        if(i!=t) v.push_back({i, t});
    }
    cout << v.size() << endl;
    for(i=0;i<v.size();i++){
        cout << v[i].first <<" "<<v[i].second<<endl;
    }
    return 0;
}















