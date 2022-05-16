#include <bits/stdc++.h>
#define MX 100005
#define int long long
using namespace std;
string f0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string x = "What are you doing while sending \"";
string y = "\"? Are you busy? Will you send \"";
string z = "\"?";


int32_t main(){
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, m, r, p, ans, q;
    cin >> q;
    //cout << f0.length();
    while(q--){
        cin >> n >> k;
        r = 0;
        p = 0;
        if(n==0){
            if(k>f0.length()) cout << ".";
            else if(f0[k-1]!='\'') cout << f0[k-1];
            else cout << "\"";
            //cout << "...marhaba...";
            continue;
        }
        for(i=1;i<=8;i++){
            if(i==1){
                l = r+1;
                r += n*x.length();
                if(k>=l&&k<=r){
                    m = k-p-1;
                    m%=x.length();
                    cout << x[m];
                    break;
                }
                p = r;
            }
            if(i==2){
                l = r+1;
                r += f0.length();
                if(k>=l&&k<=r){
                    if(f0[p-k-1]=='\'') cout << "\"";
                    else cout << f0[k-p-1];
                    break;
                }
                p = r;
            }
            if(i==3){
                l = r+1;
                r += n*y.length();
                if(k>=l&&k<=r){
                    m = k-p-1;
                    m%=y.length();
                    cout << y[m];
                    break;
                }
                p = r;
            }
            if(i==4){
                l = r+1;
                r += (n-1)*x.length();
                if(k>=l&&k<=r){
                    m = k-p-1;
                    m%=x.length();
                    cout << x[m];
                    break;
                }
                p = r;
            }
            if(i==5){
                l = r+1;
                r += f0.length();
                if(k>=l&&k<=r){
                    if(f0[k-p-1]=='\'') cout << "\"";
                    else cout << f0[k-p-1];
                    break;
                }
                p = r;
            }
            if(i==6){
                l = r+1;
                r += (n-1)*y.length();
                if(k>=l&&k<=r){
                    m = k-p-1;
                    m%=y.length();
                    cout << y[m];
                    break;
                }
                p = r;
            }
            if(i==7){
                l = r+1;
                r += n*z.length();
                if(k>=l&&k<=r){
                    m = k-p-1;
                    m%=z.length();
                    cout << z[m];
                    break;
                }
                p = r;
            }
            if(i==8) cout << ".";
        }
    }
    return 0;
}











