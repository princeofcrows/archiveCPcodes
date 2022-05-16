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
long long ara[100005];
long long ara2[100005];
string str, str2;
int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, i, j, d, temp, l, r;
    cin >> n;
    ara[0] = 0;
    for(i=0;i<n;i++){
        cin >> temp;
        ara[i+1] = ara[i]+temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    ara2[0] = 0;
    for(i=0;i<n;i++){
        ara2[i+1] = ara2[i]+x[i];
    }
    cin >> m;
    for(i=0;i<m;i++){
        cin >> a >> l >> r;
        if(a==1) cout << ara[r]-ara[l-1];
        if(a==2) cout << ara2[r]-ara2[l-1];
        cout << endl;
    }

	return 0;
}

