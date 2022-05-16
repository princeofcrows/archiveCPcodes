#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < long long > xy;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l;
	cin >> a;
	k = j = 0;
	for(int i=0; i<a; i++){
		cin >> n;
        if(n%2){
            j++;
            l = i;
        }
        else{
            k++;
            m = i;
        }
	}
	if(j==1)cout << l+1;
	else cout << m+1;
	return 0;
}
