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
    int n, temp;
    double temp1, mx, l;
    cin >> n >> l;
    for(int i=1;i<=n; i++){
        cin>>temp1;
        ara.push_back(temp1);
    }
    sort(ara.begin(), ara.end());
    mx = 0;
    for(int i=0;i<n-1; i++){
        if(ara[i+1]-ara[i]>mx){
            mx = ara[i+1]-ara[i];
        }
    }
    mx = mx/2;
    if(ara[0]>(mx)){
        mx = ara[0];
    }
    if(l-ara[n-1]>(mx)){
        mx = l-ara[n-1];
    }
    printf("%.10lf", mx);
    return 0;
}
