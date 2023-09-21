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
    int i, j, ans, n, temp, sum;
    cin>>n;
    ans= 0;
    for(i=0; i<n; i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    sum = 0;
    ans = 0;
    i=0;
    for(i=0; i<n; i++){
        if(x[i]>=sum){
            ans++;
            sum+=x[i];
        }
    }
    cout << ans;
    return 0;
}
