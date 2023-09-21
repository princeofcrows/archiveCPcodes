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
    //freopen("out.txt", "w", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> m >> k;
    for(i=0;i<m;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    j = 1;
    if(binary_search(x.begin(), x.end(), j)){
        cout << j; return 0;
    }
    while(k--){
        cin >> a >> b;
        if(a==j){
            j = b;
        }
        else if(b==j){
            j = a;
        }
        if(binary_search(x.begin(), x.end(), j)){
            break;
        }
    }
    cout << j;
    return 0;
}




















