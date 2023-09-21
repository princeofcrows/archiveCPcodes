#include <bits/stdc++.h>
using namespace std;int main(){int A[100],B[100],n,m,a,b,am,amn,bm,bmn;cin>>n>>m;am=bm=1000;memset(A,0,sizeof A);memset(B, 0, sizeof B);for(int i=1;i<=n;i++){cin >> a;A[a] = 1;am = min(a, am);}for(int i=1;i<=m;i++){cin >> a;B[a] =  1;bm = min(a, bm);}for(int i=1;i<=9;i++) {if(A[i]&&B[i]){cout<<i<<endl;return 0;}}cout << min(am, bm) << max(am,bm) << endl;return 0;}
