#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        stack <char> x;
        for(int i=s.length()-1; i>=0; i--){
            if(x.empty()) x.push(s[i]);
            else{
                if(s[i]==']'||s[i]=='}'||s[i]==')'){
                    x.push(s[i]);
                }
                else{
                    if(s[i]=='{'&&x.top()=='}'){
                        x.pop();
                    }
                    else if(s[i]=='('&&x.top()==')'){
                        x.pop();
                    }
                    else if(s[i]=='['&&x.top()==']'){
                        x.pop();
                    }
                    else{
                        break;
                    }
                }
            }
        }
        if(x.empty()) cout << "YES"<<endl;
        else cout << "NO" <<endl;
    }
    return 0;
}
