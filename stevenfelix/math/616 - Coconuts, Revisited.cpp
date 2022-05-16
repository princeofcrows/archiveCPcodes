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
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l;
    while(cin >> n){
        if(n<0) break;
        x.clear();
        temp = n-1;
        x.push_back(1);
        if(temp!=0)x.push_back(temp);
        for(i=2;i*i<=n;i++){
            if(temp%i==0){
                x.push_back(i);
                if(i!=temp/i) x.push_back(temp/i);
            }
        }
        sort(x.rbegin(), x.rend());
        ans = -1;
        for(i=0;i<x.size();i++){
            j = 0;
            c = 1;
            temp = n;
            while(j!=x[i]){
                if(temp%x[i]!=1){
                    c = 0;
                    break;
                }
                j++;
                temp = temp-1-(temp-1)/x[i];
            }
            if(temp%x[i]!=0) c = 0;
            if(c){
                ans = x[i];
                break;
            }
        }
        if(ans==-1) cout << n<<" coconuts, no solution\n";
        else cout <<n<<" coconuts, "<<ans<<" people and 1 monkey\n";
    }
    return 0;
}







