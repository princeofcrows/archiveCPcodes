
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
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

string str, str1, str2, star[100005];

long long ara[200005], ara2[200005], ara3[200005];

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

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(cin >> n){
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        if(n==1){
            cout << "Jolly\n";
            continue;
        }
        c = 0;
        for(i=0;i<n-1;i++){
            temp = abs(ara[i]-ara[i+1]);
            x.push_back(temp);
        }
        sort(x.begin(), x.end());
        c = 0;
        for(i=0;i<n-1;i++){
            if(x[i]!=i+1){
                c = 1;
                break;
            }
        }
        if(c) cout <<"Not jolly\n";
        else cout << "Jolly\n";
        x.clear();
    }
    return 0;
}















