#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
char ara[1005][6];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, diglen, i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    bool flag = false;
    for(i=0;i<n;i++){
        if(ara[i][0]=='O'&&ara[i][1]=='O'){
            ara[i][1] = '+';
            ara[i][0] = '+';
            flag = true;
            break;
        }
        else if(ara[i][3]=='O'&&ara[i][4]=='O'){
            ara[i][3] = '+';
            ara[i][4] = '+';
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" <<endl;
        for(i=0;i<n;i++){
            cout << ara[i] <<endl;
        }
        return 0;
    }
    cout << "NO";
    return 0;
}















