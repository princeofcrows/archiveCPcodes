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
	long long int k, l, m, n, d, ans = 0, i, j;
	bool flag;
	char str[5], temp;
	cin >> k >> l >> m >> n >> d;
	int ara[]= {k, l, m, n};
	int drgn[d+5];
	memset(drgn, 0, sizeof(drgn));
	ans = 0;
	for(i=0; i<=3; i++){
		for(j=ara[i]; j<=d; j+=ara[i]){
			if(drgn[j]==0){
				drgn[j] = 1;
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
