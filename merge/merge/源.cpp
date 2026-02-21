#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	for(int i = 0 ; i < 10 ; i++){
		v1.push_back(i);
	}
	vector<int>v2;
	for (int i = 10; i < 20; i++) {
		v2.push_back(i);
	}
	vector<int>vTarget;
	vTarget.resize(20);
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), vTarget.end(), print);
	cout << endl;

}

int main() {

	test01();

}