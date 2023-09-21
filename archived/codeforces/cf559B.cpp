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

bool mergesort(long long i, long long j){
    bool flag = true;
    for(int l=i;l<j;l++){
        if(str[l]!=str1[l]){
            flag = false;
             break;
        }
    }
    if(flag) return true;
    long long len = j-i;
    if(len%2) return false;
    if(mergesort(i, i+len/2)&&mergesort(i+len/2, j)) return true;
    for(int l=i;l<i+len/2;l++){
        swap(str[l], str[l+len/2]);
    }
    flag = false;
    if(mergesort(i, i+len/2)&&mergesort(i+len/2, j)) flag = true;
    for(int l=i;l<i+len/2;l++){
        swap(str[l], str[l+len/2]);
    }
    return flag;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> str >> str1;
    n = str1.length();
    if(mergesort(0, n)) cout << "YES";
    else cout << "NO";
    return 0;
}











