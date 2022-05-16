#include <bits/stdc++.h>
using namespace std;

long long int num[505];

long long int c9(long long int j){
	long long int ans = 0;
	long long int temp = j;
	long long int stf = 1;
	while(temp!=0){
		if(temp%2==1){
			ans+=9*stf;
		}
		temp/=2;
		stf*=10;
	}
	return ans;
}

void Set(){
	memset(num, -1, sizeof num);
	long long int i, j, cnt, temp;
	cnt = 0;
	j = 1;
	while(cnt!=500){
		temp = c9(j);
		for(i=1; i<501; i++){
			if(temp%i==0&&num[i]==-1){
				num[i] = temp;
				cnt++;
			}
		}
		j++;
	}
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	long long int ans1, ans2, t,n, mx, c, tmp;
	Set();
	cin >> tmp;
	while(tmp--){
		cin >> n;
	    cout << num[n] << endl;
	}
    return 0;
}
