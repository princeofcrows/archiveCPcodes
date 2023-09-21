
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

vector < vector <long long> > graph(30);

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> str;
    n = str.length();
    for(i=0;i<n;i++){
        graph[str[i]-'a'].push_back(i);
    }
    cin >> k;
    while(k--){
        cin >> str;
        x.clear();
        if(graph[str[0]-'a'].size()) x.push_back(graph[str[0]-'a'][0]);
        else {
            cout <<"Not matched\n";
            continue;
        }
        c = 1;
        for(i=1;i<str.length();i++){
            a = upper_bound(graph[str[i]-'a'].begin(), graph[str[i]-'a'].end(), x[i-1])-graph[str[i]-'a'].begin();
            if(a==graph[str[i]-'a'].size()){
                cout <<"Not matched\n";
                c = 0;
                break;
            }
            else{
                x.push_back(graph[str[i]-'a'][a]);
            }
        }
        if(c) cout << "Matched "<<x[0]<<" "<<x[x.size()-1]<<endl;
    }
    return 0;
}















