#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char time[15], ctime[15];
    bool flag;
    cin >> time;
    if(time[8]=='P') flag=true;
    else flag = false;
    for(int i=0; i<8; i++){
    	if(time[i]-'0'>=0&&time[i]-'0'<=9){
    		if(i==0||i==1){
    			if(flag&&i==0){
    				if(time[0]=='1'&&time[1]=='2'){
    					ctime[i] = '1';
    					ctime[i+1] = '2';
    					i++;
    					continue;
					}
					else ctime[i] = time[0]+1;
				}
				else if(flag&&i==1&&(time[i]!='8'||time[i]!='9')){
    				ctime[i] = (time[1]+2);
				}
				else if(flag&&i==1&&(time[i]=='8'||time[i]=='9')){
    				ctime[i] = (time[1]-'0'+2)%10+'0';
    				ctime[i-1] = time[0]+1;
				}
				else if(!flag&&i==0&&time[0]=='1'&&time[1]=='2'){
    				ctime[0] = '0';
    				ctime[1] = '0';
    				i++;
				}
				else{
					ctime[i]=time[i];
				}
			}
			else{
				ctime[i]=time[i];
			}
		}
		else ctime[i]=time[i];
	}
	ctime[8] = '\0';
	cout << ctime;
    return 0;
}

