#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Transfrom
{
public:
	int operator()(int v)
	{
		return v+100;
	}
};

class print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;
	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), Transfrom());

	for_each(vTarget.begin(), vTarget.end(), print());
	cout << endl;
}

int main() {

	test01();

}