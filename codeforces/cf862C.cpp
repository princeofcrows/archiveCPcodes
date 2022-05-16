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
vector <pair <long long, long long> > ab;
vector <int> g;
set <long long> s;
set <long long> s1;
set <long long> s2;
string str, str1;
long long ara[100005];
long long ara2[100005];

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> n >> k;
    c = 1;
    ans = 0;
    g.push_back(0);
    for(i=0;i<32;i++){
        if(check(k, i)){
            c = Set(0, i);
            g.push_back(c);
            ans++;
        }
    }
    if(ans+1<n){
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    for(i=0;i<n;i++){
        cout << g[i] <<" ";
    }
    return 0;
}





















