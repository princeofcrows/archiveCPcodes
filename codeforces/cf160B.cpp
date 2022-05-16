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
vector <int> y;

int main(){
    //freopen("in.txt", "r", stdin);
	int n, m, a, ans;
    cin >> n;
    cin >> num;
    for(int i=0; i<n; i++){
        x.push_back(num[i]-'0');
    }
    sort(x.begin(), x.end());
    for(int i=n; i<2*n; i++){
        y.push_back(num[i]-'0');
    }
    sort(y.begin(), y.end());
    if(n==1&&x[0]==y[0]){
        cout << "NO";
        return 0;
    }
    for(int i=0; i<n-1; i++){
        if(x[i]==y[i]){
            cout << "NO";
            return 0;
        }
        if(x[i]<y[i]&&x[i+1]>y[i+1]){
            cout << "NO";
            return 0;
        }
        if(x[i]>y[i]&&x[i+1]<y[i+1]){
            cout << "NO";
            return 0;
        }
    }
    if(x[n-1]==y[n-1]){
        cout << "NO";
        return 0;
    }
    cout << "YES";
	return 0;
}
