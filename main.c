#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using std::vector;

int main(int argc, char* argv[])
{
//	auto str = "Hello,World" ;
//	printf("str=%s\n", str);
	//int x = 3;
	//decltype(x) y = x;
	//vector<int> vecTmp;
	//for(auto i=0;i<10;i++)
	//{
//		vecTmp.push_back(i);
//	}
	
//	for(auto i : vecTmp)
//	{
//		std::cout << i << std::endl;
//	}
		
	vector<int> iv{5, 4, 3, 2, 1};
	int a = 2;
	int b = 1;
	for_each(iv.begin(), iv.end(), [=](int&x)->int{
		std::cout << a + x << std::endl;
	});
	return 0;
}
