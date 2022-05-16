#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int n1, n2, t1[10005], t2[10005], tile[10005][10005];

lli lcs(int i, int j){
	if(i==n1||j==n2) return 0;
	if(tile[i][j]!=-1) return tile[i][j];
	lli ret = 0;
	if(t1[i]==t2[j]) ret+=lcs(i+1, j+1)+1;
	else ret+=max(lcs(i, j+1),lcs(i+1, j));
	return tile[i][j] = ret;
}

int main(){
	freopen("in.txt", "r", stdin);
	bool noti = false;
	int t, j, n, i, num, ans, g, G;
	j=1;
	while(1){
		if(noti)cout<<endl;
		noti=true;
		cin >>n;
		if(n==0) break;
		for(i=0; i<n1; i++){
			cin >> t1[i];
		}
		for(i=0; i<n2; i++){
			cin >> t2[i];
		}
		memset(tile, -1, sizeof tile);
		cout <<"Twin Towers #"<<j++<<"\nNumber of Tiles : "<<lcs(0, 0)<<endl;
	}
	return 0;
}
