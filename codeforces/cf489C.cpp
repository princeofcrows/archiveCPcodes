#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
char miN[105], maX[105];

void minset(int m, int s){
    miN[0] = '1';
    for(int i=1;i<m;i++){
        miN[i] = '0';
    }
    int temp = 1;
    int pr = m-1;
    while(temp!=s){
        miN[pr]=(miN[pr]-'0'+1)+'0';
        temp++;
        if(miN[pr]=='9'){
            pr--;
        }
    }
    cout << miN;
}

void maxset(int m, int s){
    for(int i=0;i<m;i++){
        maX[i] = '9';
    }
    int temp = m*9;
    int pr = m-1;
    while(temp!=s){
        maX[pr]=(maX[pr]-'0'-1)+'0';
        temp--;
        if(maX[pr]=='0'){
            pr--;
        }
    }
    cout << maX;
}

int main(){
    //freopen("in.txt", "r", stdin);
	int n, m, a, ans, x, y, s;
	cin >> m >> s;
    if(s==0){
        if(m==1) cout <<0<<" "<<0;
        else cout <<-1<<" "<<-1;
        return 0;
    }

    if(m*9<s){
        cout <<-1<<" "<<-1;
        return 0;
    }
    minset(m, s);
    cout <<" ";
    maxset(m, s);
	return 0;
}
