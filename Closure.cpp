#include <iostream>
#include <vector>
#include <functional>
using namespace std;
//
//bool isStringStartWithB(string item) {
//
//	return item.find("B") == 0;
//}
//bool isStringStartWithM(string item) {
//
//	return item.find("M") == 0;
//}

std::function<bool(string)> isStringStartWithAny(string startsWith) {
	
	std::function<bool(string)> predicate = [startsWith](string item)->bool {
				return  item.find(startsWith) == 0;
	};

	return predicate;
}

vector<string> query(string source[], std::function<bool(string)> predicate) {
	vector<string> result;
	for (int i = 0;i<4;i++) {

		if (predicate(source[i])) {
			result.push_back(source[i]);
		}
	}
	return result;
}
class IStringFilter {
public:
	virtual ~IStringFilter() {}
	virtual bool filter(string& item) = 0;

};

class StrigStartsWithBFilter :public IStringFilter {
public:
	bool filter(string& item) {
		 return item.find("B") == 0;
	}
};


vector<string> queryUsingOOP(string source[],IStringFilter* predicate) {
	vector<string> result;
	for (int i = 0; i < 4; i++) {

		if (predicate->filter(source[i])) {
			result.push_back(source[i]);
		}
	}
	return result;
}

int main() {

	
	string names[4] = { "Bosch","Bangalore","Mysore","Chennai" };
		std::function<bool(string)> predicate = isStringStartWithAny("B");
	vector<string> result=query(names,predicate);
	for (string item : result) {
		cout << item<<endl;
	}

	 predicate = isStringStartWithAny("M");
	 result = query(names, predicate);
	for (string item : result) {
		cout << item << endl;
	}

	
	StrigStartsWithBFilter filter1;
		result=queryUsingOOP(names, &filter1);
for (string item : result) {
	cout << item << endl;
}

}
