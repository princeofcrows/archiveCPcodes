/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

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

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> t;
    while(t--){
        cin >> n;
        x.clear();
        for(i=0;i<n;i++){
            cin >> temp;
            x.push_back(temp);
        }
        sort(x.begin(), x.end());
        bool flag = false;
        for(i=0;i<n-1;i++){
            if(x[i]!=x[i+1]) continue;
            else{
                flag = true;
                ans = x[i];
                break;
            }
        }
        if(flag){
            cout << ans;
        }
        else{
            if(x[1]-x[0]!=1){
                cout << x[0];
            }
            else if(x[n-1]-x[n-2]!=1){
                cout << x[n-1];
            }
        }
        cout << endl;
    }
    return 0;
}











