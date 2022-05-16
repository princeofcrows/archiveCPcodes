//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

string star[200000], str, str1;
long long ara[100], ara2[100], ara3[100], ara4[100], ara5[100];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
long long dp[204][204], res;

void stcheck(long long i, long long k){
    long long a = i%2;
    long long ans = 0;
    long long tk = k;
    long long n = x.size();
    for(long long j=i;j<n;j++){
        if(j%2==a) ans+=x[j];
        else{
            if(tk>=x[j]){
                tk -= x[j];
                ans += x[j];
            }
            else{
                res = max(res, ans+tk);
                tk += x[i+1];
                ans-= (x[i]+x[i+1]);
                j--;
                i+=2;
            }
        }
    }
    res = max(res, ans);
}

void stcheck2(long long i, long long k){
    long long a = i%2;
    long long ans = 0;
    long long tk = k;
    long long n = x.size();
    i--;
    long long j = i;
    for(j=j;j<n;j++){
        if(j%2==a) ans+=x[j];
        else{
            if(tk>=x[j]){
                tk -= x[j];
                ans += x[j];
            }
            else{
                res = max(res, ans+tk);
                tk += x[i];
                ans-= (x[i]+x[i+1]);
                j--;
                i+=2;
            }
        }
    }
    res = max(res, ans);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> n >> k;
    cin >> str;
    char ch = str[0];
    a = 0;
    for(i=0;i<n;i++){
        if(ch!=str[i]){
            x.push_back(a);
            a = 0;
            ch = str[i];
            i--;
        }
        else a++;
    }
    x.push_back(a);
    res = 0;
    for(i=0;i<2;i++){
        stcheck(i, k);
    }
    stcheck2(1, k);
    cout << res;
    return 0;
}
















