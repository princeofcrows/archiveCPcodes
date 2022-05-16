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
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(),x.end());
    ans = x[n-1];
    temp = x[0];
    for(i=1;i<n-1;i++){
        temp -=(ans-x[i]);
    }
    if(temp<=0) temp=0;
    else{
        temp = temp/(n-1)+(bool)(temp%(n-1));
    }
    cout << ans+temp;
    return 0;
}











