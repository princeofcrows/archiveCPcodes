#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;
vector <int> x;

int main() {
    //freopen("in.txt", "r", stdin);
    int temp, t, diglen, i, a, n, b, ans, temp2, k, j;
    cin >> n;
    cin >> str;
    int ara[9];
    ara[0] = 1;
    for(i=1; i<10; i++){
        ara[i]=ara[i-1]*i;
    }
    for(i=0; i<n; i++){
        if(str[i]=='0'||str[i]=='1'){
            continue;
        }
        else{
            if(str[i]=='4'){
                x.push_back(3);
                x.push_back(2);
                x.push_back(2);
            }
            else if(str[i]=='6'){
                x.push_back(5);
                x.push_back(3);
            }
            else if(str[i]=='8'){
                x.push_back(7);
                x.push_back(2);
                x.push_back(2);
                x.push_back(2);
            }
            else if(str[i]=='9'){
                x.push_back(7);
                x.push_back(2);
                x.push_back(3);
                x.push_back(3);
            }
            else{
                x.push_back(str[i]-'0');
            }
        }
    }
    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    for(i=0; i<x.size(); i++){
        cout << x[i];
    }
    return 0;
}
