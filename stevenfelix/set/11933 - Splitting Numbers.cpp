
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
    while(cin>>n){
        if(n==0) break;
        a = b = j = 0;
        for(i=0;i<31;i++){
            if(check(n, i)){
                if(j%2==0) a=set1(a, i);
                if(j%2) b=set1(b, i);
                j++;
            }
        }
        cout << a <<" "<<b<<endl;
    }
    return 0;
}















