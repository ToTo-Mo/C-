// �������� 2. ���� ����� ����غ���. �������� ���� 2�ð��� 3000���̴�.
//�� ���� ���ʹ� �ð��� 2000���� �����ᰡ �ΰ��ȴ�. �� ������� �Ϸ� ���� 10000���� ���� �ʴ´�. ���� �ð��� �־����� ����� ����ϴ� �Լ��� ����� ���α׷��� �ۼ��϶�.
//(����)

#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int rate = 2000;
	int pay = 0;
	int hour;

	cout << "enter the parking time" << endl;
	cin >> hour;
	pay = (hour-2) * 2000 + 3000;

	if (hour >= 2 && pay >= 10000) {
		pay = 10000;
		cout << "Your parking fee is 10,000 won " << endl;
	}
	else if (hour >= 2) {
		pay = (hour-2) * 2000 + 3000;
		cout << "Your parking fee is " << pay << "won" << endl;
	}else{
        pay += 3000;
    }
}


