#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < long long > xy;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l;
	cin >> n;
	char ch;
    bool flag[26];
    ans = 0;
    memset(flag, false, sizeof flag);
	for(int i=0; i<n; i++){
		cin >> ch;
		ch = tolower(ch);
        if(!flag[ch-'a']){
            ans++;
            flag[ch-'a'] = true;
        }
	}
	if(ans==26)cout << "YES";
	else cout << "NO";
	return 0;
}
