#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

long long int ans[100005];
int main() {
    //freopen("in.txt", "r", stdin);
    string str;
    long long int t, i, j, n, l, r;
    cin >> str;
    n = str.length();
    ans[0] = 0;
    for(i=0; i<n-1; i++){
        if(str[i]==str[i+1]) ans[i+1] = ans[i]+1;
        else ans[i+1] = ans[i];
    }
    cin >> t;
    while(t--){
    	cin >> l >> r;

    	cout <<ans[r-1]-ans[l-1]<<endl;
	}
    return 0;
}

