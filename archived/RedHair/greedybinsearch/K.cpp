#include <bits/stdc++.h>

using namespace std;

int main(){
    srand(time(NULL));
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int c, t, n, m;
    c = 1;
    cin >> t;
    while(t--){
        int r[105], u[5005], v[5005], ed, f, i;
        cin >> n >> m;
        for(i=0;i<m;i++){
            cin >> u[i] >> v[i];
        }
        int j = 0;
        while(true){
            for(i=1;i<=n;i++){
                r[i] = rand()%2;
            }
            ed = 0;
            for(i=0;i<m;i++){
                if(r[u[i]]!=r[v[i]]) ed++;
            }
            if(ed>=(m+1)/2) break;
            j++;
        }
        //cout << j << endl;
        ed = f = 0;
        for(i=1;i<=n;i++){
            if(r[i]) ed++;
        }
        cout << "Case #" << c++ <<": "<<ed<<endl;
        for(i=1;i<=n;i++){
            if(r[i]){
                if(f) cout << " ";
                cout << i;
                f = true;
            }
        }
        cout << endl;
    }
    return 0;
}
