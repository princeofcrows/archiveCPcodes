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
char ara[11][11];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s, n, i, j, k, mx, m;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> ara[i];
    }
    a = 0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(ara[i][j]=='W'){
                if((i<n-1&&ara[i+1][j]=='P')||(i>0&&ara[i-1][j]=='P')||(j<m-1&&ara[i][j+1]=='P')||(j>0&&ara[i][j-1]=='P')){
                    a++;
                }
            }
        }
    }
    cout << a;
    return 0;
}






