#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	if(number==0){
		cout << "zero";
		return 0;
	}
	char digit1 = number / 10+'0';
	char digit2 = number % 10+'0';
	if(digit1=='0'){
		switch (digit2)
		{
			case '1':
				cout << "one";
				break;
			case '2':
				cout << "two";
				break;
			case '3':
				cout << "three";
				break;
			case '4':
				cout << "four";
				break;
			case '5':
				cout << "five";
				break;
			case '6':
				cout << "six";
				break;
			case '7':
				cout << "seven";
				break;
			case '8':
				cout << "eight";
				break;
			case '9':
				cout << "nine";
				break;
			default:
				cout << "";
				break;
		}
	}

	else if (digit1 == '1')
	{
		switch (digit2)
		{
			case '0':
				cout << "ten";
				break;
			case '1':
				cout << "eleven";
				break;
			case '2':
				cout << "twelve";
				break;
			case '3':
				cout << "thirteen";
				break;
			case '4':
				cout << "fourteen";
				break;
			case '5':
				cout << "fifteen";
				break;
			case '6':
				cout << "sixteen";
				break;
			case '7':
				cout << "seventeen";
				break;
			case '8':
				cout << "eighteen";
				break;
			case '9':
				cout << "nineteen";
				break;
		}
	}
	else
	{
		switch (digit1)
		{
			case '2':
				cout << "twenty";
				break;
			case '3':
				cout << "thirty";
				break;
			case '4':
				cout << "forty";
				break;
			case '5':
				cout << "fifty";
				break;
			case '6':
				cout << "sixty";
				break;
			case '7':
				cout << "seventy";
				break;
			case '8':
				cout << "eighty";
				break;
			case '9':
				cout << "ninety";
				break;
		}
		switch (digit2)
		{
			case '1':
				cout << "-one";
				break;
			case '2':
				cout << "-two";
				break;
			case '3':
				cout << "-three";
				break;
			case '4':
				cout << "-four";
				break;
			case '5':
				cout << "-five";
				break;
			case '6':
				cout << "-six";
				break;
			case '7':
				cout << "-seven";
				break;
			case '8':
				cout << "-eight";
				break;
			case '9':
				cout << "-nine";
				break;
			default:
				cout << "";
				break;
		}
	}
	return 0;
}
