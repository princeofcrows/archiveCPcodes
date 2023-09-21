
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

vector < vector <long long> > graph(100000);

bool check(long long n, long long pos){
    return (bool)(n&(1<<pos));
}
long long set1(long long n, long long pos){
    return n = n|(1<<pos);
}
long long set0(long long n, long long pos){
    return n = n&~(1<<pos);
}
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, n;

    while(cin>>a){
        for(i=0;i<(1<<a);i++){
            cin >> temp;
            x.push_back(temp);
        }
        for(i=0;i<(1<<a);i++){
            ans = 0;
            for(j=0;j<a;j++){
                if(check(i, j)){
                    n = set0(i, j);
                }
                else{
                    n = set1(i, j);
                }
                graph[i].push_back(n);
                ans+=x[n];
                //if(i==5) cout << n <<" ";
            }
            ara[i] = ans;
        }
        mx = 0;
        for(i=0;i<(1<<a);i++){
            for(j=0;j<graph[i].size();j++){
                mx = max(mx, ara[i]+ara[graph[i][j]]);
            }
        }
        cout << mx << endl;
        for(i=0;i<=(1<<a);i++){
            graph[i].clear();
        }
        x.clear();
    }
    return 0;
}















