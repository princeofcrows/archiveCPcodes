#include <bits/stdc++.h>
using namespace std;
#define MX 1000005

int ara[MX];
string str, str1;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, n, a, b, l;
    cin >> str;
    str1 = "QAQ";
    j = a = 0;
    for(i=0;i<str.length();i++){
        if(str[i]=='Q'){
            for(j=i+1;j<str.length();j++){
                if(str[j]=='A'){
                    for(l=j+1;l<str.length();l++){
                        if(str[l]=='Q') a++;
                    }
                }
            }
        }
    }
    cout << a;
    return 0;
}
