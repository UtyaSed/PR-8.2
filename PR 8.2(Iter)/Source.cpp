// Lab_8_2.cpp
// ������ ³����
// ����������� ������ � 8.2
// ����������� ������� �����
// ������ 7

#include <iostream>

using namespace std;

int Count(const char* s, const char c)
{
	int k = 0;
	for (int i = strlen(s)-1; !isspace(s[i]) && i >= 0; i--)
		if (c == s[i])
			k++;
	return k;
}

int main()
{
	char s[101] = "shaaow daefolt granad fasatatar";
	char c = 'a';
	cout << Count(s, c) << endl;
	return 0;
}