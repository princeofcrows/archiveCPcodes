
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

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
//____________________________________________________________________________________//

string lon[100005], sml[100005], tsml[100005];
long long N, n;


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    for(i=1;i*i*i*i*i*i<=10000000;i++){
        x.push_back(i*i*i*i*i*i);
    }
    for(i=1;i<x.size();i++){
        for(j=i+1;j<x.size();j++){
            if(x[i]*x[j]<=10000000) x.push_back(x[i]*x[j]);
        }
    }
    sort(x.begin(),x.end());
    while(cin>>a){
        if(a==0) break;
        if(binary_search(x.begin(), x.end(),a)){
            cout << "Special"<<endl;
        }
        else{
            cout <<"Ordinary"<<endl;
        }
    }
    return 0;
}















