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

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    while(cin >> n){
        stack <long long> stk;
        queue <long long> q;
        priority_queue <long long> pq;
        ara[0] = 0;
        ara[1] = 0;
        ara[2] = 0;
        while(n--){
            cin >> a >> b;
            if(a==1){
                stk.push(b);
                q.push(b);
                pq.push(b);
            }
            if(a==2){
                if(stk.empty()) ara[0] = 1;
                else {
                    c = stk.top();
                    stk.pop();
                    if(c!=b) ara[0] = 1;
                }
                if(q.empty()) ara[1] = 1;
                else {
                    c = q.front();
                    q.pop();
                    if(c!=b) ara[1] = 1;
                }
                if(pq.empty()) ara[2] = 1;
                else {
                    c = pq.top();
                    pq.pop();
                    if(c!=b) ara[2] = 1;
                }
            }
        }
        if(ara[0]&&ara[1]&&ara[2]){
            cout << "impossible\n";
        }
        else if(!ara[0]&&ara[1]&&ara[2]){
            cout << "stack\n";
        }
        else if(ara[0]&&!ara[1]&&ara[2]){
            cout << "queue\n";
        }
        else if(ara[0]&&ara[1]&&!ara[2]){
            cout << "priority queue\n";
        }
        else{
            cout <<"not sure\n";
        }
    }
    return 0;
}














