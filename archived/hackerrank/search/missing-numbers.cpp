#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int l1[1000011], l2[1000011];


int main() {
    int n, m, num;
    int res[105];
    cin >> n;
    memset(l2, 0, sizeof l2);
	memset(l1, 0, sizeof l1);
    for(int i=0; i<n; i++){
    	cin >> num;
    	l1[num]++;
	}
	cin >> m;
	for(int i=0; i<m; i++){
    	cin >> num;
    	l2[num]++;
	}
	for(int i=0; i<=1000010; i++){
    	if(l1[i]!=l2[i]){
    		cout << i <<" ";
		}
	}
    return 0;
}

