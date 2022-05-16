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
long long ara[100005], ara2[100005];
vector <long long> x;
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, q;
    cin >> n >> k;
    b = n;
    a = 2*n;
    for(i=0;i<k;i++){
        cin >> ara[i];
    }
    for(i=0;i<k;i++){
        c = ara[i]/4;
        if(b>=c) b -= c;
        else {
            c = b;
            b = 0;
        }
        ara[i] -= c*4;
    }
    for(i=0;i<k;i++){
        c = ara[i]/2;
        if(a>=c) a -= c;
        else {
            c = a;
            a = 0;
        }
        ara[i] -= c*2;
    }
    for(i=0;i<k;i++){
        x.push_back(ara[i]);
    }
    sort(x.rbegin(), x.rend());
    for(i=0;i<k;i++){
        ara[i] = x[i];
    }
    for(i=0;i<k;i++){
        if(ara[i]==3){
            if(b){
                b-=1;
                ara[i] = 0;
            }
        }
    }
    a += b*2;
    for(i=0;i<k;i++){
        if(ara[i]>2){
            cout << "NO";
            return 0;
        }
        if(ara[i]<=2){
            if(a){
                a-=1;
                ara[i] = 0;
            }
            else if(ara[i]>0){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}













