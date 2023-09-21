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
long long ara[200005];
vector < pair <long long, long long> > ab;

long long rec(long long i, long long ans, long long c, long long m){
    if(c) ans+=ab[i].second;
    else ans+=m-ab[i].first;
    if(i==ab.size()-1) return ans;
    if(c==0){
        return min(rec(i+1, ans+ab[i].first,c^1, m), rec(i+1, ans+m-ab[i].first,c, m));
    }
    else{
        return min(rec(i+1, ans+m-ab[i].second, c^1, m), rec(i+1, ans+ab[i].second, c, m));
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    c = 0;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> str;
        a = 0;
        b = 0;
        l = 0;
        for(j=0;j<m+2;j++){
            a+=str[j]-'0';
            if(a==1&&str[j]=='1'){
                b = j;
            }
            if(a>=1&&str[j]=='1') l = j;
        }
        if(a==0&&c==0) continue;
        if(c==1&&a==0){
            ans++;
            continue;
        }
        ab.push_back({b, l});
        c = 1;
    }
    if(ab.size()==0){
         cout << 0;
         return 0;
    }
    reverse(ab.begin(), ab.end());
    ans += ab.size()-1;
    cout << ans+rec(0, 0, 1, m+1);
    return 0;
}







