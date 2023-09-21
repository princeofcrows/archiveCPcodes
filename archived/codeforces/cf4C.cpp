#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <pair <string, long long int> > x;
string str;
int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str;
        bool flag = false;
        for(a=0;a<x.size();a++){
            if(str==x[a].first){
                flag=true;
                b = x[a].second+1;
                x[a].second++;
                string t2;
                while(b!=0){
                    t2+=(b%10+'0');
                    b/=10;
                }
                reverse(t2.begin(), t2.end());
                str+=t2;
                cout<<str<<endl;
                x.push_back({str, 0});
                break;
            }
        }
        if(flag==false){
            cout << "OK"<<endl;
            x.push_back({str, 0});
        }
    }
    return 0;
}
