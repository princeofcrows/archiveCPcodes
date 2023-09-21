#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, x, y, s;
	cin>>y;
	while(y--){
        cin >> m;
        if(m%2==1) cout <<(m/2)*(m/2+1)<<endl;
        else    cout <<(m/2)*(m/2)<<endl;
	}
	return 0;
}
