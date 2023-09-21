#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
	long long int n, t, i, j, k, l, ans;
	char s[1005];
	cin.getline(s, sizeof s);
	bool let[26];
	memset(let, false, sizeof let);
	n = strlen(s);
	ans = 0;
	for(i=0; i<n; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			if(let[s[i]-'a']==false){
				ans++;
				let[s[i]-'a'] = true;
			}
		}
	}
	cout << ans<< endl;
	return 0;
}
