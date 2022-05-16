#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
int ara[100006];
int main(){
	long long int min, max, thrd, ans, n, i, j, temp;
	cin >> n;
	bool flag =  false;
	bool f = false;
	bool s = false;
	bool t = false;
	int ass[3];
	min = max = thrd = 0;
	for(i=0; i<n; i++){
		cin >> ara[i];
		if(!f&&!s&&!t){
			ass[0] = ara[i];
			f = true;
		}
		else if(f&&!s&&!t){
			if(ass[0] != ara[i]){
				ass[1] = ara[i];
				s = true;
			}
		}
		else if(f&&s&&!t){
			if(ass[0] != ara[i] && ass[1] != ara[i]){
				ass[2] = ara[i];
				t = true;
			}
		}
		else if(f&&s&&t){
			if(ass[0] != ara[i] && ass[1] != ara[i] && ass[2] != ara[i]){
				flag = true;
			}
		}
		
	}
	
	if(flag) cout <<"NO"<< endl;
	else {
		if(f&&!s&&!t){
			cout <<"YES"<< endl;
		}
		else if(f&&s&&!t){
			cout <<"YES"<< endl;
		}
		else if(f&&s&&t){
			int swap;
			for (int c = 0 ; c < ( 3 - 1 ); c++){
			    for (int d = 0 ; d < 3 - c - 1; d++){
			    	if (ass[d] > ass[d+1]){
				        swap = ass[d];
				        ass[d] = ass[d+1];
				        ass[d+1] = swap;
				    }
			    }
			}
			ans = (ass[2]-ass[0])/2;
			if(ass[0]+ans==ass[1] && ass[2]-ans==ass[1]){
				cout <<"YES"<< endl;
			}
			else{
				cout <<"NO"<< endl;
			}
		}
	}
	return 0;
}
