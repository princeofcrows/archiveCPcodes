#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <double> ara;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, temp1, mx, l, ans;
    cin >> n >> l;
    for(int i=0;i<l; i++){
        cin>>temp1;
        ara.push_back(temp1);
    }
    temp = 1;
    ans = 0;
    for(int i=0;i<l; i++){
        if(ara[i]>=temp){
            ans+=ara[i]-temp;
        }
        else{
            ans+=(n-temp+ara[i]);
        }
        temp = ara[i];
    }
    cout << ans;
    return 0;
}
