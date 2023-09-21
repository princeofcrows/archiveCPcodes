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

long long dat[105][105];
long long an[105][105];
int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, s, mn;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> dat[i][j];
        }
    }
    memset(an, -1, sizeof an);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(dat[i][j]==0){
                for(a=0;a<m;a++) an[i][a] = 0;
                for(a=0;a<n;a++) an[a][j] = 0;

            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(an[i][j]==-1){
                an[i][j] = 1;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(dat[i][j]==1){
                bool flag = false;
                for(a=0;a<m;a++){
                    if(an[i][a]){
                        flag = true;
                        break;
                    }
                }
                for(a=0;a<n;a++){
                    if(an[a][j]==1){
                        flag = true;
                        break;
                    }
                }
                if(flag==false){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout << an[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}


















