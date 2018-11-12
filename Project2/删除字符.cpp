#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[80];
	int i;
	cout << "ÊäÈë×Ö·û´®Îª:" << endl;
	//start
	//ÊäÈë×Ö·û´®
	cin.getline(s, 81);
	for (i = 1; i <= 80; i++)
	{
		if (s[i] == 'T')
			for (int n = i; n <= 80; n++)
			{
				s[n] = s[n + 1];
				i--;
			}
	}
	//É¾³ý×Ö·û'T'
	//endA
	cout << "É¾³ý'T'×Ö·ûºóµÄ×Ö·û´®:";
	cout << s << endl;
	return 0;
}