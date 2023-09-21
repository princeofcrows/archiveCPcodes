#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[100005], ara2[100005], ara3[100005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans, k;
    cin >> n;
    if(n<4){
        cout << "NO";
        return 0;
    }
    if(n==4){
        cout << "YES\n";
        cout << "2 * 1 = 2\n";
        cout << "2 * 3 = 6\n";
        cout << "4 * 6 = 24";
        return 0;
    }
    if(n==5){
        cout << "YES\n";
        cout << "3 * 5 = 15\n";
        cout << "2 * 4 = 8\n";
        cout << "15 + 8 = 23\n";
        cout << "23 + 1 = 24";
        return 0;
    }
    cout << "YES\n";
    cout << "5 - 6 = -1\n";
    cout << "-1 + 1 = 0\n";
    a = 4;
    for(i=7;i<=n;i++){
        cout << i<<" * 0 = 0\n";
        a++;
    }
    cout << "2 + 0 = 2\n";
    cout << "2 * 3 = 6\n";
    cout << "4 * 6 = 24";
    return 0;
}











