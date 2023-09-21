#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

string num;
vector <int> x;

int main(){
    //freopen("in.txt", "r", stdin);
	int n, m, a, ans, t;
	cin >> n;
	a = 1;
	for(int i=0; i<n; i++){
        cin >> t;
        x.push_back(a+t-1);
        a = a+t;
	}
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> a;
        cout << lower_bound(x.begin(), x.end(), a)-x.begin()+1<<endl;
    }
	return 0;
}
