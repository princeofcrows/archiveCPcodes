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

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c;
    cin >> n;
    cin >> h >> m;
    c = 1;
    ans = 1;
    for(i=1;i<n;i++){
        cin >> h2 >> m2;
        if(h2==h){
            if(m2==m) c++;
            else{
                if(ans<c){
                    ans = c;
                }
                c = 1;
            }
        }
        else{
            if(ans<c){
                ans = c;
            }
            c = 1;
        }
        h = h2;
        m = m2;
    }
    cout << max(ans, c);
    return 0;
}















