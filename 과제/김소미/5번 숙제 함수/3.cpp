// �������� 3.������ �޴� �ý����� �ۼ��غ���. �޴��� �����ְ� ����ڷ� ���� �Է��� �޾Ƽ� �Է��� �ùٸ��� �˻��Ѵ�.
//�޴��� �����ϸ� ������ ó���� �ʿ�� ���� ���õǾ��ٴ� �޽����� �����ָ� �ȴ�.(���� �ٵ� 3���ۿ� �ȵ�)

#include <iostream>
using namespace std;
int menu;
int printMenu();
int getMenuNumber();
int answer();

int main()
{
    printMenu();
    while (menu < 1 || menu > 4)
    {
        getMenuNumber();
        return getMenuNumber();
    }
    while (menu >= 1 && menu <= 4)
    {
        answer();
        return 0;
    }
}

int printMenu()
{
    cout << "1. ¥���" << endl;
    cout << "2. «��" << endl;
    cout << "3. ������" << endl;
    cout << "4. ������" << endl;
    cout << "���ϴ� �޴��� �����ϼ��� : ";
    cin >> menu;
    return 0;
}

int getMenuNumber()
{
    if (menu < 1 || menu > 4)
    {
        cout << "We don't have this menu" << endl;
        printMenu();
        return 0;
    }
}

int answer()
{
    if (menu >= 1 && menu <= 4)
    {
        cout << "Ok, Prepare good food for you" << endl;
        return 0;
    }
}