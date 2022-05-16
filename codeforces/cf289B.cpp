#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <long long> x;
long long ara[105][105];
string str, str2;
int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, i, j, d, temp;
    cin >> n >> m >> d;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> ara[i][j];
            x.push_back(ara[i][j]);
        }
    }
    sort(x.begin(), x.end());
    temp = x[(x.size())/2];
    ans =0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(ara[i][j]-temp)%d){
                cout << -1;
                return 0;
            }
            else{
                ans+=abs(ara[i][j]-temp)/d;
            }
        }
    }
    cout << ans;
	return 0;
}
