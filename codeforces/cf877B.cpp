#include <bits/stdc++.h>
using namespace std;

string star[10], str;
int af[5005], ab[5005], b[5005];

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, k, l, n, ans;
    cin >> str;

    memset(af, 0, sizeof af);
    memset(ab, 0, sizeof ab);
    memset(b, 0, sizeof b);

    for(i=0;i<str.length();i++){
        if(str[i]=='a') af[i+1] = af[i]+1;
        else af[i+1] = af[i];
    }
    for(i=str.length()-1;i>=0;i--){
        if(str[i]=='a') ab[i+1] = ab[i+2]+1;
        else ab[i+1] = ab[i+2];
    }
    for(i=0;i<str.length();i++){
        if(str[i]=='b') b[i+1] = b[i]+1;
        else b[i+1] = b[i];
    }
    ans = 0;
    for(i=0;i<=str.length();i++){
        for(j=str.length()+1;j>i;j--){
            l = af[i] + ab[j] + b[j-1]-b[i];
            ans = max(ans, l);
        }
    }
    cout << ans;
    return 0;
}












