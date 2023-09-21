#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int gcd(int n1, int n2){
	while(n1 != n2) {
        if(n1 > n2)	n1 -= n2;
        else n2 -= n1;
    }
    return n1;
}

int main(){
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, b;
	bool flag;
	char str[205], temp;
	flag = true;
	cin >> a >> b >> n;
	tmp = 0;
	while(1){
		if(n<=0)	break;
		if(flag){
			tmp = gcd(n, a);
			if(tmp>n)	break;
			flag = !flag;
		}
		else{
			tmp = gcd(n, b);
			if(tmp>n)	break;
			flag = !flag;
			
		}
		n -= tmp;
	}
	if(flag) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}
