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

string star[200000], str, str1, str2;
long long ara[500005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <string> y;
map <string, long long> dat;
long long dp[10], sz;
bool pos, vis[30];
long long us[30], ls[30], ut[30], lt[30];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> str;
    n = str.length();
    memset(us, 0, sizeof us);
    memset(ls, 0, sizeof ls);
    for(i=0;i<n;i++){
        if(isupper(str[i])) us[str[i]-'A']++;
        if(islower(str[i])) ls[str[i]-'a']++;
    }
    cin >> str1;
    n = str1.length();
    a = b = 0;
    for(i=0;i<n;i++){
        if(islower(str1[i])){
            if(ls[str1[i]-'a']){
                a++;
                ls[str1[i]-'a']--;
                str1[i] = '#';
            }
        }
        else if(isupper(str1[i])){
            if(us[str1[i]-'A']){
                a++;
                us[str1[i]-'A']--;
                str1[i] = '#';
            }
        }
    }
    for(i=0;i<n;i++){
        if(str1[i]=='#') continue;
        if(islower(str1[i])){
            if(us[str1[i]-'a']){
                b++;
                us[str1[i]-'a']--;
            }
        }
        if(isupper(str1[i])){
            if(ls[str1[i]-'A']){
                b++;
                ls[str1[i]-'A']--;
            }
        }
    }
    cout << a <<" "<<b;
    return 0;
}











