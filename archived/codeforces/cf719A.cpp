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
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, b;
	cin >> n;
	int flag;
	flag = -1;
	tmp = 0;
	for(i=0; i<n; i++){
		cin >> a;
		if(a==15){
			flag = 2;
		}
		else if(a==0){
			flag = 1;
		}
		else if(i==0){
			flag = -1;
		}
		else{
			if(tmp<a){
				flag = 1;
			}
			else if(tmp>a){
				flag = 2;
			}
		}
		tmp = a;
	}
	
	if(flag==-1){
		cout << flag << endl;
	}
	else if(flag==1){
		cout << "UP" << endl;
	}
	else if(flag==2){
		cout << "DOWN" << endl;
	}
	return 0;
}
