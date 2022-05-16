
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

struct data{
    long long xa, ya, za;
};

vector <data> sol;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        j = 0;
        for(i=0;i<=100001;i++){
            if(2*i*i*i-2*a*i*i+i*(a*a-c)==2*b){
                j++;
                x.push_back(i);
            }
            i = -i;
            if(2*i*i*i-2*a*i*i+i*(a*a-c)==2*b){
                j++;
                x.push_back(i);
            }
            i = -i;
        }
        sort(x.begin(), x.end());
        for(i=0;i<x.size();i++){
            for(j=0;j<x.size();j++){
                for(k=0;k<x.size();k++){
                    if(x[i]==x[j]||x[j]==x[k]||x[i]==x[k]) continue;
                    if(x[i]+x[j]+x[k]==a){
                        if(x[i]*x[j]*x[k]==b){
                            if(x[i]*x[i]+x[j]*x[j]+x[k]*x[k]==c){
                                data an;
                                y.push_back(x[i]);
                                y.push_back(x[j]);
                                y.push_back(x[k]);
                                sort(y.begin(), y.end());
                                an.xa = y[0];
                                an.ya = y[1];
                                an.za = y[2];
                                y.clear();
                                sol.push_back(an);
                            }
                        }
                    }
                }
            }
        }
        if(sol.size()==0){
            cout << "No solution.\n";
        }
        else{
            cout << sol[0].xa <<" "<<sol[0].ya<<" "<<sol[0].za<<endl;
        }
        x.clear();
        y.clear();
        sol.clear();
    }
    return 0;
}















