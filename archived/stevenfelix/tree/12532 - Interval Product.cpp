
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

long long ara[100005];

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

long long tree[300005];

void init(long long node, long long b, long long e){
    if(b==e){
        tree[node] = ara[b];
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left]*tree[right];
}

long long query(long long node, long long b, long long e, long long i, long long j){
    if(i>e||j<b){
        return 1;
    }
    if(b>=i&&e<=j){
        return tree[node];
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    long long p1 = query(left, b, mid, i, j);
    long long p2 = query(right, mid+1, e, i, j);
    return p1*p2;
}
void update(long long node, long long b, long long e, long long i, long long newvalue){
    if(i>e||i<b){
        return;
    }
    if(b>=i&&e<=i){
        tree[node] = newvalue;
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    update(left, b, mid, i, newvalue);
    update(right, mid+1, e, i, newvalue);
    tree[node] = tree[left]*tree[right];
}
int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(cin >> n >> k){
        for(i=1;i<=n;i++){
            cin >> ara[i];
            if(ara[i]>0) ara[i] = 1;
            if(ara[i]<0) ara[i] = -1;
        }
        init(1, 1, n);
        while(k--){
            cin >> str >> a >> b;
            if(str=="C"){
                if(b>0) b = 1;
                if(b<0) b = -1;
                update(1, 1, n, a, b);
            }
            else{
                ans = query(1, 1, n, a, b);
                if(ans==0) cout << 0;
                if(ans<0) cout << "-";
                if(ans>0) cout << "+";
            }
        }
        cout << endl;
    }
    return 0;
}















