
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

string str[3], str1, str2;

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

priority_queue <long long> pq;
stack <long long> stk;
queue <long long> q;
bool flag[3];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    str[0] = "stack";
    str[1] = "priority queue";
    str[2] = "queue";
    while(cin>>n){
        memset(flag, true, sizeof flag);
        while(!stk.empty())stk.pop();
        while(!pq.empty())pq.pop();
        while(!q.empty())q.pop();
        for(i=0;i<n;i++){
            cin >> a >> b;
            if(a==1){
                q.push(b);
                pq.push(b);
                stk.push(b);
            }
            else{
                if(stk.empty()){
                    memset(flag, false, sizeof flag);
                    continue;
                }
                if(stk.top()!=b){
                    flag[0] = false;
                }
                if(pq.top()!=b){
                    flag[1] = false;
                }
                if(q.front()!=b){
                    flag[2] = false;
                }
                stk.pop();
                q.pop();
                pq.pop();

            }
        }
        c = 0;
        for(i=0;i<3;i++){
            if(flag[i]){
                c++;
                j = i;
            }
        }
        if(c==0){
            cout << "impossible";
        }
        if(c==1){
            cout << str[j];
        }
        if(c>1){
            cout << "not sure";
        }
        cout << endl;
    }
    return 0;
}















