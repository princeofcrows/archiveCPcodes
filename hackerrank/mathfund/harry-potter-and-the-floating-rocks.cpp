#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

long long int gcd(long long int a, long long int b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, x1, y1, x2, y2, s, b;
	cin>>n;
	while(n--){
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1==x2&&y1==y2) cout<<0<<endl;
        else if(x1==x2) cout << abs(y1-y2)-1 <<endl;
        else if(y1==y2) cout << abs(x1-x2)-1 <<endl;
        else cout << gcd(abs(x1-x2), abs(y1-y2))-1<<endl;

	}

	return 0;
}
