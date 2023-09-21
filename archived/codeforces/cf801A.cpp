#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[10000005], ara2[205];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> str;
    n = str.length();
    memset(flagar, false, sizeof flagar);
    ans = 0;
    for(i=0;i<n-1;i++){
        if(str[i]=='V'&&str[i+1]=='K'){
            flagar[i] = true;
            flagar[i+1] = true;
            ans++;
        }
    }
    for(i=0;i<n-1;i++){
        if(flagar[i]==false&&flagar[i+1]==false){
            if(str[i]=='V'){
                ans++;
                break;
            }
            if(str[i+1]=='K'){
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}











