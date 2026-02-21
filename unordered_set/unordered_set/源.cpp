#include <iostream>
#include <unordered_set>

int main() {
	//定义一个unordered_set
	std::unordered_set<int> mySet;

	//插入元素
	mySet.insert(1);
	mySet.insert(2);
	mySet.insert(3);

	auto it = mySet.find(2);
	if (it != mySet.end()) {
		std::cout << "found element:" << *it << std::endl;
	}
	else {
		std::cout << "element not found" << std::endl;
	}

	mySet.erase(3);

	for (auto element : mySet) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	return 0;
}