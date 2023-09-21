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

long long ara[1000010], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long dp[105][105];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> str;
    n = str.length();
    ans = a = 0;
    m = 1000000007;
    if(n==1){
        cout << 0;
        return 0;
    }
    t = 1;
    j = 0;
    while(j<=1000005){
        ara[j] = t;
        t*=2;
        t%=m;
        j++;
    }
    for(j=1;j<=1000005;j++){
        ara[j] += ara[j-1];
        ara[j]%=m;
    }
    for(i=0;i<n-1;i++){
        if(str[i]=='a'&&str[i+1]=='b'){
            ans+=ara[a];
            ans%=m;
            str[i+1] = 'a';
        }
        else if(str[i]=='a'){
            a++;
        }
    }
    cout << ans%m;
    return 0;
}




















