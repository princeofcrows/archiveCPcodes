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
#include <cstring>
using namespace std;

long long int temp[200005], num[200005], a[205];


int main() {
    long long int a[100005], ans;
    int n, d;
    cin >> n >> d;
    memset(a, 0, sizeof a);
    for(int i=0; i<n; i++){
    	cin >> num[i];
    	if(i<d) a[num[i]]++;
	}
    ans = 0;
    int cnt = 0;
    if(d%2){
    	for(int i = d; i<n; i++){
	    	int med;
	    	cnt = 0;
	    	for(int j =0; j<d; j++){
	    		cnt+=a[j];
	    		if(cnt-1>=d/2){
	    			med = j;
	    			break;
				}
			}
			if(med*2<=num[i]) ans++;
			a[num[i-d]]--;
			a[num[i]]++;
		}
	}
    else{
    	for(int i = d; i<n; i++){
	    	int med1, med2 = -1;
	    	double medd;
	    	cnt = 0;
	    	for(int j =0; j<d; j++){
	    		cnt+=a[j];
	    		if(cnt-1>=d/2-1&&med2==-1){
					med2 = j;
				}
	    		if(cnt-1>=d/2){
	    			med1 = j;
	    			break;
				}
			}
			medd = (double)med1 + (double)med2;
			medd/=2;
			if(int(medd*2)<=num[i]) ans++;
			a[num[i-d]]--;
			a[num[i]]++;
		}
	}
    cout << ans;
    return 0;
}
