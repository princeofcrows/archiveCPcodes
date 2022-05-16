
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

long long area[10][10];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d, l;
    cin >> t;
    while(t--){
        cin >> n;
        memset(area, 0, sizeof area);
        for(i=0;i<n;i++){
            cin >> a >> b >> c;
            area[a][b] = c;
        }
        mx = 9999999999999;
        for(i=0;i<=24;i++){
            for(j=i+1;j<=24;j++){
                for(k=j+1;k<=24;k++){
                    for(l=k+1;l<=24;l++){
                        for(m=l+1;m<=24;m++){
                            h = 0;
                            for(n=0;n<=24;n++){
                                ans = 999999999999;
                                a = (n/5);
                                b = (n%5);
                                c = (i/5);
                                d = (i%5);
                                temp = abs(a-c)+abs(b-d);
                                ans = min(ans, area[a][b]*temp);
                                c = (j/5);
                                d = (j%5);
                                temp = abs(a-c)+abs(b-d);
                                ans = min(ans, area[a][b]*temp);
                                c = (k/5);
                                d = (k%5);
                                temp = abs(a-c)+abs(b-d);
                                ans = min(ans, area[a][b]*temp);
                                c = (l/5);
                                d = (l%5);
                                temp = abs(a-c)+abs(b-d);
                                ans = min(ans, area[a][b]*temp);
                                c = (m/5);
                                d = (m%5);
                                temp = abs(a-c)+abs(b-d);
                                ans = min(ans, area[a][b]*temp);
                                h+=ans;
                            }
                            if(h<mx){
                                x.clear();
                                x.push_back(i);
                                x.push_back(j);
                                x.push_back(k);
                                x.push_back(l);
                                x.push_back(m);
                                mx = h;
                            }
                        }
                    }
                }
            }
        }
        for(i=0;i<5;i++){
            cout << x[i];
            if(i!=4) cout << " ";
        }
        cout << endl;
        x.clear();
    }
    return 0;
}















