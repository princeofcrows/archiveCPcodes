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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;
long long dp[105][105];
priority_queue <long long, vector <long long>, greater <long long> > q;
stack <long long> stk;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    b = 1;
    ans = 0;
    d = 0;
    for(i=0;i<2*n;i++){
        cin >> str;
        if(str=="add"){
            cin >> a;
            q.push(a);
            stk.push(a);
            if(b!=a) d = 0;
        }
        else{
            if(a==b){
                q.pop();
                if(d) {
                    if(!q.empty()) a = q.top();
                }
                else{
                    if(!stk.empty()){
                        a = stk.top();
                        stk.pop();
                    }
                }
                b++;
            }
            else{
                q.pop();
                if(!q.empty()) a = q.top();
                b++;
                ans++;
                d = 1;
                while(!stk.empty()) stk.pop();
            }
        }
    }
    cout << ans;
    return 0;
}













