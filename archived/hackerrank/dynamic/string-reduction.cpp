#include <bits/stdc++.h>
using namespace std;;


int main() {
	//freopen("in.txt", "r", stdin);
    int t, ara[3];
	cin >> t;
	while(t--){
		char sr[105];
		cin >> sr;
		ara[0]=ara[1]=ara[2]=0;
		for(int i=0;i<strlen(sr);i++){
			ara[sr[i]-'a']++;
		}
		if(ara[0]==strlen(sr)||ara[1]==strlen(sr)||ara[2]==strlen(sr)){
			cout <<strlen(sr)<<endl;
		}
		else if((ara[0]%2)&&(ara[1]%2)&&(ara[2]%2)){
			cout << 2<<endl;
		}
		else if(!(ara[0]%2)&&!(ara[1]%2)&&!(ara[2]%2)){
			cout << 2<<endl;
		}
		else{
			cout << 1 << endl;
		}
	}  
    return 0;
}

