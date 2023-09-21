//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

stack <char> stk;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    getchar();
    while(n--){
        getline(cin, str);
        m = str.length();
        bool flag = true;
        for(i=0;i<m;i++){
            if(str[i]=='('||str[i]=='['){
                stk.push(str[i]);
            }
            else if(str[i]==' '){
                continue;
            }
            else{
                if(stk.empty()){
                    cout << "No\n";
                    flag = false;
                    break;
                }
                else if((stk.top()=='('&&str[i]==')')||(stk.top()=='['&&str[i]==']')){
                    stk.pop();
                }
                else {
                    cout << "No\n";
                    flag = false;
                    break;
                }
            }
        }
        if(stk.empty()&&flag) cout << "Yes\n";
        else if(flag) cout << "No\n";
        while(!stk.empty()) stk.pop();
    }
    return 0;
}




















