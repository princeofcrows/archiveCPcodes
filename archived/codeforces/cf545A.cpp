#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
#define lli long long int


int main() {
    //freopen("in.txt", "r", stdin);
    int n, ans, temp, t, diglen, i, j;
    cin >> n;
    bool flag[n+5];
    memset(flag, false, sizeof flag);
    for(i=0;i<n;i++){
        for(j =0; j<n; j++){
            cin>>temp;
            if(temp==0){
                continue;
            }
            else if(temp==1){
                flag[i] = true;
            }
            else if(temp==2){
                flag[j] = true;
            }
            else if(temp==3){
                flag[i] = true;
                flag[j] = true;
            }
        }
    }
    ans=0;
    for(i=0;i<n;i++){
        if(!flag[i]) ans++;
    }
    cout << ans <<endl;
    for(i=0;i<n;i++){
        if(!flag[i]) cout << i+1 <<" ";
    }
    return 0;
}
