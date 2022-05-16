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
	long long int n, t, i, j, k, l;
	cin >> n >> t;
	char s[n+5];
	cin >> s;
	bool flag, rem, flag2;
	flag = flag2 = false;
	rem = false;
	while(t--){
		flag2 = false;
		flag = false;
		for(i=0;i<n;i++){
			if(flag2) break;
			if(s[i]!='.'&&flag==false){
				continue;
			}
			else if(s[i]=='.'){
				flag = true;
			}
			if(flag){
				flag2 = false;
				for(j=i+1;j<n;j++){
					if(flag2) break;
					if(s[j]-'0'>=5){
						n = j;
						for(l=j+1;l<n;l++){
							s[l] = '\0';
						}
						flag2 = true;
						s[j] = '\0';
						if(s[j-1]=='.'){
							j--;
						}
						if(s[j-1]=='9'){
							rem = true;
							s[j-1] = '0';
							for(k=j-2;rem;k--){
								if(k==-1){
									break;
								}
								if(s[k]=='.'){
									continue;
								}
								else if(s[k]=='9'){
									s[k] = '0';
								}
								else{
									s[k]+=1;
									rem = false;
								}
							}
						}
						else{
							s[j-1] += 1;
						}
					}
				}
			}
		}
	}
	flag = false;
	if(rem) cout << '1';
	for(i=0;i<n;i++){
		if(s[i]!='.'&&flag==false){
			cout << s[i];
		}
		else if(s[i]=='.'){
			flag = true;
			if(s[i+1]=='0') break;
			cout << s[i];
		}
		else if(flag){
			if(s[i]=='\0') break;
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}
