#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    string str;
    cin >> str;
    int i, j, ans;
    int ara[str.length()+1];
    j = 1;
    for(i=0;i<str.length();i++){
        if(i>0&&str[i]!=str[i-1]) j++;
        ara[i] = j;
    }
    long long oe[3][3], e, o;
    oe[0][0] = oe[1][0] = oe[0][1] = oe[1][1] =  e = 0;
    o = str.length();
    for(i=0;i<str.length();i++){
        o += oe[ara[i]%2][i%2];
        e += oe[ara[i]%2][1-i%2];
        oe[ara[i]%2][i%2]++;
    }
    cout << e << " " << o;
	return 0;
}


