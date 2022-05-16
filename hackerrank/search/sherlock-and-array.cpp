#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    unsigned long long int n;
    unsigned long long int k, ans, temp, sum;
    cin >> k;
    while(k--){
    	cin >> n;
	    vector<int> x(n);
	    sum = 0;
	    for(int x_i = 0;x_i < n;x_i++){
	       cin >> x[x_i];
	       sum+=x[x_i];
	    }
	    ans = 0;
	    bool flag = false;
	    for(int x_i = 0;x_i < n;x_i++){
	       sum-=x[x_i];
	       if(sum==ans){
	       		flag = true;
	       		break;
		   }
		   ans+=x[x_i];
	    }
	    if(flag) cout<<"YES";
	    else cout << "NO";
	    cout <<endl;
	}
    return 0;
}
