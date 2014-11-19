#include <iostream>
#include <cstring>
using namespace std;
int strStr(char* haystack,char* needle);
int main()
{
	char str_1[20];
	char str_2[20];
	cout << "enter first string: ";
	cin.getline(str_1,20);
	cout << "enter second string: ";
	cin.getline(str_2,20);
	cout << strStr(str_1,str_2) << " index." << endl;
	return 0;	
}

int strStr(char* haystack, char* needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);
	for (int i = 0; i < haystack_len - needle_len + 1; i++)
	{
		int j = 0;
		int index = i;
		for (j = 0; j < needle_len; j++,index++)
		{
			if (haystack[index] == needle[j])
				continue;
			else
				break;
		}	
		if (j == needle_len)
			return i;
	}
	return -1;
}
