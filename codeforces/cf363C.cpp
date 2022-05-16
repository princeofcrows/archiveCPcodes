#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

string st11, st22, st21, st12;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> str;
    n = str.length(); ans = 0;
    j = -1;
    for(i=0;i<n;i++){
        if(i<2) {
            str1+=str[i];
            j++;
        }
        else if(str[i]==str1[j]&&str[i]==str1[j-1]) continue;
        else{
            str1+=str[i];
            j++;
        }
    }
    n = str1.length();
    for(i=3;i<n;i++){
        if(str1[i]==str1[i-1]&&str1[i-2]==str1[i-3]){
            ans++;
            str1[i] = '#';
        }
    }
    for(i=0;i<n;i++){
        if(str1[i]=='#'){
            continue;
        }
        cout << str1[i];
    }
    return 0;
}











