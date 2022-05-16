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
	long long int n, k, i, a, temp, ans;
	
	cin >> n >> k;
	ans = 0;
	temp = 0;
	for(i=1; i<=n; i++){
		cin >> a;
		if(i<k && a!=0){
			ans++;
		}
		else if(i==k && a!=0){
			temp = a;
			ans++;
		}
		else if(i>k && a!=0){
			if(temp==a){
				ans++;
			}
		}
	}
	cout << ans <<endl;
	return 0;
}
