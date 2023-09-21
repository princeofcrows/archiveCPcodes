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
    if(str[0]!='-'){
        cout << str;
        return 0;
    }
    if(n==3){
        if(str[n-1]=='0'||str[n-2]=='0'){
            cout <<0;
            return 0;
        }
    }
    if(str[n-1]>str[n-2]){
        for(i=0;i<n-1;i++){
            cout << str[i];
        }
    }
    else{
        for(i=0;i<n;i++){
            if(i!=n-2)cout << str[i];
        }
    }
	return 0;
}











