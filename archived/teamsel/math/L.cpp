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

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n, temp, t, j, i, m, mx, d, k, l, x,s;
    double t1, t2, s1, s2, w, ans, a, b, ans2;
    cin >> t;
    long long c=1;
    while(t--){
        cin >> t1 >> t2 >> s1 >> s2 >> w;
        if(t1>s1){
            swap(t1, s1);
            swap(t2, s2);
        }
        ans = ans2 = 0;
        a = (t2-t1);
        b = (s2-s1);
        for(i=t1;i<t2;i++){
            for(j=s1;j<s2;j++){
                if(i<=j&&i+w-1>=j){
                    ans += 1;
                }
                else if(j<=i&&j+w-1>=i){
                    ans += 1;
                }
                if(i<=j&&i+w>=j){
                    ans2 += 1;
                }
                else if(j<=i&&j+w>=i){
                    ans2 += 1;
                }
            }
        }
        printf("Case #%lld: %.7lf\n",c++, (ans+ans2)/(2*a*b));
    }
    return 0;
}














