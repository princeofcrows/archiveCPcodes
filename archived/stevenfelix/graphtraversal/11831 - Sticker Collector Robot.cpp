
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

string str, str1, str2;

long long ara[200005];

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

vector <string> star;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, s;
    while(cin>>n>>m>>s){
        if(n==0&&m==0&&s==0) break;
        star.clear();
        for(i=0;i<n;i++){
            cin >> str2;
            star.push_back(str2);
        }
        reverse(star.begin(), star.end());
        for(i=0;i<n;i++){
            //cout << star[i] << endl;
            for(j=0;j<m;j++){
                if(star[i][j]=='N'){
                    str1 = "N";
                    a = i;
                    b = j;
                }
                if(star[i][j]=='S'){
                    str1 = "S";
                    a = i;
                    b = j;
                }
                if(star[i][j]=='L'){
                    str1 = "L";
                    a = i;
                    b = j;
                }
                if(star[i][j]=='O'){
                    str1 = "O";
                    a = i;
                    b = j;
                }
            }
        }
        cin >> str;
        //cout << str1 << endl;
        ans = 0;
        for(i=0;i<s;i++){
            if(str[i]=='D'){
                if(str1=="N") str1 = "L";
                else if(str1=="S") str1 = "O";
                else if(str1=="L") str1 = "S";
                else if(str1=="O") str1 = "N";
            }
            if(str[i]=='E'){
                if(str1=="N") str1 = "O";
                else if(str1=="S") str1 = "L";
                else if(str1=="L") str1 = "N";
                else if(str1=="O") str1 = "S";
            }
            if(str[i]=='F'){
                if(str1=="N") {
                    a++;
                    if(a==n) a = n-1;
                    if(star[a][b]=='#') a--;
                    if(star[a][b]=='*'){
                        ans++;
                        star[a][b] = '.';
                    }
                }
                if(str1=="S"){
                    a--;
                    if(a==-1) a = 0;
                    if(star[a][b]=='#') a++;
                    if(star[a][b]=='*'){
                        ans++;
                        star[a][b] = '.';
                    }
                }
                if(str1=="L"){
                    b++;
                    if(b==m) b = m-1;
                    if(star[a][b]=='#') b--;
                    if(star[a][b]=='*'){
                        ans++;
                        star[a][b] = '.';
                    }
                }
                if(str1=="O") {
                    b--;
                    if(b==-1) b = 0;
                    if(star[a][b]=='#') b++;
                    if(star[a][b]=='*'){
                        ans++;
                        star[a][b] = '.';
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}















