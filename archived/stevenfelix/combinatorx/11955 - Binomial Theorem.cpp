#include <bits/stdc++.h>
#define int long long

using namespace std;

string str, a, b;
int ncr[52][52];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i, j, t, n, k, p, r, c;
    ncr[0][0] = 1;
    for(i=1;i<=50;i++){
        for(j=0;j<=50;j++){
            if(j>i) ncr[i][j] = 0;
            else if(j==0||j==i) ncr[i][j] = 1;
            else ncr[i][j] = ncr[i-1][j-1] + ncr[i-1][j];
        }
    }
    cin >> t;
    c = 1;
    while(t--){
        cin >> str;
        a = b = "";
        k = 0;
        for(i=1;str[i]!='+';i++){
            a += str[i];
        }
        for(i=i+1;str[i]!=')';i++){
            b += str[i];
        }
        for(i=i+2;i<str.length();i++){
            k = k*10 + (str[i]-'0');
        }
        j = k;
        cout << "Case " << c++ << ": ";
        for(i=0;i<=k;i++){
            if(ncr[k][i]!=1){
                cout << ncr[k][i] << "*";
            }
            if(j==1){
                cout << a;
                if(i) cout << "*";
                j--;
            }
            else if(j){
                cout << a << "^" << j-- ;
                if(i) cout << "*";
            }
            if(i==1){
                cout << b;
            }
            else if(i){
                cout << b << "^" << i;
            }
            if(i!=k) cout << "+";
        }
        cout << endl;
    }
    return 0;
}
