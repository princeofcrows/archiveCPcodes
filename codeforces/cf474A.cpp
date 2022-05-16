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
vector <long long> v;
long long ara[4005];
long long dp[4005];
long long dp2[4005];

string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
string str2;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k;
    char ch;
    cin >> ch;
    cin >> str2;
    for(i=0;i<str2.length();i++){
        for(j=0;j<str.length();j++){
            if(str[j]==str2[i]){
                if(ch=='R') cout << str[j-1];
                if(ch=='L') cout << str[j+1];
                break;
            }
        }
    }
    return 0;
}















