//�������� 2. 1�� ������ �����Ͽ� 2�� ���͸� �����ϴ� �Լ� int dotProduct(int a[], int b[], int size)�� �ۼ��϶�.
//������ ������ ������ ����.

#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
int dotProduct(int a[], int b[], int size);
int dotPro = 0;

int main() {
	srand(time(NULL));
	const int size = 3;
	int a[size] = { rand() % 50, rand() % 50, rand() % 50 };
	int b[size] = { rand() % 50, rand() % 50, rand() % 50 };

	dotProduct(a, b, size);
}

int dotProduct(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		dotPro += a[i] * b[i];
		cout << "a[" << i + 1 << "]��" << a[i] << ", b[" << i + 1 << "]��" << b[i] << "�̴�." << endl;
	}cout << "���� ���� " << dotPro << "�̴�" << endl;

	return 0;
}

