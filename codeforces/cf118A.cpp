#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
	long long int n, k, i, a, temp, ans;
	char str[105];
	cin >> str;
	n = strlen(str);
	for(i=0; i<n; i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='y'||str[i]=='Y'){
			continue;
		}
		else if(str[i]<='Z' && str[i]>='A'){
			cout <<"."<< char (str[i]+32);
		}
		else{
			cout <<"."<<str[i];
		}
		if(i==n-1){
			cout <<endl;
		}
	}
	return 0;
}
