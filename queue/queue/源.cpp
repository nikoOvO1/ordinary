#include<iostream>
#include<queue>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	queue<Person>q;
	
	Person p1("ÌÆÉ®", 30);
	Person p2("ËïÎò¿Õ", 40);
	Person p3("Öí°Ë½ä", 50);
	Person p4("É³ºÍÉĞ", 60);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << q.size() << endl;
	while (!q.empty())
	{
		cout << q.front().m_Name << q.front().m_Age << endl;
		cout << q.back().m_Name << q.back().m_Age << endl;

		q.pop();
	}
	cout << q.size() << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}