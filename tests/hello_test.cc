#include "binarySearch.h"
#include "removeDuplicates.h"
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