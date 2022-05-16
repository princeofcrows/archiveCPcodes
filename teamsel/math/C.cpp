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
vector <long long> y;
vector <long long> z;
vector <long long> ya;
vector <long long> za;
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
map <long long, long long> dat2;
vector < vector <long long> > g;

void test(){
    int st[100];
    st[0] = 0;
    for(int i=1;i<=30;i++){
        map <int, int> s;
        for(int j=1;j<=i/2;j++){
            s[st[i-j]] = 1;
        }
        for(int j=0;;j++){
            if(!s[j]) {
                cout << i <<" "<<j<<endl;
                st[i] = j;
                break;
            }
        }
    }
}

long long grundy(long long n){
    if(n%2) return grundy(n/2);
    else return n/2;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> t;
    //test();
    while(t--){
        cin >> n;
        ans = 0;
        for(i=0;i<n;i++){
            cin >> ara[i];
            ara2[i] = grundy(ara[i]);
        }
        for(i=0;i<n;i++){
            ans^=ara2[i];
        }
        if(ans){
            cout <<"YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}














