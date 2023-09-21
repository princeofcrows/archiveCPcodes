#include <string>
#include <stack>
#include <iostream>
using namespace std;

char stak[101][60];

void browser(int t){
	cout << "Case " << t <<":"<<endl;
	string str,x,temp,y;
    stack<string>s1;
    stack<string>s2;
    x = "http://www.lightoj.com/";
    s1.push(x);
    while(1){
		cin >> y;
		if(y=="QUIT"){
			break;
		}
		else if(y == "VISIT"){
			cin >> x;
			cout << x << endl;
			s1.push(x);
			while(!s2.empty()){
				s2.pop();
			}
		}
		else if(y == "BACK"){
			if(s1.size() >1){
				temp = s1.top();
				s2.push(temp);
				s1.pop();
				cout << s1.top() <<endl;	
			}
			else if(s1.size() == 1){
				cout << "Ignored" << endl;
			}
		}
		else if(y == "FORWARD"){
			if(!s2.empty()){
				cout<<s2.top()<<endl;
				temp = s2.top();
				s1.push(temp);
				s2.pop();
			}
			else{
				cout << "Ignored" <<endl;
			}
		}
		
	}
}

int main(){
	int T, t;
	cin>>T;
	t = 1;
	while(T--){
		browser(t);
		t++;
	}
	return 0;
}
