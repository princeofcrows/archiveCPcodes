#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cstdio>
using namespace std;
string q, s[30];

int main(){
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, l;
	bool flag, alp[26];
	memset(alp, false, sizeof alp);
	char ts;
	cin >> k;
	cin >> q;
	if(k==1){
		cout << "YES" << endl;
		cout << q ;
		cout << endl;
		return 0;
	}
	n = q.length();
	if(k>n){
		cout << "NO" << endl;
		return 0;
	}
	flag = false;
	j = 0;
	a = 0;
	alp[q[0]-'a']=true;
	ans = 1;
	a = 0;
	for(i=0; i<n; i++){
		if(alp[q[i]-'a']==false){
			alp[q[i]-'a']=true;
			ans++;
			s[j].append(q, a, i-a);
			a = i;
			j++;
		}
		if(ans==k){
			flag = true;
			s[j].append(q, a, n-a);
			break;
		}
	}
	if(!flag)	cout << "NO" << endl;
	else{
		cout << "YES" << endl;
		for(i=0; i<k; i++){
			cout << s[i] ;
			cout << endl;
		}
	}
	return 0;
}
