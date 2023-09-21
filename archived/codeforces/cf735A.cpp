#include <queue>
#include <iostream>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
	int n, k, g, t, temp;
	char cell[105];
	cin >> n >> k;
	cin >> cell;
	for(int i = 0; i<n; i++){
		if(cell[i]=='G') g = i;
		else if(cell[i]=='T') t = i;
	}
	if(t<g){
		temp = t;
		t = g;
		g = temp;
	}
	bool flag = false;
	for(int i = g; i<=t; i+=k){
		if(i==t){
			flag = true;
			break;
		}
		else if(cell[i]=='#'){
			break;
		}
	}
	if(flag)cout << "YES" << endl;
	else cout <<"NO" << endl;
	return 0;
}
