#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
vector <pii> graph[1005];
priority_queue <pii, vector<pii>, greater<pii>> q;
ll po[1005];
ll ans[1005];
string str;

int main(){
    //freopen("in.txt", "r", stdin);
    ll t, a, b, c, e, i, x, y, j, cs;
    cs = 1;
    scanf("%lld", &e);
    while(e--){
        cin >> b;
        getline(cin, str);
        getline(cin, str);
        //cout << str <<endl;
        a = c = 0;
        memset(po, 0, sizeof po);
        memset(ans, 0, sizeof ans);
        for(i=0;i<str.length();i++){
            if(str[i]=='X'){
                c = a;
                if(!a) c = 1;
                a = 0;
            }
            else if(str[i]=='+'){
                if(!a) a = 1;
                po[a] = c;
                a = 0;
                c = 0;
            }
            else if(str[i]>='0'&&str[i]<='9'){
                a = a*10+(str[i]-'0');
            }
        }
        if(str[str.length()-1]=='X') po[1] = c;
        else if(c&&a) po[a] = c;
        else po[0] = a;
        for(i=10;i>=0;i--){
            if(po[i]) {
                a = i-b;
                if(a<0) continue;
                c = po[i];
                for(j=i;j>a;j--){
                    c*=j;
                }
                ans[a] = c;
            }
        }
        cout << "Case " << cs++ <<": ";
        c = 0;
        for(i=10;i>=0;i--){
            if(ans[i]){
                if(c) cout << " + ";
                if(i==0){
                    cout << ans[i];
                    c = 1;
                    continue;
                }
                if(ans[i]!=1) cout << ans[i] <<"*"<<"X";
                else cout << "X";
                if(i!=1) cout << "^" << i;
                c = 1;
            }
        }
        if(!c) cout << 0;
        cout << endl;
    }
    return 0;
}





















