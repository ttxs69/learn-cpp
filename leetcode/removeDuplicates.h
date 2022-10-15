#include <vector>

int removeDuplicates(std::vector<int> &nums) {
  size_t count = nums.size();
  // 数组只有一个元素，直接返回
  if (count < 2) {
    return count;
  }
  // size bigger than 1
  int index = 1;
  int pre = nums[0];
  for (size_t i = 1; i < count; i++) {
    // if latter is the same with pre
    if (pre == nums[i]) {
      continue;
    } else {
      // !! index++
      nums[index++] = nums[i];
      pre = nums[i];
    }
  }
  // !! index already ++
  return index;
}