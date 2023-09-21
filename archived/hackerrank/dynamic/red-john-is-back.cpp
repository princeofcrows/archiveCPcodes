#include <bits/stdc++.h>
using namespace std;

bool prime[217286];
int num[45];

void sieve(){
	int i, j;
	for(i=2; i<217286; i++){
		if(prime[i]){
			for(j = i+i; j<217286; j+=i){
				prime[j] = false;
			}
		}
	}	
}

int bricks(int n){
	if(num[n]!=-1) return num[n];
	return num[n] = bricks(n-1) + bricks(n-4);
}

int main() {
	//freopen("in.txt", "r", stdin);
	long long int t, n, ans, res, temp;
	memset(prime, true, sizeof prime);
	sieve();
	prime[0]=prime[1]=false;
	memset(num, -1, sizeof num);
	num[0] = num[1] = num[2] = num[3] = 1;
	temp = bricks(40);
	//cout << num[40]<<endl;
	cin >> t;
	while(t--){
		cin >> n;
		res = 0;
		for(int i=0;i<=num[n]; i++){
			if(prime[i]) res++;
		}
		cout << res << endl;
	}
    return 0;
}

