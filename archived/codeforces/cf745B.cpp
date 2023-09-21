#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

char str[501][501];
int n, m;

int main(){
	//freopen("in.txt", "r", stdin);
	int i, j, ans;
	ans = 0;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>str[i][j];
			if(str[i][j]=='X'){
				ans++;
			}
		}
	}
	for()
	return 0;
}
