#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz;
vector <int> ara;
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


int main() {
    //freopen("in.txt", "r", stdin);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(1){
        cin >> str;
        if(str=="#") break;
        str1 = str;
        next_permutation(str.begin(), str.end());
        if(str1>=str) cout << "No Successor" <<endl;
        else cout << str <<endl;
    }
    return 0;
}















