#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
long long int cnt[100005];
string str, str2;
int main(){
    freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, x, y, i;
    cin >> str;
    n = str.length();
    for(i=0;i<n;i++){
        if(str[i]=='>') str2+="1000";
        if(str[i]=='<') str2+="1001";
        if(str[i]=='+') str2+="1010";
        if(str[i]=='-') str2+="1011";
        if(str[i]=='.') str2+="1100";
        if(str[i]==',') str2+="1101";
        if(str[i]=='[') str2+="1110";
        if(str[i]==']') str2+="1111";
    }
    n = str2.length();
    a = 0;
    x = 1;
    for(i=n-1;i>=0;i--){
        a+=(str2[i]-'0')*x;
        x*=2;
        a%=1000003;
        x%=1000003;
    }
    cout << a%1000003;
	return 0;
}
