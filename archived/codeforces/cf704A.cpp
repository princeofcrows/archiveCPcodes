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
long long ara[1000005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x, y;
queue < pair <long long, long long> > q;
queue <long long> arq[300005] ;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, e, v;
    cin >> n >> m;
    ans = 0;
    d = j = 0;
    while(m--){
        j++;
        cin >> t >> a;
        if(t==1){
            ans++;
            q.push({a, j});
            arq[a].push(j);
        }
        else if(t==2){
            while(!arq[a].empty()){
                arq[a].pop();
                ans--;
            }
        }
        else if(t==3){
            while(d<a){
                if(q.empty()) break;
                k = q.front().first;
                l = q.front().second;
                if(arq[k].front()==l){
                    arq[k].pop();
                    ans--;
                }
                q.pop();
                d++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}













