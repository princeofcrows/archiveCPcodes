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

int ara[100005];
vector <pair <int, int> > x;

int main(){
    int n;
    int k, ans;
    cin >> n;
    pair <int, int> temp;
    for(int i=1; i<=n; i++){
    	cin >> ara[i];
    	temp.first = i+1;
    	if((i-ara[i])<0){
    		temp.second = n+i-ara[i];	
		}
		else{
			temp.second = i-ara[i];
		}
		x.push_back(temp);
	}
	ans = temp = 0;
	act = 0;
	for(int i=0; i<n; i++){
		if
	}
    cout << ans;
    return 0;
}
