// �������� 3.����ڷκ��� �Է� ���� ���ڿ����� ���ĺ��� ����, ������ ����, ���� ������ ������ ����ϴ� ���α׷��� �ۼ��غ���.
// ������� "2020 kumoh university"��� �Է��ϸ� ���ĺ��� ������ 15, ������ ������ 4, ������ ������ 2�̴�.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	getline(cin, word);
	int cnt = 0;
	int num = 0;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] == ' ') cnt++;
		else if (word[i] >= '0' && word[i] <= '9') num++;
	}

	cout << "���ĺ��� ������ " << word.size() << endl;
	cout << "������ ������ " << num << endl;
	cout << "������ ������ " << cnt << endl;
}