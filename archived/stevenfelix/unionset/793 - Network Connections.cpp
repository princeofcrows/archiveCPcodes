
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
long long pset[1000005];

void initset(long long n){
    for(long long i=1;i<=n;i++) pset[i] = i;
}
long long findset(long long i){
    if(pset[i]==i) return i;
    return pset[i] = findset(pset[i]);
}
void unionset(long long i, long long j){
    pset[findset(i)] = findset(j);
}
bool issameset(long long i, long long j){
    return findset(i)==findset(j);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> n;
    for(k=0;k<=n;k++){
        while(cin >> str){
            //cout << str;
            if(str=="c"){
                cin >> a >> b;
                unionset(a, b);
            }
            else if(str=="q"){
                cin >> a >> b;
                if(issameset(a, b)) i++;
                else j++;
            }
            else{
                if(k) cout << i <<","<<j<<endl<<endl;
                i = j = 0;
                m = stoi(str);
                initset(m);
                //cout << m;
                break;
            }
        }
    }
    cout << i <<","<<j<<endl;
    return 0;
}















