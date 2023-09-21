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
string str;
string str2, str3;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l;
    int flag[26];
    ans = 0;
    memset(flag, 0, sizeof flag);
    cin >> str >> str2 >> str3;
    n = str3.size();
	for(int i=0; i<n; i++){
        flag[str3[i]-'A']++;
	}
	n = str.size();
	for(int i=0; i<n; i++){
        flag[str[i]-'A']--;
	}
	n = str2.size();
	for(int i=0; i<n; i++){
        flag[str2[i]-'A']--;
	}
    for(int i=0; i<26; i++){
        if(flag[i]!=0){
            cout << "NO";
            return 0;
        }
	}
	cout << "YES";
	return 0;
}











