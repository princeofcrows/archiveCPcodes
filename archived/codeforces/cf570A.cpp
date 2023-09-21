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

vector < vector <long long> > v(105);

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, m, i, j, mx, idx, temp;
    cin >> n >> m;
    for(i=0;i<m; i++){
        mx = 0;
        idx = 0;
        for(j=0;j<n; j++){
            cin >>temp;
            if(temp>mx){
                mx = temp;
                idx = j;
            }
        }
        v[idx].push_back(i);
    }
    mx = 0;
    idx = 0;
    for(i=0;i<n; i++){
        if(v[i].size()>mx){
            mx = v[i].size();
            idx = i;
        }
    }
    cout << idx+1;
    return 0;
}
