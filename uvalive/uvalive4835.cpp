#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>

using namespace std;
#define nmax 1000000
#define mod 1000003
char s[1000008];

int main(){
	unsigned long long int t, j, n, k, i, num, ans;
	while(scanf("%s", s)!=EOF){
		n = strlen(s);
		ans = 0;
		for (i = 0; i<n; i++){
			num = 0;
			for (j = i; j<n; j++){
				if(s[j]-'0'<=9&&s[j]-'0'>=0){
					num += s[j]-'0';
					if(num%3==0) ans++;
				}
				else{
					break;
				}
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}
