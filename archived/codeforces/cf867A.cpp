#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, n;
    cin >> n;
    string str;
    cin >> str;
    a = b = 0;
    for(int i=1;i<n;i++){
        if(str[i]=='S'&&str[i-1]=='F') a++;
        else if(str[i]=='F'&&str[i-1]=='S') b++;
    }
    if(b>a) cout << "YES";
    else cout << "NO";
    return 0;
}
