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
	cin >> n >> q;
    vector< vector<int> > arr(n);
    siz = 0;
    for(int arr_i = 0;arr_i < q;arr_i++){
    	cin >> a >> b >> c;
    	if(a==1){
    		arr[(b^la)%n].push_back(c);
		}
		else if(a==2){
			siz = arr[(b^la)%n].size();
			//cout << arr[(b^la)%n].size()<< "ta\n";
			la = arr[(b^la)%n][c%siz];
			cout << la << endl;
		}
    }
    return 0;
}

