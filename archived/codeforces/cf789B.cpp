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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, q;
    cin >> b >> q >> l >> m;
    for(i=0;i<m;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    if(q==0){
        bool f1 = binary_search(x.begin(), x.end(), b);
        c = 0;
        bool f2 = binary_search(x.begin(), x.end(), c);
        if(f1&&f2){
            cout << 0;
            return 0;
        }
        if(!f1&&f2){
            if(abs(b)<=l) cout << 1;
            else cout << 0;
            return 0;
        }
        if(!f2){
            if(abs(b)>l) cout << 0;
            else cout << "inf";
            return 0;
        }
    }
    else if(q==1){
        bool f1 = binary_search(x.begin(), x.end(), b);
        if(f1){
            cout << 0;
            return 0;
        }
        if(!f1){
            if(abs(b)<=l) cout << "inf";
            else cout << 0;
            return 0;
        }
    }
    else if(q==-1){
        bool f1 = binary_search(x.begin(), x.end(), b);
        bool f2 = binary_search(x.begin(), x.end(), -b);
        if(!f1||!f2){
            if(abs(b)<=l) cout << "inf";
            else cout << 0;
            return 0;
        }
        if(f1&&f2){
            cout << 0;
            return 0;
        }
    }
    else if(b==0){
        c = 0;
        bool f2 = binary_search(x.begin(), x.end(), c);
        if(f2){
            cout << 0;
            return 0;
        }
        if(!f2){
            cout << "inf";
            return 0;
        }
    }
    else{
        a = b;
        ans = 0;
        while(abs(a)<=l){
            bool f1 = binary_search(x.begin(), x.end(), a);
            if(!f1) ans++;
            a*=q;
        }
        cout << ans;
    }
    return 0;
}



























