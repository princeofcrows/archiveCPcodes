//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);

    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> star[i];
    }
    str = star[0];
    m = str.length();
    mx = 999999999999999999;
    for(i=0;i<m;i++){
        ans = 0;
        for(j=0;j<n;j++){
            str1 = star[j];
            temp = 0;
            while(str1!=str){
                str2 = str1[0];
                str1+=str2;
                str1.erase(str1.begin());
                ans++;
                temp++;
                if(temp>m){
                    cout << -1;
                    return 0;
                }
            }
        }
        str+=str[0];
        str.erase(str.begin());
        mx = min(ans, mx);
    }
    cout << mx;
    return 0;
}




















