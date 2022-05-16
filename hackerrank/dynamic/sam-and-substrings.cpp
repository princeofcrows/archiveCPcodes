#include <bits/stdc++.h>
using namespace std;
char str[200005];

int main() {
	//freopen("in.txt", "r", stdin);
	long long int ans, t,n, mx, c;
    cin>>str;
    n = strlen(str);
    ans = 0;
    mx = 1;
	mx%=1000000007;
    for(int i = n-1; i>=0; i--){
    	c = str[i]-'0';
    	ans += ((c*(n-(n-i-1)))%1000000007)*(mx);
    	mx*=10;
    	mx++;
    	mx%=1000000007;
    	ans%=1000000007;
	}
	cout << ans%1000000007;
    return 0;
}

