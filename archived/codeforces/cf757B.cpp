//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005], ara3[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

void seive(){
    memset(ara2, true, sizeof ara2);
    long long i, j;
    for(i=2;i<=200000;i++){
        if(ara2[i]){
            x.push_back(i);
            for(j=i*2;j<=200000;j+=i){
                ara2[j] = 0;
            }
        }
    }
}

map <long long, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    seive();
    cin >> n;
    memset(ara3, 0, sizeof ara3);
    for(i=0;i<n;i++){
        cin >> temp;
        dat[temp]++;
        if(dat[temp]==1){
            y.push_back(temp);
        }
    }
    for(i=0;i<y.size();i++){
        j = 0;
        temp = y[i];
        while(temp!=1){
            if(ara2[temp]){
                ara3[temp]+=dat[y[i]];
                break;
            }
            if(temp%x[j]==0){
                ara3[x[j]]+=dat[y[i]];
                while(temp%x[j]==0){
                    temp/=x[j];
                }
            }
            j++;
        }
    }
    ans = 0;
    for(i=0;i<x.size();i++) ans = max(ans, ara3[x[i]]);
    if(ans==0) ans++;
    cout << ans;
    return 0;
}




















