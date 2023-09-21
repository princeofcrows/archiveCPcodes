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
long long ara[105][105], ara2[13][105][105];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;

bool checkwd(long long a, bool flag){
    if(flag) return false;
    char ch = star[0][0];
    dat[ch] = true;
    for(long long i=0;i<a;i++){
        for(long long j=0;j<star[i].length();j++){
            if(star[i][j]!=ch) return false;
        }
    }
    ch = star[a][0];
    if(dat[ch]) return false;
    dat[ch] = true;
    for(long long i=a;i<2*a;i++){
        for(long long j=0;j<star[i].length();j++){
            if(star[i][j]!=ch) return false;
        }
    }
    ch = star[2*a][0];
    if(dat[ch]) return false;
    dat[ch] = true;
    for(long long i=2*a;i<3*a;i++){
        for(long long j=0;j<star[i].length();j++){
            if(star[i][j]!=ch) return false;
        }
    }
    return true;
}
bool checkht(long long a, bool flag, long long n){
    if(flag) return false;
    char ch = star[0][0];
    dat2[ch] = true;
    for(long long i=0;i<a;i++){
        for(long long j=0;j<n;j++){
            if(star[j][i]!=ch) return false;
        }
    }
    ch = star[0][a];
    if(dat2[ch]) return false;
    dat2[ch] = true;
    for(long long i=a;i<2*a;i++){
        for(long long j=0;j<n;j++){
            if(star[j][i]!=ch) return false;
        }
    }
    ch = star[0][2*a];
    if(dat2[ch]) return false;
    dat2[ch] = true;
    for(long long i=2*a;i<3*a;i++){
        for(long long j=0;j<n;j++){
            if(star[j][i]!=ch) return false;
        }
    }
    return true;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, q;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> star[i];
    }
    a = n/3;
    b = m/3;
    if(checkwd(a, n%3)||checkht(b, m%3, n)) cout << "YES";
    else cout << "NO";
    return 0;
}













