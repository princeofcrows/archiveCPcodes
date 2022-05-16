#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int cnt[105];
int ara[1000006];

int main() {
    int n, a, i, k;
    cin >> n;
    string str[1000006], tem;
    for(i = 0; i<101; i++){
    	cnt[i] = 0;
	}
    for(i = 0; i<n; i++){
    	if(i<n/2){
    		cin >> ara[i] >> tem;
    		str[i] = "-";
		}
		else{
			cin >> ara[i] >> str[i];
		}
    	cnt[a]++;
	}
	for(i = 0; i<=100; i++){
		for(k=0; k<n; k++){
			if(ara[k]==i) cout << str[k] <<" ";
		}
	}
	return 0;
}

