#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	freopen("in.txt", "r", stdin);
    int q, n, temp;
    cin >> q;
    while(q--){
    	vector <int> x;
    	cin >> n;
    	for(int i=0; i<(4*n*n); i++){
    		cin >> temp;
    		x.push_back(temp);
		}
		sort(x.begin(), x.end());
		temp = 0;
		for(int i=(4*n*n)-1; i>=(4*n*n)-2*n; i--){
    		temp+=x[i];
		}
		cout << temp;
	}
    return 0;
}

