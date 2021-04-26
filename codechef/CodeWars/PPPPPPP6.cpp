// Time Limit Exceeded in Contest, 1.01s in Codechef.


#include <bits/stdc++.h>
using namespace std;

void printSubStr(string str, int low, int high)
{
	for (int i = low; i <= high; ++i)
		cout << str[i];
}

int longestPalSubstr(string str)
{

	int maxLength = 1;

	int start = 0;
	int len = str.length();

	int low, high;

	for (int i = 1; i < len; ++i) {
		low = i - 1;
		high = i;
		while (low >= 0 && high < len
			&& str[low] == str[high]) {
			if (high - low + 1 > maxLength) {
				start = low;
				maxLength = high - low + 1;
			}
			--low;
			++high;
		}

		low = i - 1;
		high = i + 1;
		while (low >= 0 && high < len
			&& str[low] == str[high]) {
			if (high - low + 1 > maxLength) {
				start = low;
				maxLength = high - low + 1;
			}
			--low;
			++high;
		}
	}

	printSubStr(str, start, start + maxLength - 1);
	return maxLength;
}

int main()
{
	string str;
    cin>>str;
    int len = longestPalSubstr(str);
	return 0;
}
