#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main() {
	map <string, lli> phbk;
	string str;
	lli n, p;
	cin >> n;
	char sr[1000];
	for(int i=0; i<n; i++){
		cin >> str >> p;
		phbk[str] = p;
	}
	while(scanf("%s",sr)!=EOF){
		if(phbk.count(sr)!=0){
			cout <<sr<<"="<< phbk[sr];
		}
		else{
			cout << "Not found";
		}
		cout << endl;
	}
    return 0;
}
