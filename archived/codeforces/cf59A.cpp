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
string str;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, s, b;
    cin >> str;
    n = str.length();
    a = b = 0;
    for(i=0;i<n;i++){
        if(str[i]>='A'&&str[i]<='Z') a++;
        else b++;
    }
    if(a>b){
        for(i=0;i<n;i++){
            cout << (char)toupper(str[i]);
        }
    }
    else {
        for(i=0;i<n;i++){
            cout << (char)tolower(str[i]);
        }
    }
	return 0;
}











