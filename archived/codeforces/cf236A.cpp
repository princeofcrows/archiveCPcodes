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
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j;
	bool flag;
	int idf[26];
	char str[105], temp;
	cin >> str;
	n = strlen(str);
	memset(idf, 0, sizeof(idf));
	ans = 0;
	for(i=0; i<n; i++){
		if(idf[(int)str[i]-97] == 0){
			idf[(int)str[i]-97] = 1;
			ans++;
		}
	}
	if(ans%2==0)	cout << "CHAT WITH HER!" << endl;
	else if(ans%2!=0)	cout << "IGNORE HIM!" << endl;
	return 0;
}
