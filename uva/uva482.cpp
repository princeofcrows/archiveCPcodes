#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define lli long long int

int main(){
	freopen("in.txt", "r", stdin);
	lli t, j, i, num, ans, n;
	cin >> n;
	getchar();
	for(i=0; i<n; i++){
        lli x[100005];
        j = 0;
        while(scanf("%lld", &num)!='\n'){
            x[num] = j;
            cout << num <<endl;
            j++;
        }
        vector <string> y;
        string str;
        while(scanf("%s", str)!='\n'){
            y.push_back(str);
        }
        for(j=0; j<y.size(); j++){
            cout << y[x[j]] <<endl;
        }
        cout << endl;
	}
	return 0;
}
