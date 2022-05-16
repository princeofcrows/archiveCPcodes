#include <cstdio>
#include <cctype>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>


using namespace std;

int main(){
	int t, csn = 1, ans, n, i, k, ps;
	cin >> t;
	while(t--){
		ans = 0;
		cin >> n >> k;
		char alph[n+1];
		for (i=0; i<n; i++) alph[i] = 'A' + i;
		alph[i] = '\0';
		cout << "Case "<<csn++<<":"<<endl;
		do{
			for (i=0; i<n; i++){
				cout << alph[i];
			}
			cout << endl;
			k--;
		}while(next_permutation(alph, alph+n)&&k);
	
	}
	return 0;
}
