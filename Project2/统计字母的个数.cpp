#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int lett[26] = { 0 };
	char str[500];

	//puts(str);
	cout << "输入字符串:" << endl;
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
	cout << "各字母个数统计结果为:" << endl;
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
	//每行10个的形式输出统计结果 
	//end
	system("pause");
	return 0;
}