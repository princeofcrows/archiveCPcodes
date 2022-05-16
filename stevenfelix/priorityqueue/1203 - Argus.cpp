
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

priority_queue <pair <long long, long long>, vector <pair <long long, long long> >, greater <pair <long long, long long> > > q;
map <long long, long long> dat;
pair <long long, long long> temp;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(cin>>str){
        if(str=="#"){
            cin >> k;
            c = 0;
            while(c!=k){
                temp = q.top();
                q.pop();
                c++;
                cout << temp.second << endl;
                temp.first+=dat[temp.second];
                q.push(temp);
            }
            while(!q.empty()) q.pop();
            dat.clear();
        }
        cin >> a >> b;
        q.push({b,a});
        dat[a] = b;
    }
    return 0;
}















