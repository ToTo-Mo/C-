#include <iostream>
using namespace std;

int main()
{
	int year;
	bool isLeapYear;

	cout<<"연도를 입력하세요 : ";
	cin>>year;

	isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	cout<<(bool)isLeapYear<<endl;

	return 0;
}
