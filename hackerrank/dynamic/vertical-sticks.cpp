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
long long dp[1005][1005];

int main() {
    freopen("in.txt", "r", stdin);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    for(t=0;t<n;t++){
        cin >> str1 >> str2;
        memset(dp, 0, sizeof dp);
        for(i=0;i<str1.length();i++){
            for(j=0;j<str2.length();j++){
                if(str1[i]==str2[j]){
                    dp[i+1][j+1] = dp[i][j]+1;
                    ans[i+1][j+1] += str1[i];
                }
                else if(toupper(str1[i])==str2[j]){
                    dp[i+1][j+1] = dp[i][j]+1;
                    ans[i+1][j+1] += toupper(str1[i]);
                }
                else if(str1[i]>='A'&&str1[i]<='Z'){
                    dp[i+1][j+1] = dp[i][j]+1;
                    ans[i+1][j+1] += (str1[i]);
                }
                else if(dp[i][j+1]>dp[i+1][j]){
                    dp[i+1][j+1] = dp[i][j+1];
                    ans[i+1][j+1] = ans[i][j+1];
                }
                else {
                    dp[i+1][j+1] = dp[i+1][j];
                    ans[i+1][j+1] = ans[i+1][j];
                }
            }
        }
        cout << ans[str1.length()][str2.length()]<<endl;
        if(ans[str1.length()][str2.length()]==str2){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}









