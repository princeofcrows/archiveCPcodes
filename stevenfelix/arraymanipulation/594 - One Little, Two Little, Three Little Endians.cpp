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
    while(cin >> n){
        bitset<32> num;
        bitset<32> num2;
        bitset<32> num3;
        num = n;
        for(i=7;i>=0;i--){
            num2[7-i] = num[i];
        }
        for(i=15;i>=8;i--){
            num2[15-i+8] = num[i];
        }
        for(i=23;i>=16;i--){
            num2[23-i+16] = num[i];
        }
        for(i=31;i>=24;i--){
            num2[31-i+24] = num[i];
        }
        for(i=31;i>=0;i--){
            num3[31-i] = num2[i];
        }
        //cout << num << endl << num2 << endl;
        cout<<n<<" converts to "<<(int)(num3.to_ulong())<< endl;
    }
    return 0;
}















