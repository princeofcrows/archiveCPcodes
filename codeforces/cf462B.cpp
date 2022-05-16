#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;

int main(){
    //freopen("in.txt", "r", stdin);
	unsigned long long int n, m, a, ans, x, y;
	cin >> n >> m;
	cin >> str;
    vector <unsigned long long int> alph(26);
    for(int i=0; i<26; i++){
        alph[i]=0;
    }
    for(int i=0; i<n; i++){
        alph[str[i]-'A']++;
    }
    sort(alph.begin(), alph.end());
	ans = 0;
	x =0;
	int i=25;
	while(ans<m){
        if(m-ans<alph[i]){
            x+=(m-ans)*(m-ans);
            ans=m;
        }
        else{
            ans+=alph[i];
            x+=(alph[i]*alph[i]);
        }
        i--;
	}
	cout << x;
	return 0;
}
