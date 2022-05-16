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
    int n;
    int k, ans, temp;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    std::sort(x.begin(), x.end());
    ans = 0;
    temp = 0;
    int i = 0;
    int j = 0;
    for(int x_i = 0;x_i < n;x_i++){
    	continue;
    }
    while(i<n){
       temp = x[i]+k;
	   for(j = i;j < n;j++){
	       if(temp<x[j]){
	       		ans++;
	       		temp = x[j-1]+k;
	       		break;
		   }
		   else if(j==n-1){
		   		ans++;
		   		break;
		   }
	    }
	    for(j = j;j < n;j++){
	       if(temp<x[j]){
	       		j--;
	       		break;
		   }
		   else if(j==n-1){
		   		break;
		   }  
	    }
	    i = j;
	    i++;
    }
    cout << ans;
    return 0;
}
