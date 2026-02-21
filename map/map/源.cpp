#include<iostream>
#include<map>
using namespace std;

void print(map<int , int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << it->second << endl;
	}
}

void test01()
{

	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	print(m);

	
}

int main() {

	test01();

}