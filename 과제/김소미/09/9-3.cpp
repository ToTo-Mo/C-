//// ��������3. MyArray��� �̸��� Ŭ������ �ۼ��Ͽ� ����. MyArray�� �������� �����ϴ� ���� �迭�� �����Ѵ�.
////��� �����δ� �迭�� ũ�⸦ ��Ÿ���� size�� �������� ������ ����� �޸𸮸� ����Ű�� �ּҸ� ��Ÿ���� ptr�� ������.
////��� �Լ��δ� ������ �߰��ϴ� append(), ������ ������ �����ϴ� pop(), �迭 ���� ������ ����ϴ� print()���� ������. MyArray ��ü�� �����Ͽ� �̸� �׽�Ʈ �϶�.
//
#include <iostream>
#include <string>
#include <array>
using namespace std;

class MyArray {
private:
	int size;
	int ptr;
	int arr;
public:
	//void ptr();
	void size();
};

void MyArray::size() {
	cout << "�Է��� ������ ������ ";
	int n;
	cin >> n;

	int* p;
	p = new int[n];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
	}
	cout << "������� " << n << endl;
}
//
//void append() {
//	cin >> int A;
//	append(n, A);
//}

//void MyArray::ptr() {
//	ptr = *;
//	cout << "�����Ͱ� ����� �޸� �ּҴ� " << ptr << endl;
//}

int main() {
	MyArray m;
	m.size();
}