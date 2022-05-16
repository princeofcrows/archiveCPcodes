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

using namespace std;


int main(){
	int n, q, la, a, b, c, siz;
	la = 0;
	cin >> n ;
    string lst[n], str;
    for(int i=0; i<n; i++){
    	cin >> lst[i];
	}
	cin >> q;
	for(int i=0; i<q; i++){
    	cin >> str;
    	a = 0;
    	for(int i=0; i<n; i++){
	    	if (str.compare(lst[i]) == 0) a++;
		}
		cout << a << endl;
	}
    return 0;
}

