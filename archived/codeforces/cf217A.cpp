#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < vector <long long int> > xy(1005);
bool flag[1005];

void dfs(long long u){
    if(flag[u]) return;
    flag[u] = true;
    for(int i=0;i<xy[u].size();i++){
        dfs(xy[u][i]);
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k;
	cin >> n ;
	bool sup[n+5];
	int x[n+5], y[n+5];
	memset(sup, false, sizeof sup);
	for(int i=0; i<n; i++){
		cin >> x[i] >> y[i];
	}
	ans = 1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
            if(x[i]==x[j]||y[i]==y[j]){
                xy[i].push_back(j);
                xy[j].push_back(i);
            }
		}
	}
	memset(flag, false, sizeof flag);
	ans = 0;
    for(int i=0; i<n; i++){
        if(flag[i]==false){
            dfs(i);
            ans++;
        }
	}
	cout << ans-1 << endl;
	return 0;
}
