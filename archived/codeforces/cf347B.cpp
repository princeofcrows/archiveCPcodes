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
string str;
vector <long long int> y;
int ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s, n, i, j, k, mx;
    cin >> n;
    a = 0;
    for(i=0;i<=n;i++){
        cin >> ara[i];
        if(i==ara[i]) a++;
    }
    if(a==n){
        cout << n;
        return 0;
    }
    for(i=0;i<=n;i++){
        if(i!=ara[i]){
            if(ara[ara[i]]==i){
                cout << a+2;
                return 0;
            }
        }
    }
    cout << a+1;
    return 0;
}






