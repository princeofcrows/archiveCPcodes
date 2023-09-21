
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
    while(cin >> N >> n){
        if(N==0&&n==0) break;
        temp = N;
        i = N;
        while(n<(temp)*(temp)){
            temp-=2;
            i--;
        }
        a = i;
        b = i;
        temp = temp*temp;
        if(n==temp){
            cout <<"Line = "<< b <<", column = "<<a <<"."<<endl;
            continue;
        }
        else{
            b++;
            temp++;
        }
        while(temp!=n){
            temp++;
            if(b==i+1){
                if(a!=N-i) a--;
                else b--;
            }
            else if(a==N-i){
                if(b!=N-i)b--;
                else a++;
            }
            else if(b==N-i){
                if(a!=i+1)a++;
                else b++;
            }
            else if(a==i+1){
                if(b!=i+1) b++;
            }
        }
        cout <<"Line = "<< b <<", column = "<<a <<"."<<endl;
    }
    return 0;
}















