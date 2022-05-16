#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int t, ans, i, j, n, temp, cnt, cnt2, k, cnt3, cas, cw;
    cin >> t;
    //seive();
    cas =1;
    while(t--){
        vector <int> x;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> temp;
            x.push_back(temp);
        }
        sort(x.begin(), x.end());
        cnt =0;
        ans = 0;
        bool flag[n];
        cnt2= n-1;
        cnt3 =0 ;
        memset(flag, false, sizeof flag);
        while(cnt!=n){
            if(flag[cnt2]==true) break;
            flag[cnt2] = true;
            ans++;
            k = 50/x[cnt2];
            if(50%x[cnt2]==0) k--;
            cw = x[cnt2];
            cnt2--;
            cnt++;
            for(i=cnt3;i<cnt3+k;i++){
                if(flag[i]==true){
                    if(cw<50) ans--;
                    cnt = n;
                    break;
                }
                flag[i] = true;
                cw += x[i];
                cnt++;
            }
            cnt3+=k;
        }
        cout <<"Case #"<<cas++<<": "<<ans<<endl;
	}
    return 0;
}

