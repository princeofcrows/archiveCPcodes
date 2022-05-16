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
	cin >> n;
	int ara[n+5];
	char str[n+5];
	cin >> str;
	ans = 0;
	j = 0;
	memset(ara, 0, sizeof ara);
	bool flag = false;
	for(i=0; i<n; i++){
		if(str[i] == 'B'){
			ara[j]++;
			if(flag==false){
				ans++;
				flag = true;
			}
		}
		else{
			if(flag==true){
				flag = false;
				j++;
			}
		}
	}
	cout << ans << endl;
	for(i=0; i<ans; i++){
		cout << ara[i];
		if(i==ans-1) cout << endl;
		else cout<<" ";
	}
	return 0;
}
