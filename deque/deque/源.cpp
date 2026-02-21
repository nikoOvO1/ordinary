#include<iostream>
#include<deque>
using namespace std;


void print(deque<int>&d) 
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

void test01()
{
	
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
		
	}
	print(d1);
}

int main() {

	test01();

}