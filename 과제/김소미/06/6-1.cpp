//�������� 1.1���� �迭�� ���Ͷ�� �Ҹ���.
//2�� ���͸� ���ϴ� �Լ��� void add(int a[], int b[], int size)�� �ۼ��϶�. �� ������ ���� �迭 a�� ����ȴ�.

#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
void add(int a[], int b[], int size);
void print(int a[], int size);

int main() {
	srand(time(NULL));
	const int size = 3;
	int a[size] = { rand() % 50, rand() % 50, rand() % 50 };
	int b[size] = { rand() % 50, rand() % 50, rand() % 50 };

	add(a, b, size);
}

void add(int a[], int b[], int size) {
	for (int i = 0; i < size; i++)
	{
		a[i] += b[i];
		cout << "a[" << i+1 << "]��" << a[i] <<", b["<<i+1<<"]��"<<b[i]<<"�̹Ƿ� �� a"<<i+1<<"+ b"<<i+1<<"�� "<<a[i]<< endl;
	}
}

void print(int a[], int size){
	cout<<"(";

	for(int i=0; i<size; i++){
		cout<<a[i];

		if(i!= size-1)
			cout<<", ";
	}

	cout<<")"<<endl;
}

