#include <bits/stdc++.h>
using namespace std;

#define MX 300005
#define inf 99999999

int n, m;
int l[MX], r[MX], xi[MX], ara[MX];
int tree[5*MX];
set <int> st;
set <int>::iterator it;

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j;
    cin >> n >> m;
    for(i=1;i<=n+1;i++){
        ara[i] = 0;
        st.insert(i);
    }
    for(i=1;i<=m;i++){
        cin >> l[i] >> r[i] >> xi[i];
        for(j=l[i];j<=r[i];j++){
            if(j==xi[i]) continue;
            if(!st.count(j)){
                it = st.lower_bound(j);
                j = *it;
                j--;
                continue;
            }
            ara[j] = xi[i];
            st.erase(st.find(j));
        }
    }
    for(i=1;i<=n;i++){
        cout << ara[i] <<" ";
    }
    return 0;

}












