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

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, s, mn;
    cin >> d >> s;
    mx = mn = 0;
    for(i=0;i<d;i++){
        cin >> a >> b;
        mn+=a;
        mx+=b;
        ab.push_back({a, b});
        x.push_back(a);
    }
    if(((s>=mn)&&(s<=mx))){
        cout << "YES" << endl;
        temp = mn;
        i = 0;
        while(temp!=s){
            if(temp+ab[i].second-ab[i].first>=s){
                x[i] = s - temp + ab[i].first;
                temp = s;
            }
            else{
                x[i] = ab[i].second;
                temp = temp+ab[i].second-ab[i].first;
            }
            i++;
        }
        for(i=0;i<d;i++){
            cout << x[i] <<" ";
        }
    }
    else{
        cout << "NO";
    }
    return 0;
}


















