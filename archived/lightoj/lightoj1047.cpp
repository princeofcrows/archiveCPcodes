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
	int t, j, n, k, nmax, i;
	cin >> t;
	for (j = 1; j<=t; j++){
		getchar();
		int ara[20][3];
		memset(ara, 0, sizeof ara);
		
		cin >> n ;
		for (k = 0; k<n; k++){
			for (i = 0; i<=2; i++){
				cin >> ara[k][i];
			}
		}
		for (k = 1; k<n; k++){
			for (i = 0; i<=2; i++){
				switch(i){
					case 0:{
						ara[k][i] = min((ara[k][i]+ara[k-1][1]), (ara[k][i]+ara[k-1][2]));
						break;
					}
					case 1:{
						ara[k][i] = min((ara[k][i]+ara[k-1][0]), (ara[k][i]+ara[k-1][2]));
						break;
					}
					case 2:{
						ara[k][i] = min((ara[k][i]+ara[k-1][1]), (ara[k][i]+ara[k-1][0]));
						break;
					}
				}
			}
		}
		cout << "Case "<< j << ": "<<min(ara[n-1][0],min(ara[n-1][1], ara[n-1][2]))<<endl;
	}
	return 0;
}
