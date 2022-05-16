////////////////////////////////////////////////////////////////////////
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
map <long long, long long> dat[100005];

long long knapSack(long long w, long long wt[], long long val[], long long n){

   // Build table K[][] in bottom up manner
    if (n == 0 || w == 0)
       return 0;
    if (dat[w][n]) return dat[w][n];
   // If weight of the nth item is more than Knapsack capacity W, then
   // this item cannot be included in the optimal solution
   if (wt[n-1] > w)
       return dat[w][n] = knapSack(w, wt, val, n-1);

   // Return the maximum of two cases:
   // (1) nth item included
   // (2) not included
   else return dat[w][n] = max( val[n-1] + knapSack(w-wt[n-1], wt, val, n-1),
                    knapSack(w, wt, val, n-1));

}

int main() {
    freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> m;
    ans = 0;
    long long ara[200005], ara2[200005];
    a = j = 0;
    for(i=0;i<n;i++){
        cin >> ara[j] >> ara2[j];
        if(ara[j]==1){
            a+=ara2[j];
        }
        else j++;
    }
    n = j;
    ans = knapSack(m, ara, ara2, n);
    cout << ans+a;
    return 0;
}











