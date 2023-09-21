#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <long long int> x;
int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2;
    cin >> n;
    cin >> temp;
    x.push_back(temp);
    for(i=1;i<n;i++){
        cin >> temp;
        x.push_back(temp+x[i-1]);
    }
    if(x[n-1]%3!=0){
        cout << 0;
        return 0;
    }
    temp = x[n-1]/3;
    temp2 = 2*temp;
    a = b = 0;
    for(i=0;i<=n-1;i++){
        if(x[i]==temp2&&i!=n-1){
            a+=b;
        }
        if(x[i]==temp){
            b++;
        }
    }
    cout << a;
    return 0;
}
