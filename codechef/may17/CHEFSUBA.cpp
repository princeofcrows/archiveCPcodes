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

long long ara[200005], ara2[200005], ara3[200005];

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
deque <long long> dq;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, p, pk, k;
    cin >> n >> k >> p;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    memset(ara2, 0, sizeof ara2);
    ara3[0] = ara[0];
    mx = 0;
    for(i=1;i<n;i++){
        if(ara[i]==1){
            ara3[i] = ara3[i-1]+1;
        }
        else {
            ara3[i] = ara3[i-1];
        }
        if(i>=k-1){
            if(i>=k)if(ara[i-k]==1) ara3[i]--;
            ara2[ara3[i]]++;
            mx = max(ara3[i], mx);
            dq.push_front(ara3[i]);
            //cout << ara3[i] <<" ";
        }
    }
    if(dq.empty()) mx = ara3[n-1];
    j = n-1;
    pk = k-1;
    cin >> str;
    for(i=0;i<p;i++){
        if(str[i]=='?') cout << mx <<endl;
        else{
            if(dq.empty()){
                continue;
            }
            if(ara[j]==0){
                if(ara[pk]==0){
                    dq.push_back(dq.back());
                    ara2[dq.back()]++;
                    ara2[dq.front()]--;
                    if(dq.front()==mx&&ara2[mx]==0){
                        while(ara2[mx]==0) mx--;
                    }
                    dq.pop_front();
                    pk--;
                    if(pk<0) pk = n-1;
                }
                else if(ara[pk]==1){
                    dq.push_back(dq.back()-1);
                    ara2[dq.back()]++;
                    ara2[dq.front()]--;
                    if(dq.front()==mx&&ara2[mx]==0){
                        while(ara2[mx]==0) mx--;
                    }
                    dq.pop_front();
                    pk--;
                    if(pk<0) pk = n-1;
                }
            }
            else if(ara[j]==1){
                if(ara[pk]==0){
                    dq.push_back(dq.back()+1);
                    ara2[dq.back()]++;
                    mx = max(dq.back(), mx);
                    ara2[dq.front()]--;
                    if(dq.front()==mx&&ara2[mx]==0){
                        while(ara2[mx]==0) mx--;
                    }
                    dq.pop_front();
                    pk--;
                    if(pk<0) pk = n-1;
                }
                else if(ara[pk]==1){
                    dq.push_back(dq.back());
                    ara2[dq.back()]++;
                    ara2[dq.front()]--;
                    if(dq.front()==mx&&ara2[mx]==0){
                        while(ara2[mx]==0) mx--;
                    }
                    dq.pop_front();
                    pk--;
                    if(pk<0) pk = n-1;
                }
            }
            j--;
            if(j<0) j= n-1;
        }
    }
    return 0;
}











