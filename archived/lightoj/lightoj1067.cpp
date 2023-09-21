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
int fact[1000005][1000005];
#define nmax 1000000
#define mod 1000003

void factgen(){
	for(int i = 1; i <= nmax; i++ ){
		for(int j = 0; j <= nmax; j++ ){
			if(j>i) fact[i][j]=0;
			else if(j==i||j==0) fact[i][j] = 1;
			else fact[i][j] = fact[i-1][j-1] + fact[i-1][j];
		}
	}
}

int main(){
	int t, j, n, k;
	cin >> t;
	factgen();
	for (j = 1; j<=t; j++){
		cin >> n >> k ;
		cout << "Case "<< j << ": "<<fact[n][k]%1000003<<endl;
	}
	return 0;
}
