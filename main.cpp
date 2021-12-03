#include <iostream>
#include "funcs.h"

int main() {
	std::cout << "Task A -------------------------------------------------" << std::endl;
	std::cout << "Calling makeVector(10) ";
	std::vector<int> a = makeVector(10);
	std::cout << "Printing the returned vector" << std::endl;

	for(int i = 0; i< a.size(); i++) {
		std::cout << a[i] << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "Task B -------------------------------------------------" << std::endl;
	
	std::vector<int> v{1,2,-1,3,4,-1,6};
	
	std::cout << "Calling goodVibes with vector[1,2,-1,3,4,-1,6]" << std::endl;
	std::vector<int> result = goodVibes(v); // returns [1,2,3,4,6]
	std::cout << "Printing the returned vector" << std::endl;
	for(int i = 0; i<result.size(); i++) {
		std::cout << result[i] << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "Task C -------------------------------------------------" << std::endl;
	
	std::cout << "Calling gogeta(v1, v2) v1[1,2,3] v2[4,5]" << std::endl;
	std::vector<int> v1{1,2,3};
	std::vector<int> v2{4,5};

	gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
	std::cout << "Printing the changed vectors" << std::endl;
	std::cout << "\nv1" << std::endl;
	for(int i = 0; i<v1.size(); i++) {
		std::cout << v1[i] << std::endl;
	}

	std::cout << "\nv2" << std::endl;
	for(int i = 0; i<v2.size(); i++) {
        std::cout << v2[i] << std::endl;
    }
	
	std::cout << std::endl;
	std::cout << "Task D --------------------------------------------------" << std::endl;
	
	std::cout << "Calling sumPairWise(v3, v4) v3[1,2,3] v4[4,5]" << std::endl;
	std::vector<int> v3{1,2,3};
	std::vector<int> v4{4,5};

	std::vector<int> result2;
	result2 = sumPairWise(v3, v4); // returns [5, 7, 3]
	std::cout << "Printing the returned vector" << std::endl;
	
	for(int i = 0; i<result2.size(); i++) {
       std::cout << result2[i] << std::endl;
    }
	
	return 0;
}
