#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
int ara[30005];


int main(){
	long long int n, k, i, a, ans, m, tmp, j, b;
	bool flag;
	
	cin >> n >> m;
	for(i = 1; i<=n; i++){
		for(j = 1; j<=m; j++){
			if(i%2){
				cout<<"#";
			}
			else{
				if((j==1&&i%4==0)||(j==m&&i%4==2)){
					cout<<"#";
				}
				else{
					cout<<".";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
