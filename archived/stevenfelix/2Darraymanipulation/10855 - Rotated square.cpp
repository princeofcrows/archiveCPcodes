
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

long long check(){
    long long i, j, k, l, ans = 0;
    for(i=0;i<=N-n;i++){
        for(j=0;j<=N-n;j++){
            bool flag = true;
            for(l=0;l<n;l++){
                for(k=0;k<n;k++){
                    if(sml[l][k]!=lon[i+l][j+k]){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag) ans++;
        }
    }
    return ans;
}

void rotate90(){
    long long i, j, k, l;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            str+=sml[j][i];
        }
        reverse(str.begin(), str.end());
        tsml[i] = str;
        str.clear();
    }
    for(i=0;i<n;i++){
        sml[i] = tsml[i];
        //cout << sml[i]<<endl;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(cin >> N >> n){
        if(N==0&&n==0) break;
        for(i=0;i<N;i++){
            cin >> lon[i];
        }
        for(i=0;i<n;i++){
            cin >> sml[i];
        }
        for(i=0;i<4;i++){
            cout << check();
            if(i!=3) cout <<" ";
            rotate90();
        }
        cout << endl;
    }
    return 0;
}















