//�������� 3. 0 ~ 9 ������ ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	const int Num = 10;
	int freq[Num] = { 0 };
	int i;

	for (i = 0; i < 100; i++)
		++freq[rand() % Num];

	cout << "��        ��\n";

	for (i = 0; i < Num; i++)
		cout << i << "          " << freq[i] << endl;

	return 0;
}