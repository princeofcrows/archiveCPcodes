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
        cin >> n >> k;
        a = 0;
        for(i=1;i<=k;i++) a+=i;
        x.clear();
        for(i=0;i<n;i++){
            cin >> c;
            b = 0;
            for(j=0;j<c;j++){
                cin >> temp;
                b += temp;
                graph[i].push_back(temp);
            }
            x.push_back(b);
            sort(graph[i].begin(), graph[i].end());
        }
        ans = 0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                temp = 0;
                for(l=0;l<graph[i].size();l++){
                    if(binary_search(graph[j].begin(), graph[j].end(), graph[i][l])){
                        temp+=graph[i][l];
                    }
                }
                if((x[i]+x[j]-temp)==a) ans++;
            }
        }
        vector <long long> tgraph[2505];
        swap(tgraph, graph);
        cout << ans << endl;
    }
    return 0;
}







