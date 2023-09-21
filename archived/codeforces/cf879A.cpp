#include <bits/stdc++.h>

using namespace std;

int s[1005], d[1005];
vector <int> x;

int main(){
    freopen("in.txt", "r", stdin);
    int n, i, j;
    for(i=0;i<n;i++){
        cin >> s[i] >> d[i];
    }
    x.push_back(s[0]);
    j = s[0];
    for(i=1;i<n;i++){
        j = max(s[i], x[i-1]);
        while(1){
            if((j>x[i-1])&&((j-s[i])%d[i]==0)) break;
            j++;
        }
        x.push_back(j);
    }
    cout << j;
    return 0;
}
