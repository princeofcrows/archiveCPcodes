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
string star[200000], str, str1, str2;
long long ara[300005], ara2[300005], ara3[300005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab[100005];
vector < pair <long long, long long> > ba[100005];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    cin >> n;
    for(i=1;i<=1005;i++){
        x.push_back(i*i);
    }
    if(n==2){
        cout << 6;
        return 0;
    }
    else if(n==3){
        cout << 8;
        return 0;
    }
    j = upper_bound(x.begin(), x.end(), n)-x.begin()-1;
    temp = n-x[j];
    ans = 4*(j+1);
    if(temp){
        temp -= j+1;
        ans+=2;
    }
    if(temp>0){
        ans+=2;
    }
    cout << ans;
    return 0;
}





















