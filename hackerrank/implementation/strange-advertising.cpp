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
    int n, ans, temp;
    cin >> n;
    ans = 0;
    temp = 5;
    for(int i=1; i<=n; i++){
    	temp /= 2;
    	ans += temp;
    	temp *= 3;
	}
	cout << ans;
	return 0;
}
