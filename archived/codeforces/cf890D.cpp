#include <bits/stdc++.h>
using namespace std;
int ara[35], pre[35], nxt[35], vis[35];
vector <string> star;
string str;


int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j, a, l, n;
    cin >> n;

    memset(vis, 0, sizeof vis);
    memset(pre, -1, sizeof pre);
    memset(nxt, -1, sizeof nxt);

    for(i=1;i<=n;i++){
        cin >> str;
        memset(ara, 0, sizeof ara);
        for(j=0;j<str.length();j++){
            if(ara[str[j]-'a']){
                cout << "NO";
                return 0;
            }
            ara[str[j]-'a']++;
            vis[str[j]-'a'] = 1;
        }
        for(j=0;j<str.length();j++){
            if(j!=0){
                if(pre[str[j]-'a']==-1){
                    pre[str[j]-'a'] = str[j-1]-'a';
                }
                else if(pre[str[j]-'a']!=(str[j-1]-'a')){
                    cout << "NO";
                    return 0;
                }
            }
            if(j!=str.length()-1){
                if(nxt[str[j]-'a']==-1||nxt[str[j]-'a']==10000){
                    nxt[str[j]-'a'] = str[j+1]-'a';
                }
                else if(nxt[str[j]-'a']!=(str[j+1]-'a')){
                    cout << "NO";
                    return 0;
                }
            }
            if(str.length()==1&& nxt[str[0]-'a']==-1){
                nxt[str[0]-'a'] = 10000;
            }
        }
    }
    str = "";
    for(i=0;i<26;i++){
        if(pre[i]==-1&&(nxt[i]!=-1)){
            j = i;
            while(j!=-1){
                vis[j] = false;
                str += (char)(j+'a');
                j = nxt[j];
                if(j>26) break;
            }
        }
    }
    for(i=0;i<26;i++){
        if(vis[i]) str = "";
    }
    if(str=="") cout << "NO";
    else cout << str;
    return 0;
}












