#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n, t, s, p, temp, sum=0;
    cin >> t;
    while(t--){
    	cin >> n;
    	vector<int> a(n);
	    for(int a_i = 0;a_i < n;a_i++){
	       cin >> a[a_i];
	       sum+=a[a_i];
	    }
	    sort (a.begin(), a.end());
	    temp = p = 0;
	    bool flag = false;
	    s = 1;
	    for(int i = 0;i < n;i++){
	    	p=max(s*sum, p);
	    	s++;
	    	sum-=a[i];
	    }
	    cout << p<<endl;
	}
    return 0;
}

