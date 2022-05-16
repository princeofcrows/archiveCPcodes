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
long long ara[205];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f;
    cin >> a >> b >> f >> k;
    c = b;
    d = ans = 0;
    for(i=1;i<=k;i++){
        if(!d){
            if(c<f){
                cout << -1;
                return 0;
            }
            if(c>=(2*a-f)){
                c = c-a;
                d^=1;
                continue;
            }
            else{
                if(i==k&&c>=a){
                    break;
                }
                else{
                    ans++;
                    c = b-a+f;
                }
            }
        }
        else{
            if(c<a-f){
                cout << -1;
                return 0;
            }
            if(c>=a+f){
                c = c-a;
                d^=1;
                continue;
            }
            else{
                if(i==k&&c>=a){
                    break;
                }
                else{
                    ans++;
                    c = b-f;
                }
            }
        }
        d^=1;
    }
    if(c<0){
        cout << -1;
        return 0;
    }
    cout << ans;
    return 0;
}







