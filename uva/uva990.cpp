#include <bits/stdc++.h>

using namespace std;

int d[35], v[35], k[35][1005], tw;
bool pth[35][1005];

int knapsack(int time, int n){
	if(n<0||time<=0) return 0;
	if(k[n][time]!=-1) return k[n][time];
	int temp1 = 0;
	int temp2;
	if(3*tw*d[n]<=time)	temp1 = v[n]+knapsack(time-3*tw*d[n], n-1);
	temp2 = knapsack(time, n-1);
	if(temp1>temp2){
		pth[n][time] = true;
		return k[n][time] = temp1;
	}
	else{
		pth[n][time] = false;
		return k[n][time] = temp2;
	}
}

int main(){
	//freopen("in.txt", "r", stdin);
	bool noti = false;
	int t, j, n, i, num, ans, g, G;
	while(cin >>t >> tw){
		if(noti){
			cout << endl;
		}
		noti = true;
		cin >> n;
		for(i=0; i<n; i++){
			cin >> d[i] >> v[i];
		}
		
		ans = 0;
		memset(k, -1, sizeof k);
		memset(pth, false, sizeof pth);
		
		ans = knapsack(t, n-1);
		cout << ans <<endl;
		
		int ans2 = 0;
		bool flag[n];
		memset(flag, false, sizeof flag);
		
		i = n-1;
		j = t;
		while(i>=0&&j>=0){
			if(pth[i][j]==true){
				ans2++;
				flag[i] = true;
				j = j-3*tw*d[i];
				i--;
			}
			else{
				i--;
			}
		}
		cout << ans2 <<endl;
		for(i=0; i<n; i++){
			if(flag[i]) cout << d[i] << " " << v[i] << endl;
		}
		getchar();
	}
	return 0;
}
