#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int lett[26] = { 0 };
	char str[500];

	//puts(str);
	cout << "�����ַ���:" << endl;
	gets_s(str);
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = tolower(str[i]);
	}
	//puts(str);
	for (int k = 0; k < 26; k++)
	{
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == 97 + k)
				lett[k]++;
		}
	}
	cout << "����ĸ����ͳ�ƽ��Ϊ:" << endl;
	char letter = 65;
	int sum = 0;
	for (int m = 0; m < 26; m++)
	{
		cout << letter << ":" << lett[m] << ",";
		letter++;
		sum++;
		if (sum == 10)
		{
			cout << endl;
			sum = 0;
		}
	}

	//start
	//ÿ��10������ʽ���ͳ�ƽ�� 
	//end
	system("pause");
	return 0;
}