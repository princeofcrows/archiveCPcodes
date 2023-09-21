#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	lli t, n, ara[26], mx;
	char c;
	for(int i=0; i<26; i++){
		cin >> ara[i];
	}
	mx = t =0;
	while(cin>>c){
		if(mx<ara[c-'a']){
			mx=ara[c-'a'];
		}
		t++;
	}
	cout << t*mx;
    return 0;
}

