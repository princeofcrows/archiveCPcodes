#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int ara[1005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, diglen, i, j;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    temp = 0;
    ans = 0;
    bool flag = false;
    for(i=0;i<n;i++){
        if(ara[i]==0){
            temp++;
        }
        else{
            if(!flag){
                flag = true;
                ans++;
            }
            else if(flag){
                if(temp>=1){
                    ans+=2;
                }
                else{
                    ans++;
                }
            }
            temp = 0;
            flag = true;
        }
    }
    cout << ans;
    return 0;
}
