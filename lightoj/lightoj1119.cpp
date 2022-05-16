#include <bits/stdc++.h>
#define lli long long int

using namespace std;

lli data[15][15];
lli dp[1<<15], n;

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

lli bitmask(lli mask){
	lli price;
	if(mask==(1<<n)-1) return 0;
	if(dp[mask]!=-1) return dp[mask];
	lli mn = 1<<28;
	for(int i=0;i<n;i++){
		if(check(mask, i)==0){
			price = data[i][i];
			for(int j=0; j<n; j++){
				if(i!=j&&check(mask, j)!=0) price+=data[i][j];
			}
			lli ret = price+bitmask(Set(mask, i));
			mn = min(mn, ret);
		}
	}
	return dp[mask] = mn;
}

int main(){
	int a, b, t, csn = 1;
	scanf("%d", &t);
	while(t--){
		cin >> n;
		for(int i =0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> data[i][j];
			}
		}
		memset(dp, -1, sizeof dp);
		printf("Case %d: %lld\n", csn++, bitmask(0));
	}
	return 0;
}
