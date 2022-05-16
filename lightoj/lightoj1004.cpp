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
	int t, j, i, k, n, ba, temp, maxj;
	unsigned long long int ara[300][300];
	unsigned long long int res[300][300];
	
	cin >> t;
	for (k = 1; k<=t; k++){
		cin >> n;
		memset(res, 0, sizeof res);
		memset(ara, 0, sizeof ara);
		for(i = 0; i <= 2*n-2; i++){
			if(i<n){
				maxj = i;
			}
			else{
				maxj = 2*n-i-2;
			}
			for(j = 0; j <= maxj; j++){
				cin >> ara[i][j];
			}
		}
		for(i = 0; i <= 2*n-2; i++){
			if(i<n){
				maxj = i;
				for(j = 0; j <= maxj; j++){
					if(i == 0){
						res[i][j] = ara[i][j];
						continue;
					}
					else if(j==0){
						res[i][j] = ara[i][j]+res[i-1][j];
					}
					else{
						res[i][j] = max(ara[i][j]+res[i-1][j], ara[i][j]+res[i-1][j-1]);
					}
				}
			}
			else{
				maxj = 2*n-i-2;
				for(j = 0; j <= maxj; j++){
					res[i][j] = max(ara[i][j]+res[i-1][j], ara[i][j]+res[i-1][j+1]);
				}
			}
		}
		cout << "Case " << k << ": " << res[2*n-2][0] << endl;
	}
	return 0;
}
