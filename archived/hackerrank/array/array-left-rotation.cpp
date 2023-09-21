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
	int n, d, la, a, b, c, siz;
	la = 0;
	cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = n-d;arr_i < n;arr_i++){
    	cin >> arr[arr_i];
    	
    }
    for(int arr_i = 0;arr_i < n-d;arr_i++){
    	cin >> arr[arr_i];
    	
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
    	cout << arr[arr_i];
    	if(arr_i!=n-1)cout << " ";
    	
    }
    return 0;
}

