// �������� 5.�� ������ �Է��ϸ� �� ���� ���̿� ���ϴ� �� �� �ϳ��� �������� ��ȯ�ϴ� �Լ� int randInt(int a, int b)�� �ۼ��Ͽ� ����.
//randInt(1,3)�̶�� 1���� 3���� �� �� �ϳ��� �������� ��ȯ�Ѵ�.(����)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randlnt(int a, int b);


int main() {
    srand(time(NULL));
	int random = rand();
	cout << random << endl;
}