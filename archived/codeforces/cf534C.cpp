#include <queue>
#include <iostream>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

long long ara[200005], res[200005];

int main(){
	long long int n, a, s = 0;
	cin >> n >> a;
	for(int i =0; i<n; i++){
		cin>>ara[i];
		s+=ara[i];
	}
	if(n==1){
		cout << ara[0]-1;
		return 0;
	}
	memset(res, 0, sizeof res);
	for(int i =0; i<n; i++){
		if(s-ara[i]<a) res[i] = res[i]+ a-s+ara[i]-1;
		if(a-n+1<ara[i]) res[i] += ara[i]-a+n-1;
		//if((s-ara[i]<a)&&(a-n+1>ara[i])&&((s-ara[i]-1)>(ara[i]-n))) res[i] = res[i]-(a-(s-ara[i]) -(ara[i]-n+2)+1);
	}
	for(int i =0; i<n; i++){
		if(res[i]<0) cout << 0 <<" ";
		else cout << res[i] << " ";
	}
	return 0;
}
