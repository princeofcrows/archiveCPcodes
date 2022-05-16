#include <bits/stdc++.h>
#define lli long long int

using namespace std;

//int t1[10005], t2[10005];

class elephant{
	public:
		int wight, iq, index;
		elephant(int w, int i, int indx){
			wight = w;
			iq = i;
			index = indx;
		}
};

bool compare(elephant i, elephant j){
	return(i.iq>j.iq);
}

vector <elephant> x;
vector <int> id;
vector <int> v;

int main(){
	//freopen("in.txt", "r", stdin);
	bool noti = true;
	int t, j, i, num, ans, n, t1, t2;
	n = 0;
	while(scanf("%d%d", &t1, &t2)!=EOF){
		x.push_back(elephant(t1, t2, n+1));
		n++;
	}
	int dp[n+5], next[n+5];
	sort(x.begin(), x.end(), compare);
	ans = 0;
	for(i=n-1; i>=0; i--){
		dp[i] = 1;
		next[i] = -1; 
		for(j = i+1; j<n; j++){
			if(x[i].wight<x[j].wight&&x[i].iq>x[j].iq&&1+dp[j]>dp[i]){
				dp[i] = dp[j]+1;
				next[i] = j;
			}
		}
		if(dp[i]>ans){
			ans = dp[i];
			t = i;
		}
	} 
	
	cout << ans<<endl;
	for(i=t; i!=-1; i=next[i]){
		cout<<x[i].index<<endl;
	}
	return 0;
}
