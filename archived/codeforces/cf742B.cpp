#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
long long int cnt[100005];
int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, x, y;
	cin >> n >> x;
	vector <long long> ara;
	memset(cnt, 0, sizeof cnt);
	ans = 0;
	for(int i=0; i<n; i++){
		cin >> m;
		cnt[m]++;
		if(cnt[m]==1) ara.push_back(m);
	}
	sort(ara.begin(), ara.end());
	a = 0;
	if(x == 0){
        for(int i=0; i<ara.size(); i++){
            m = ara[i];
            a+=(cnt[m]-1)*cnt[m]/2;
        }
        cout << a;
        return 0;
	}
	for(int i=0; i<ara.size(); i++){
		m = ara[i]^x;
		if(binary_search(ara.begin(), ara.end(), m)){
			if(m!=0)ans+=cnt[m]*cnt[ara[i]];
			else a+=(cnt[m]-1)*cnt[m]/2;
		}
	}
	cout << ans/2+a;
	return 0;
}
