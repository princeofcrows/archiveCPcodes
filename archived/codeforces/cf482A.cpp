#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2, k;
    cin >> n >> k;
    long long int ara[n];
    a = n;
    b = 1;
    for(i=0; i<n; i++){
        if(k==0){
            break;
        }
        if(i%2==0){
            ara[i] = b++;
            k--;
        }
        else{
            ara[i] = a--;
            k--;
        }
    }
    if(i%2==0){
        for(i=i; i<n; i++){
            ara[i] = a--;
        }
    }
    else{
        for(i=i; i<n; i++){
            ara[i] = b++;
        }
    }
    for(i=0; i<n; i++){
        cout << ara[i] <<" ";
    }
    return 0;
}
