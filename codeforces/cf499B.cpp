#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < pair <string, string> > x;
vector <string> a1;
vector <string> a2;
string str1, str2;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2, m, j;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> str1 >> str2;
        x.push_back({str1, str2});
    }
    for(i=0;i<n;i++){
        cin >> str1;
        for(j=0;j<x.size();j++){
            if(str1==x[j].first||str1==x[j].second){
                if(x[j].first.length()<=x[j].second.length()){
                    cout << x[j].first <<" ";
                }
                else{
                    cout << x[j].second <<" ";
                }
                break;
            }
        }
    }
    return 0;
}
