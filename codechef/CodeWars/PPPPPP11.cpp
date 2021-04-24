#include <bits/stdc++.h>
using namespace std;

struct workshop {
	int start;
	int end;
	int pos;
};
bool comparator(struct workshop m1, workshop m2)
{
	return (m1.end < m2.end);
}
void maxWorkshop(int s[], int f[], int n)
{
	struct workshop attend[n];
	for (int i = 0; i < n; i++)
	{
		attend[i].start = s[i];
		attend[i].end = f[i];
		attend[i].pos = i + 1;
	}
	sort(attend, attend + n, comparator);
	vector<int> m;
	m.push_back(attend[0].pos);
	int time_limit = attend[0].end;
	for (int i = 1; i < n; i++) {
		if (attend[i].start >= time_limit)
		{
			m.push_back(attend[i].pos);
			time_limit = attend[i].end;
		}
	}
	
    cout<<m.size()<<endl;
    //for (int i = 0; i < m.size(); i++) {
	//	cout << m[i] << " ";
	//}
}
int main()
{
    int x;
    cin>>x;
    int s[x], f[x];
    for(int i=0; i<x; i++)
        cin>>s[i]>>f[i];
	int n = sizeof(s) / sizeof(s[0]);
	maxWorkshop(s, f, n);
    return 0;
}

