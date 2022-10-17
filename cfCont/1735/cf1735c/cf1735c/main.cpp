//
//  main.cpp
//  cf1735c
//
//  Created by Tamjid Jasir on 7/10/22.
//

#include <bits/stdc++.h>

using namespace std;

#define mx 400005
//#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 1000000007
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int path[26], in[26], out[26];

int32_t main(){
    read();
    //write();
    fst;
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        string s, t;
        cin >> t;
        
        mem(path, -1);
        mem(in, 0);
        mem(out, 0);
        int floating = 26;
        
        for(auto ch: t) {
            int ch_val = ((int) (ch - 'a'));
            
            if(path[ch_val] == -1) {
                for(int j=0;j<26;j++) {
                    if(in[j] == 1) continue;
                    
                    if(out[j] == 0) {
                        path[ch_val] = j;
                        in[j] = 1;
                        out[ch_val] = 1;
                        floating--;
                        
                        if(in[ch_val] == 0) floating--;
                        break;
                    } else {
                        if(in[ch_val] == 0) {
                            path[ch_val] = j;
                            in[j] = 1;
                            out[ch_val] = 1;
                            floating--;
                            
                            if(in[ch_val] == 0) floating--;
                            break;
                        }
                    }
                }
            }
            
            s += ((char) (path[ch_val] + 'a'));
        }
        
        cout << s << "\n";
        
    }
    return 0;
}
