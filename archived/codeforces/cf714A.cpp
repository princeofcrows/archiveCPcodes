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
	long long int l1, l2, r1, r2, k, ans;
	char s[1005];
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	if(r1<l2 || r2<l1){
		ans = 0;
	}
	else if(l2>=l1 && l2<=r1){
		if(r2>=l1 && r2<=r1){
			if(k<=r2 && k>=l2){
				ans = r2-l2;
			}
			else{
				ans = r2-l2+1;
			}
		}
		else{
			if(k<=r1 && k>=l2){
				ans = r1-l2;
			}
			else{
				ans = r1-l2+1;
			}
		}
		
	}
	else if(r2>=l1 && r2<=r1){
		if(k>=l1 && k<=r2){
			ans = r2-l1;
		}
		else{
			ans = r2-l1+1;
		}
	}
	else{
		if(k<=r1 && k>=l1){
				ans = r1-l1;
			}
			else{
				ans = r1-l1+1;
			}
	}
	cout << ans<< endl;
	return 0;
}
