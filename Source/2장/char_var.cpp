#include <iostream>
using namespace std;	// 이름 공간 설정

int main()
{
	char c;		// 변수 선언
	int code;

	cout << "문자를 입력하시오: ";		// 입력 안내문
	cin >> c;
	
	code = c;

	cout<<c<<"의 아스키 코드 = "<<code<<endl;

	
	c = c + 1;
	code = c;

	cout<<c<<"의 아스키 코드 = "<<code<<endl;

	return 0;
}
