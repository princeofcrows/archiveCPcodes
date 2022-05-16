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
string str;
string str2, str3;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        xy.push_back(temp);
    }
    sort(xy.begin(), xy.end());
    for(i=0;i<n;i++){
        cout << xy[i] <<" ";
    }
	return 0;
}











