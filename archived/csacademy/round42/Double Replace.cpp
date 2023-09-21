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
vector <long long> x;
long long ara[10];
string str, sa, sb;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, d, ans, n, k;
    cin >> str >> sa >> sb;
    n = str.length();
    a = sa.length();
    b = sb.length();
    for(i=0;i<n;i++){
        m = 0;
        if(i+a<=n){
            m = 1;
            for(j=0;j<a;j++){
                if(str[i+j]!=sa[j]){
                    m = 0;
                    break;
                }
            }
        }
        if(m){
            cout << sb;
            i = i+a-1;
            continue;
        }
        m = 0;
        if(i+b<=n){
            m = 1;
            for(j=0;j<b;j++){
                if(str[i+j]!=sb[j]){
                    m = 0;
                    break;
                }
            }
        }
        if(m){
            cout << sa;
            i = i+b-1;
            continue;
        }
        cout << str[i];
    }
    return 0;
}













