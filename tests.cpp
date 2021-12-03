#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A") {
	std::vector<int> a = makeVector(10);

    for(int i = 0; i< a.size(); i++) {
		CHECK(a[i] == i);
	}
}

TEST_CASE("Task B") {
	std::vector<int> v{1,2,-1,3,4,-1,6};

    std::vector<int> result = goodVibes(v); // returns [1,2,3,4,6]
    CHECK(result[0] == 1);
	CHECK(result[1] == 2);
	CHECK(result[2] == 3);
	CHECK(result[3] == 4);
   	CHECK(result[4] == 6);

	CHECK(result.size() == 5);
}

TEST_CASE("Task C") {

    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};

    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
   	
	CHECK(v1.size() == 5);
	CHECK(v1[0] == 1);
	CHECK(v1[1] == 2);
 	CHECK(v1[2] == 3); 
 	CHECK(v1[3] == 4);
	CHECK(v1[4] == 5);

	//check v2 is empty becuase it was passed by reference and cleared
	CHECK(v2.size() == 0);

}

TEST_CASE("Task D") {
	std::vector<int> a{1,2,3};
    std::vector<int> b{4,5};

    std::vector<int> result;
    result = sumPairWise(a, b); // returns [5, 7, 3]


	CHECK(result[0] == 5);
	CHECK(result[1] == 7);
	CHECK(result[2] == 3);
	CHECK(result.size() == 3);
	
	//switched order of inputs of the vectors
	std::vector<int> result2;
	result2 = sumPairWise(b, a); // returns [5, 7, 3]
    

    CHECK(result2[0] == 5);
    CHECK(result2[1] == 7);
    CHECK(result2[2] == 3);
    CHECK(result2.size() == 3);
	
	
}
