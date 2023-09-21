#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

char ara[7][7];

int main(){
    //freopen("in.txt", "r", stdin);
	int n, m, a, ans, x, y;
    for(int i=0; i<4; i++){
        cin >> ara[i];
    }
    bool flag = false;
    for(int i=0; i<4; i++){
        ans = 0;
        for(int j=0; j<4; j++){
            if(ans==2&&ara[i][j]=='.'){
                cout << "YES";
                return 0;
            }
            if(ans==1&&ara[i][j]=='.'&&ara[i][j+1]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'){
                ans++;
            }
            else{
                ans = 0;
            }
        }
        ans = 0;
        for(int j=3; j>=0; j--){
            if(ans==2&&ara[i][j]=='.'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'){
                ans++;
            }
            else{
                ans = 0;
            }
        }
    }
    for(int j=0; j<4; j++){
        ans = 0;
        for(int i=0; i<4; i++){
            if(ans==2&&ara[i][j]=='.'){
                cout << "YES";
                return 0;
            }
            if(ans==1&&ara[i][j]=='.'&&ara[i+1][j]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'){
                ans++;
            }
            else{
                ans = 0;
            }
        }
        ans = 0;
        for(int i=3; i>=0; i--){
            if(ans==2&&ara[i][j]=='.'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'){
                ans++;
            }
            else{
                ans = 0;
            }
        }
    }
    for(int i=0; i<2; i++){
        ans = 0;
        for(int j=0; j<2; j++){
            if(ara[i][j]=='.'&&ara[i+1][j+1]=='x'&&ara[i+2][j+2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i+1][j+1]=='.'&&ara[i+2][j+2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i+1][j+1]=='x'&&ara[i+2][j+2]=='0'){
                cout << "YES";
                return 0;
            }
        }
        for(int j=3; j>=2; j--){
            if(ara[i][j]=='.'&&ara[i+1][j-1]=='x'&&ara[i+2][j-2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i+1][j-1]=='.'&&ara[i+2][j-2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i+1][j-1]=='x'&&ara[i+2][j-2]=='0'){
                cout << "YES";
                return 0;
            }

        }
    }
    for(int i=3; i>=2; i--){
        ans = 0;
        for(int j=0; j<2; j++){
            if(ara[i][j]=='.'&&ara[i-1][j+1]=='x'&&ara[i-2][j+2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i-1][j+1]=='.'&&ara[i-2][j+2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i-1][j+1]=='x'&&ara[i-2][j+2]=='0'){
                cout << "YES";
                return 0;
            }
        }
        for(int j=3; j>=2; j--){
            if(ara[i][j]=='.'&&ara[i-1][j-1]=='x'&&ara[i-2][j-2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i-1][j-1]=='.'&&ara[i-2][j-2]=='x'){
                cout << "YES";
                return 0;
            }
            if(ara[i][j]=='x'&&ara[i-1][j-1]=='x'&&ara[i-2][j-2]=='0'){
                cout << "YES";
                return 0;
            }

        }
    }
    cout << "NO";
	return 0;
}
