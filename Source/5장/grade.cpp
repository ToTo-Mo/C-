#include <iostream>
using namespace std;

void main(void)
{
	const int STUDENTS=5;
	int grade[STUDENTS];
	int sum = 0;
	double average;
	
	for(int i = 0; i < STUDENTS; i++)
	{
		cout << "�л����� ������ �Է��Ͻÿ�: ";	
		cin >> grade[i];
	}

	for(int i = 0; i < STUDENTS; i++)
		sum += grade[i];

	average = sum / STUDENTS;
	cout << "���� ���= " << average << endl;
}