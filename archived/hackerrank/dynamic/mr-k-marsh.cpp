#include <bits/stdc++.h>
using namespace std;

char dat[505][505];

int main() {
	freopen("in.txt", "r", stdin);
	long long int n, m, x1, x2, y1, y2;
	cin >> n >> m;
	for(int i = n-1; i>=0; i--){
		for(int j = m-1; j>=0; j--){
			cin >> char[i][j];
		}
	}
	bool flag = true;
	for(int i = n-1; i>=0; i--){
		for(int j = m-1; j>=0; j--){
			cin >> char[i][j];
		}
	}
    return 0;
}

