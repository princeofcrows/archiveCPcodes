#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    int temp, t, diglen, xo, yo, x, y;
    int n, i, ans, j;
    cin >> n;
    cin >> xo >> yo;
    ans = 0;
    vector < pair <int, int> > s;
    for(i=0; i<n; i++){
        cin >> x >> y;
        s.push_back({x,y});
        bool flag=false;
        for(j=0;j<i;j++){
            if((s[j].first-xo)*(y-yo)==(s[j].second-yo)*(x-xo)){
                flag = true;
                break;
            }
        }
        if(!flag){
            ans++;
        }
	}
	cout <<ans;
    return 0;
}
