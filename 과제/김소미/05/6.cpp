// �������� 6.���� n�� �Է¹����� ������ ����ϴ� ����� ���α׷��� �ۼ��϶�.(����, main�ȿ� ��������?�ֱ�)

#include <iostream>
using namespace std;

int square(int n);

int main() {
	int n;
	cin >> n;
	cout << square(n) << endl;
}

int square(int n) {
	if (n <= 1) {
		return 1;
	}
	return pow(n, 3) + square(n - 1);
}