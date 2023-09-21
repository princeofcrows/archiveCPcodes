
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

long long ara[1000005], ara2[200005], ara3[200005];

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
    c = 1;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        memset(ara, 0, sizeof ara);
        for(i=0;i<n;i++){
            cin >> a >> b;
            ara[a]++;
            ara[b]--;
        }
        for(i=0;i<m;i++){
            cin >> a >> b >> c;
            for(j=a;j<1000001;j+=c){
                ara[j]++;
            }
            for(j=b;j<1000001;j+=c){
                ara[j]--;
            }
        }
        bool flag = true;
        for(i=0;i<1000001;i++){
            if(i>0)ara[i]+=ara[i-1];
            if(ara[i]!=0&&ara[i]!=1){
                flag = false;
                //cout << i << " "<<ara[i]<<endl;
                break;
            }
        }
        if(flag) cout << "NO CONFLICT";
        else cout << "CONFLICT";
        cout << endl;
    }
    return 0;
}















