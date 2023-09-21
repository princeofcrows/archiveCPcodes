#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	long long int n, t, i, j, k, l, b1, b2, r1, r2, ans;
	cin >> n;
	char s[n+5];
	cin >> s;
	b1 = b2 = r1 = r2 = 0;
	for(i=0;i<n;i++){
		if(i%2){
			if(s[i]=='r') r1++;
			else	b1++;
		}
		else{
			if(s[i]=='r') r2++;
			else	b2++;
		}
	}
	ans = 0;
	if(r2>=b2){
		j = r2;
		k = b1;
		i = min(r1, b2);
	}
	else{
		j = b2;
		k = r1;
		i = min(b1, r2);
	}
	int ans1 = n-j-k-i;
	if(r1>=b1){
		j = r1;
		k = b2;
		i = min(r2, b1);
	}
	else{
		j = b1;
		k = r2;
		i = min(b2, r1);
	}
	int ans2 = n-j-k-i;
	ans = min(ans1, ans2);
	cout << ans << endl;
	return 0;
}
