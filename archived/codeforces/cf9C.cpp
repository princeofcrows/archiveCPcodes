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
vector < pair <long long int, long long int> > x;

bool check(long long int N, long long int pos){
    return (N&(~(1<<pos)));
}


int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, dec, i, a, n, b, ans, temp2, m, j, k;
    cin >> n;
    dec = 0;
    ans = 0;
    for(i=0;dec<n;i++){
        dec = 0;
        temp = i;
        j=1;
        while(temp!=0){
            dec = (dec+(temp%2)*j);
            j*=10;
            temp /= 2;
        }
        if(dec<=n)ans++;
        else break;
    }
    cout << ans-1;
    return 0;
}
