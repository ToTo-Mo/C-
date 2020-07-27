#include <iostream>
using namespace std;
#include <cmath>
int BINARY;

void BINARYCHANGE(int DECIMAL)
{
	const int size = log2(DECIMAL);
	int BINARY[64];
	int NUM = DECIMAL;

	for (int i = size; i >= 0; i--)
	{
		int j = size - i;
		if (NUM / pow(2, i) >= 1)
		{
			NUM = NUM - pow(2, i);
			BINARY[j] = 1;
		}
		else
		{
			BINARY[j] = 0;
		}
	}
	cout << DECIMAL << "을 2진수로 변환하면 : ";
	for (int i = 0; i <= size; i++)
	{
		cout << BINARY[i];
	}
}

void toBinary(int decimal, int binary[], int size)
{

	for (int i = 0; i < size && decimal > 0; i++)
	{
		binary[i] = decimal % 2;
		decimal /= 2;
	}
}

int main()
{

	const int size = 64;
	int binary[size] = {0};

	while (1)
	{
		int decimal;
		cin >> decimal;

		// 2진수 변환
		toBinary(decimal, binary, size);

		// 배열 출력
		for (int i = log2(decimal); i >= 0; i--)
			cout << binary[i];

		cout<<endl;


		// 배열 초기화
		for(int i=0; i<size; i++)
			binary[i] = 0;
	}

	BINARYCHANGE(11);
	return 0;
}
