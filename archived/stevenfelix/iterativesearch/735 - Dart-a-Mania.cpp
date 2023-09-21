
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

map < tuple <long long, long long, long long >, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    x.push_back(0);
    memset(ara, 0, sizeof ara);
    for(i=1;i<=20;i++){
        ara[i]=1;
        ara[2*i]=1;
        ara[3*i]=1;
    }
    ara[50] = 0;
    for(i=1;i<=100;i++){
        if(ara[i]) x.push_back(i);
    }
    x.push_back(50);
    while(cin >> n){
        if(n<=0) break;
        c = 0;
        a = 0;
        memset(ara, 0, sizeof ara);
        for(i=0;i<x.size();i++){
            for(j=0;j<x.size();j++){
                for(k=0;k<x.size();k++){
                    if(x[i]+x[j]+x[k]==n){
                        c++;
                        if(dat[make_tuple(x[i], x[j], x[k])]) continue;
                        if(dat[make_tuple(x[i], x[k], x[j])]) continue;
                        if(dat[make_tuple(x[j], x[i], x[k])]) continue;
                        if(dat[make_tuple(x[j], x[k], x[i])]) continue;
                        if(dat[make_tuple(x[k], x[j], x[i])]) continue;
                        if(dat[make_tuple(x[k], x[i], x[j])]) continue;
                        a++;
                        dat[make_tuple(x[i], x[j], x[k])]=1;
                    }
                }
            }
        }
        if(c==0){
            cout <<"THE SCORE OF "<<n<<" CANNOT BE MADE WITH THREE DARTS."<<endl;
        }
        else{
            cout <<"NUMBER OF COMBINATIONS THAT SCORES "<<n<<" IS "<<a<<"."<<endl;
            cout <<"NUMBER OF PERMUTATIONS THAT SCORES "<<n<<" IS "<<c<<"."<<endl;
        }
        cout <<"**********************************************************************\n";
        dat.clear();
    }
    cout <<"END OF OUTPUT"<<endl;
    return 0;
}















