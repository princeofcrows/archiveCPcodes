#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	unsigned long long int n, ans, temp, diglen, i;
    int t;
    cin >> t;
    for(int j=1; j<=t; j++){
    	ans = 0;
	    cin >> n;
	    temp = n;
	    while(temp!=1){
	    	if(temp%2){
	    		ans++;
			}
	    	temp/=2;
		}
		temp = n;
		while(true){
			if(temp%2){
				break;
			}
			ans++;
			temp/=2;
		}
		if(ans%2) cout<<"Louise"<<endl;
		else cout<<"Richard"<<endl;
	}
    return 0;
}
