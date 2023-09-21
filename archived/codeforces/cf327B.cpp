#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
bool ara[10000007];
vector <int> x;

void seive(){
    memset(ara, true, sizeof ara);
    for(int i=2; i<=10000000; i++){
        if(ara[i]){
            x.push_back(i);
            for(int j=2*i; j<=10000000; j+=i){
                ara[j] = false;
            }
        }
    }
}


int main() {
	//freopen("in.txt", "r", stdin);
    int n, ans, mod, t;
    seive();
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << x[i] <<" ";
    }
    return 0;
}

