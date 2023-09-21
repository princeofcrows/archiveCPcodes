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
vector < pair <long long, long long> > pxy;
string str, str1, str2;
long long int ara[100005];

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, s, b, t, c, d ,e;
    cin >> n;
    str = "I hate ";
    str1 = "I love ";
    str2 = "that ";
    for(i=1;i<=n;i++){
        if(i%2) cout << str;
        else cout << str1;
        if(i!=n) cout << str2;
    }
    cout <<"it";
    return 0;
}











