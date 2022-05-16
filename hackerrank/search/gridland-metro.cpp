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

int main() {
    long long int n, m, k, r, c1, c2, ans, l;
    cin >> n >> m >> k;
    vector<vector <pair <long long int, long long int> > > arr(1005);
    pair <long long int, long long int> temp;
    vector <long long int> ara;
    for (int i = 0; i < k; i++) {
        cin >> r >> c1 >> c2;
        for(l=0;l<ara.size();l++){
        	if(ara[l]==r){
        		r = l;
        		break;
			}
		}
		if(l==ara.size()){
			ara.push_back(r);
			r=l;
		}
        bool flag = false;
        for (int j = 0; j < arr[r].size(); j++) {
	        if((arr[r][j].first<=c1&&arr[r][j].second>=c1)||(arr[r][j].first<=c2&&arr[r][j].second>=c2)){
	        	arr[r][j].first = min(arr[r][j].first, c1);
				arr[r][j].second = max(arr[r][j].second, c2);
				flag = true;
				break;
			}
	    }
	    if(!flag){
	    	temp.first = c1;
		    temp.second = c2;
		    arr[r].push_back(temp);
		}
    }
    ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size() ; j++) {
       		ans+=(arr[i][j].second-arr[i][j].first)+1;
	   }
    }
    cout <<n*m-ans;
        
    return 0;
}


