//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

long long ara[5000005], ara2[5000005], ara3[5000005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
vector <long long> prime;

void seive(){
    memset(ara2, 0, sizeof ara2);
    for(int i=2;i<=5000001;i++){
        if(ara2[i]==0){
            ara3[i] = i;
            for(int j=i*2;j<=5000001;j+=i){
                ara2[j] = 1;
                ara3[j] = i;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    seive();
    ara[0] = ara[1] = 0;
    for(i=2;i<=5000000;i++){
        temp = i;
        ara[temp] = ara[temp/ara3[temp]]+1;
    }
    for(i=2;i<=5000000;i++){
        ara[i]+=ara[i-1];
    }
    while(n--){
        cin >> a >> b;
        ans = ara[a]-ara[b];
        cout << ans <<"\n";
    }
    return 0;
}




















