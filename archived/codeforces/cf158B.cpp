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
	long long int n, k, i, a, temp, ans, m, b, c, n1, n3, n2;
	cin >> n;
	ans = 0;
	n1 = 0;
	n3 = 0;
	n2 = 0;
	for(i=0; i<n; i++){
		cin >> a;
		if(a == 4){
			ans++;
		}
		else if(a == 2){
			n2++;
		}
		else if(a == 3){
			n3++;
		}
		else if(a == 1){
			n1++;
		}
	}
	ans += (n2/2);
	n2 = n2%2; 
	if(n3>=n1){
		ans += n3;
		n1 = 0;
		n3 = 0;
	}
	else if(n1>n3){
		ans += n3;
		n1 = n1-n3;
		n3 = 0;
	}
	
	if(n2==1){
		ans++;
		n2 = 0;
		n1 -= 2;
		if(n1<0) n1 = 0;
	}
	if(n1!=0){
		ans += n1/4;
		if(n1%4!=0) ans+=1;
	}
	cout << ans << endl;
	return 0;
}
