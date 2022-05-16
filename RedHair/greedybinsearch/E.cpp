#include <bits/stdc++.h>
#define MX 100005
using namespace std;

int n, res[MX], a[MX], b[MX];
vector <pair <int, int> > ab;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j, l1, l2, flag, c1, c2;
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> res[i];
        if(res[i]==1){
            a[i] = a[i-1]+1;
            b[i] = b[i-1];
        }
        if(res[i]==2){
            b[i] = b[i-1]+1;
            a[i] = a[i-1];
        }
    }
    for(i=1;i<=n;i++){
        c1 = c2 = 0;
        flag = false;
        j = 0;
        while(1){
            l1 = lower_bound(a+1, a+1+n, a[j]+i) - (a);
            l2 = lower_bound(b+1, b+1+n, b[j]+i) - (b);
            j = min(l1, l2);
            if(l1==n+1&&l2==n+1) break;
            if(l1<l2){
                c1++;
            }
            else if(l2<l1){
                c2++;
            }
            if(j==n){
                flag = true;
                break;
            }
            //cout << j <<" ";
        }
        if(c1==c2) flag = false;
        if(c1>c2&&res[n]==2) flag = false;
        if(c1<c2&&res[n]==1) flag = false;
        if(flag){
            ab.push_back({max(c1, c2), i});
        }
    }
    sort(ab.begin(), ab.end());
    cout << ab.size() << endl;
    for(i=0;i<ab.size();i++){
        cout << ab[i].first <<" "<<ab[i].second<<endl;
    }
    return 0;
}










