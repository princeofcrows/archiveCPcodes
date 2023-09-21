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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> b;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<b;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    j = 0;
    for(i=0;i<n;i++){
        if(ara[i]==0){
            ara[i] = x[j];
            j++;
        }
    }
    for(i=0;i<n-1;i++){
        if(ara[i]>=ara[i+1]){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}













