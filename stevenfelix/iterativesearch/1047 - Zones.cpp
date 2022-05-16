
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
bool flagar[25];

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

vector < vector <long long> > graph(11);

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d, l;
    d = 1;
    while(cin >> n >> k){
        if(n==0&& k==0) break;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        cin >> m;
        for(i=0;i<m;i++){
            cin >> t;
            for(j=0;j<t;j++){
                cin >> a;
                graph[i].push_back(a);
            }
            cin >> ara2[i];
        }
        mx = 0;
        for(b=1;b<=(1<<n);b++){
            ans = 0;
            l = 0;
            for(i=0;i<n;i++){
                if(b&(1<<i)){
                    ans+=ara[i];
                    l++;
                }
            }
            if(l!=k) continue;
            for(i=0;i<m;i++){
                l = 0;
                bool flag = true;
                for(j=0;j<graph[i].size();j++){
                    if(b&(1<<(graph[i][j]-1))){
                        l++;
                    }
                }
                if(l) ans-=ara2[i]*(l-1);
            }
            if(mx<ans){
                c = b;
                mx = ans;
            }
            else if(mx==ans){
                for(i=0;i<n;i++){
                    if((b&(1<<i))&&!(c&(1<<i))){
                        c = b;
                        mx = ans;
                        break;
                    }
                    else if(!(b&(1<<i))&&(c&(1<<i))){
                        break;
                    }
                }
            }
        }
        cout <<"Case Number  "<<d++<<endl;
        cout << "Number of Customers: "<<mx<<endl;
        cout << "Locations recommended: ";
        l = 0;
        for(i=0;i<n;i++){
            if(c&(1<<i)){
                if(l==0)cout << (i+1);
                else cout <<" "<<(i+1);
                l++;
            }
        }
        cout << endl<<endl;
        for(i=0;i<m;i++) graph[i].clear();
    }

    return 0;
}















