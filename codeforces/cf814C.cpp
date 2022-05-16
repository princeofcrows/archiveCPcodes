//price_of_crows
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
vector <string> dat;
long long dp[204][204], res;
vector <vector <long long> > y;

void stcheck(long long i, long long k){
    if(i==1&&x.size()<=1){
        res = max(k, res);
        return;
    }
    long long a = i%2;
    long long ans = 0;
    long long tk = k;
    long long n = x.size();
    bool vis[n+1];
    memset(vis, false, sizeof vis);
    for(long long j=i;j<n;j++){
        if(j%2==a){
            ans+=x[j];
            vis[j] = true;
        }
        else{
            if(tk>=x[j]){
                tk -= x[j];
                ans += x[j];
                vis[j] = true;
            }
            else{
                res = max(res, ans+tk);
                if(vis[i+1]&&i+1<n)tk += x[i+1];
                if(vis[i+1]&&i+1<n)ans-= (x[i]+x[i+1]);
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
    bool vis[n+1];
    memset(vis, false, sizeof vis);
    for(j=j;j<n;j++){
        if(j%2==a){
            ans+=x[j];
            vis[j] = true;
        }
        else{
            if(tk>=x[j]){
                tk -= x[j];
                ans += x[j];
                vis[j] = true;
            }
            else{
                res = max(res, ans+tk);
                if(vis[i]&&i+1<n)tk += x[i];
                if(vis[i]&&i+1<n)ans-= (x[i]+x[i+1]);
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
    cin >> n ;
    cin >> str;
    char ch;
    a = 0;
    for(j=0;j<26;j++){
        ch = (char)('a'+j);
        x.clear();
        a = b = 0;
        for(i=0;i<n;i++){
            if(ch!=str[i]){
                if(a!=0)x.push_back(a);
                a = 0;
                b++;
            }
            else if(ch==str[i]){
                if(b!=0) x.push_back(b);
                b = 0;
                a++;
            }
        }
        if(a!=0)x.push_back(a);
        if(b!=0)x.push_back(b);
        y.push_back(x);
    }
    cin >> t;
    while(t--){
        cin >> k >> str1;
        x = y[str1[0]-'a'];
        res = 0;
        if(k>=str.length()){
            cout << str.length() << endl;
            continue;
        }
        if(str[0]==str1[0]){
            stcheck(0, k);
        }
        else{
            stcheck(1, k);
            stcheck2(1, k);
        }
        cout << res << endl;
    }
    return 0;

}
















