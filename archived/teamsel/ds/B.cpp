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
long long ara[100005], ara2[100005], ara3[50005];

void init(long long n){
    for(long long i=1;i<=n;i++) {
        ara[i] = i;
        ara2[i] = 1;
    }
}

long long findset(long long n){
    if(ara[n] == n) return n;
    return ara[n] = findset(ara[n]);
}


void unionset(long long i, long long j){
    long long a = findset(j);
    long long b = findset(i);
    if(a==b) return;
    if(ara2[a]>=ara2[b]){
        ara2[a]+=ara2[b];
        ara[b] = a;
    }
    else{
        ara2[b]+=ara2[a];
        ara[a] = b;
    }
}


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> t;
    while(t--){
        cin >> n;
        map <string, long long> dat;
        c = 1;
        init(100001);
        while(n--){
            cin >> str >> str1;
            if(dat[str]==0) dat[str] = c++;
            if(dat[str1]==0) dat[str1] = c++;
            unionset(dat[str], dat[str1]);
            cout << ara2[findset(dat[str])] << endl;
        }
    }
    return 0;
}














