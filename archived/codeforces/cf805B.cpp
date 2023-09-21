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

long long ara[200005], ara2[200005];

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
    cin >> n;
    if(n==1){
        cout << 'a';
        return 0;
    }
    if(n==2){
        cout << "aa";
        return 0;
    }
    str = "aab";
    for(i=3;i<n;i+=1){
        if(str[i-2]=='a') str+='b';
        else str+='a';
    }
    for(i=0;i<n;i+=1){
        cout << str[i];
    }
    return 0;
}




















