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
    int k, ara[101];
    cin >> n >> k;
    int a[n];
    int ans = 0;
    memset(ara, 0, sizeof ara);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       a[a_i] = a[a_i]%k; 
       if(a[a_i]==0) ans++;
       ara[a[a_i]]++;
    }
    ans = ans*(ans-1)/2;
    //cout << ans;
    for(int a_i = 1;a_i <= (k)/2;a_i++){
    	if((k)%2==0&&a_i==(k)/2){
    		ans+=ara[a_i]*(ara[a_i]-1)/2;
    		break;
		}
       ans+=ara[a_i]*ara[k-a_i];
    }
    cout << ans;
    return 0;
}
