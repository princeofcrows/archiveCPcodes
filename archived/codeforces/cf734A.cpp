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
	long long int n, t, i, j, k, l, a, d;
	cin >> n;
	char str[n+5];
	cin >> str;
	a = d = 0;
	for(i=0; i<n; i++){
		if(str[i]=='A') a++;
		else d++;
	}
	if(a>d)cout<<"Anton"<<endl;
	else if(a<d)cout <<"Danik"<<endl;
	else if(a==d)cout<<"Friendship"<<endl;
	return 0;
}
