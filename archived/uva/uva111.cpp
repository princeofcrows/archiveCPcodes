#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int n, t1[25], t2[25], tile[25][25];

lli lcs(int i, int j){
	if(i==n||j==n) return 0;
	if(tile[i][j]!=-1) return tile[i][j];
	lli ret = 0;
	if(t1[i]==t2[j]) ret+=lcs(i+1, j+1)+1;
	else ret+=max(lcs(i, j+1),lcs(i+1, j));
	return tile[i][j] = ret;
}

int main(){
	//freopen("in.txt", "r", stdin);
	bool noti = true;
	int t, j, i, num, ans;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> num;
		t1[num-1]  = i+1;
	}
	while(noti){
		ans = 0;
		for(i=0; i<n; i++){
			if(scanf("%d", &num)!=EOF){
				t2[num-1] = i+1;
			}
			else noti = false;
		}
		memset(tile, -1, sizeof tile);
		if(noti)cout <<lcs(0, 0)<<endl;
	}
	return 0;
}
