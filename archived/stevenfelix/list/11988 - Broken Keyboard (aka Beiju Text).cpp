
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3, star[100005];

long long ara[1000005], ara2[200005], ara3[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}


//____________________________________________________________________________________//
//____________________________________________________________________________________//

deque <string> dq;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, n;
    while(cin >> str){
        n = str.length();
        str2 = "[";
        str3.clear();
        for(i=0;i<n;i++){
            if(str[i]==']'||str[i]=='['){
                if(str2=="["){
                    dq.push_front(str3);
                    str3.clear();
                    str2.clear();
                    str2+=str[i];
                }
                else{
                    dq.push_back(str3);
                    str3.clear();
                    str2.clear();
                    str2+=str[i];
                }
            }
            else{
                str3+=str[i];
            }
        }
        if(str2=="["){
            dq.push_front(str3);
            str3.clear();
            str2.clear();
            str2+=str[i];
        }
        else{
            dq.push_back(str3);
            str3.clear();
            str2.clear();
            str2+=str[i];
        }
        while(!dq.empty()){
            cout << dq.front();
            dq.pop_front();
        }
        cout << endl;
    }
    return 0;
}















