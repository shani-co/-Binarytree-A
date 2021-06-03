#include "sources/BinaryTree.hpp"
#include "doctest.h"


TEST_CASE("Good post code") {
	ariel::BinaryTree<char> ShaniTree;
	ShaniTree.add_root('S').add_right('S','i')
	.add_left('S','h').add_left('h','a').add_right('h','n');

	ariel::BinaryTree<int> IntTree;
	IntTree.add_root(0).add_right(0,1)
	.add_left(0,2).add_left(1,3).add_right(2,4);

	int sum=0;
	std::string preorder_test,postorder_test,inorder_test;
	for (auto it=ShaniTree.begin_preorder(); it!=ShaniTree.end_preorder(); ++it) {
		char letter =(*it);
		std::cout << letter;
    	preorder_test.push_back(letter);
 	}
	 std::cout << std::endl;
	CHECK(preorder_test.compare("Shani"));
	for (auto it=ShaniTree.begin_postorder(); it!=ShaniTree.end_preorder(); ++it) {
		char letter =(*it);
		std::cout << letter;
    	postorder_test.push_back(letter);
 	}
	 std::cout << std::endl;	
	
	CHECK(postorder_test.compare("anhiS"));
	for (auto it=ShaniTree.begin_inorder(); it!=ShaniTree.end_preorder(); ++it) {
		char letter =(*it);
		std::cout << letter;
    	inorder_test.push_back(letter);
 	}
	 std::cout << std::endl;
	CHECK(inorder_test.compare("ahnSi"));
	// for (auto it=IntTree.begin_postorder(); it!=IntTree.end_preorder(); ++it) {
	// 	sum=sum+(*it);
 	// }
	for (const char& element: ShaniTree) {  // this should work like inorder
    sum =sum +element;
  	}
	for (const int& element: IntTree) {  // this should work like inorder
    sum =sum +element;
  	}
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(inorder_test.compare("ahnSi"));
	CHECK(sum == 10);
}