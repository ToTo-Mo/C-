// �������� 4.���� �����ϴ� ���α׷��� �ۼ��غ���. ���� �����ϴ� �Լ� int save(int amount)�� �̿��غ���.(void draw�� �������� ��)

#include <iostream>
using namespace std;
int amount;
int sum=0;
int save(int amount);
void draw(int amount);

int main() {
	cout << "How much do you want to save?(Finish is -1)" << endl;
	
	cin >> amount;
    while (amount != -1) {
		save(amount);
	} cout << "Finish" << endl; // -1�־ ������ �ȵǳ׿��
}

int save(int amount) {
	sum += amount;
	cout << "All save is " << sum << "won" << endl;
	return sum;
}

void draw(int amount) {
	sum -= amount;
	cout << "All draw is " << sum << "won" << endl;
}