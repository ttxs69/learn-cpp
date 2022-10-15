#include "binarySearch.h"
#include "maxProfit2.h"
#include "removeDuplicates.h"
#include "rotate.h"
#include <gtest/gtest.h>
#include <vector>
// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(BinarySearchTest, BinarySearchWithWhileNormal) {
  std::vector<int> normal = {1, 2, 3, 4, 5};
  EXPECT_EQ(BinarySearchWithWhile(normal, 2), 1)
      << "2 should be found at 1, but output is "
      << BinarySearchWithWhile(normal, 2);
}

TEST(BinarySearchTest, BinarySearchWithWhileNotFound) {
  std::vector<int> normal = {1, 2, 3, 4, 5};
  EXPECT_EQ(BinarySearchWithWhile(normal, 6), -1)
      << "6 should not be found, but result is "
      << BinarySearchWithWhile(normal, 6);
}

TEST(RemoveDuplicatesTest, RemoveDuplicatesTest1) {
  std::vector<int> origin = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  std::vector<int> expected = {0, 1, 2, 3, 4};
  size_t size = removeDuplicates(origin);
  for (size_t i = 0; i < size; i++) {
    EXPECT_EQ(origin[i], expected[i]);
  }
}

TEST(maxProfit2Test, maxProfit2Test_Test1) {
  std::vector<int> prices = {7, 1, 5, 3, 6, 4};
  int expected = 7;
  int result = maxProfit2(prices);
  EXPECT_EQ(result, expected);
}

TEST(maxProfit2Test, maxProfit2Test_Test2) {
  std::vector<int> prices = {1, 2, 3, 4, 5};
  int expected = 4;
  int result = maxProfit2(prices);
  EXPECT_EQ(result, expected);
}

TEST(maxProfit2Test, maxProfit2Test_Test3) {
  std::vector<int> prices = {7, 6, 4, 3, 1};
  int expected = 0;
  int result = maxProfit2(prices);
  EXPECT_EQ(result, expected);
}

TEST(rotate1Test, rotate1Test_Test1) {
  std::vector<int> before = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  rotate1(before, k);
  std::vector<int> expected = {5, 6, 7, 1, 2, 3, 4};
  EXPECT_EQ(before, expected);
}

TEST(rotate1Test, rotate1Test_Test2) {
  std::vector<int> before = {-1, -100, 3, 99};
  int k = 2;
  rotate1(before, k);
  std::vector<int> expected = {3, 99, -1, -100};
  EXPECT_EQ(before, expected);
}

TEST(rotate2Test, rotate2Test_Test1) {
  std::vector<int> before = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  rotate2(before, k);
  std::vector<int> expected = {5, 6, 7, 1, 2, 3, 4};
  EXPECT_EQ(before, expected);
}

TEST(rotate2Test, rotate2Test_Test2) {
  std::vector<int> before = {-1, -100, 3, 99};
  int k = 2;
  rotate2(before, k);
  std::vector<int> expected = {3, 99, -1, -100};
  EXPECT_EQ(before, expected);
}

TEST(rotate3Test, rotate3Test_Test1) {
  std::vector<int> before = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  rotate3(before, k);
  std::vector<int> expected = {5, 6, 7, 1, 2, 3, 4};
  EXPECT_EQ(before, expected);
}

TEST(rotate3Test, rotate3Test_Test2) {
  std::vector<int> before = {-1, -100, 3, 99};
  int k = 2;
  rotate3(before, k);
  std::vector<int> expected = {3, 99, -1, -100};
  EXPECT_EQ(before, expected);
}

TEST(rotate4Test, rotate4Test_Test1) {
  std::vector<int> before = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  rotate4(before, k);
  std::vector<int> expected = {5, 6, 7, 1, 2, 3, 4};
  EXPECT_EQ(before, expected);
}

TEST(rotate4Test, rotate4Test_Test2) {
  std::vector<int> before = {-1, -100, 3, 99};
  int k = 2;
  rotate4(before, k);
  std::vector<int> expected = {3, 99, -1, -100};
  EXPECT_EQ(before, expected);
}