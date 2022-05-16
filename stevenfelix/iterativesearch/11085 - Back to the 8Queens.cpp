
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
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//

long long dig[10], dign[10], digp[30];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    for(i=1;i<=8;i++){
        x.push_back(i);
    }
    d = 1;
    while(cin >> ara[0]){
        for(i=1;i<8;i++){
            cin >> ara[i];
        }
        mx = 9999999999;
        while(1){
            bool flag = false;
            memset(dig, 0, sizeof dig);
            memset(dign, 0, sizeof dign);
            memset(digp, 0, sizeof digp);
            for(i=0;i<8;i++){
                temp = x[i]-i-1;
                if(temp>=0){
                    if(dig[temp]){
                        flag = true;
                        break;
                    }
                    dig[temp] = 1;
                }
                else{
                    temp = abs(temp);
                    if(dign[temp]){
                        flag = true;
                        break;
                    }
                    dign[temp] = 1;
                }
                temp = x[i]+i+1;
                if(digp[temp]){
                    flag = true;
                    break;
                }
                digp[temp] = 1;
            }
            if(!flag){
                ans = 0;
                for(i=0;i<8;i++) ans += (bool)(x[i]-ara[i]);
                mx = min(ans, mx);
            }
            next_permutation(x.begin(), x.end());
            for(i=0;i<8;i++){
                if(i+1!=x[i]) break;
            }
            if(i==8) break;
        }
        cout << "Case "<<d++<<": "<<mx<<endl;
    }
    return 0;
}















