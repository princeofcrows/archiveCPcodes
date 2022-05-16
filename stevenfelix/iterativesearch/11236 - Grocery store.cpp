
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

vector <double> sol;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    double n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d, l;
    for(i=1;i<=2000;i++){
        for(j=i;j<=2000-i;j++){
            for(k=j;k<=2000-i-j;k++){
                l = (i+j+k)*1000000/(i*j*k-1000000);
                if(l<=0) continue;
                if(l+i+j+k>2000) continue;
                l = floor(l);
                if(l<k) continue;
                if((i*j*l*k)==(i+j+k+l)*1000000){
                    sol.push_back(i);
                    sol.push_back(j);
                    sol.push_back(k);
                    sol.push_back(l);
                    //sort(sol.begin(), sol.end());
                    printf("%.2lf %.2lf %.2lf %.2lf\n", sol[0]/100, sol[1]/100, sol[2]/100, sol[3]/100);
                    sol.clear();
                }
            }
        }
    }
    return 0;
}















