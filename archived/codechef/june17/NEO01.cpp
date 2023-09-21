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

string star[200000], str, str1;
long long ara[200005], ara2[200005], ara3[200005];
vector <long long> x;
vector <long long> y;
long long mod;
vector <long long> graph[2505];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, n;
    cin >> t;
    while(t--){
        cin >> n;
        ans = 0;
        a = b = c =0;
        y.clear();
        for(i=0;i<n;i++){
            cin >> temp;
            if(temp>=0){
                a+=temp;
                b++;
            }
            else{
                c+=temp;
                y.push_back(temp);
            }
        }
        ans = a*b + c;
        sort(y.begin(), y.end());
        reverse(y.begin(), y.end());
        for(i=0;i<y.size();i++){
            if(((a+y[i])*(b+1)+c-y[i])>ans){
                a+=y[i];
                b++;
                c-=y[i];
                ans = a*b+c;
            }
            else break;
        }
        cout << ans << endl;
    }
    return 0;
}







