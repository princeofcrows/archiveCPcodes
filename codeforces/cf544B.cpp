#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, l;
	bool flag, alp[26];
	cin >> n >> k;
	if(n%2) a = n*n/2 +1;
	else a = n*n/2;
	if(k>a){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
		ans = 0;
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				if((i+j)%2==0&&ans!=k){
				 cout << 'L';
				 ans++;
				}
				else{
					cout << 'S';
				}
			}
			cout << endl;
		}
	}
	return 0;
}
