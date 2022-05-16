#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
char str[500005], str2[500005];

int main(){
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, b;
	bool flag;
	int alp[26];
	
	cin >> str;
	if(strlen(str)<26){
		cout<<-1<< endl;
		return 0;
	}
	for(i = 0; i<=strlen(str)-26; i++){
		memset(alp, 0, sizeof alp);
		flag = true;
		for(j = i; j<i+26; j++){
			if(alp[(str[j]-'A')]==0&&str[j]!='?'){
				alp[(str[j]-'A')] = 1;
			}
			else if(alp[(str[j]-'A')]==1){
				flag = false;
				break;
			}
		}
		if(flag){
			for(j = i; j<i+26; j++){
				if(str[j]=='?'){
					for(k = 0; k<26; k++){
						if(alp[k] == 0){
							alp[k] = 1;
							str[j] = 'A'+k;
							break;
						}
					}
				}
			}
			for(j=0; j<strlen(str); j++){
				if(str[j]=='?'){
					str[j] = 'A';
				}
			}
			break;
		}
	}
	if(flag) cout << str << endl;
	else cout << -1 << endl;
	return 0;
}
