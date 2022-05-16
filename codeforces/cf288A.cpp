#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;
int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, k;
    cin >> n >> k;
    if(k<2&&n>2){
        cout << -1;
        return 0;
    }
    if(n<k){
        cout << -1;
        return 0;
    }
    if(n==1&&k==1){
        cout << 'a';
        return 0;
    }
    k=k-2;
    for(int i=0;i<n-k;i++){
        if(i%2==0) cout << 'a';
        else cout << 'b';
    }
    temp = 1;
    for(int i=n-k;i<n;i++){
        cout << char('b'+temp);
        temp++;
    }
    return 0;
}






