#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <long long int> v;

int main() {
	//freopen("in.txt", "r", stdin);
    long long int num, ans, tem, count = 0, i, j=1;
    bool end = false;
    while(true){
    	cin >> num;
    	if(num==-1){
    		count++;
    		if(count!=2){
    			cout <<"Test #"<<j<<":\n  maximum possible interceptions: "<<v.size()<<endl;
	    		v.clear();
	    		j++;
			}
			else{
				break;
			}
		}
		else{
			if(count==1) cout<<endl;
			count = 0;
			for(i = 0; i<v.size(); i++){
				if(v[i]<num){
					v[i] = num;
					break;
				}
			}
	    	if(v.size()==i) v.push_back(num);
		}
	}
    
    return 0;
}
