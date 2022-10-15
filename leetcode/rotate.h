#include <algorithm>
#include <vector>

/**
 * @brief rotate1 :using the temp space
 *
 * @param nums
 * @param k
 */
void rotate1(std::vector<int> &nums, int k) {
  size_t size = nums.size();
  // count of the numbers to be moved
  size_t count = k % size;
  // move tail to temp vector
  std::vector<int> temp(count);
  for (size_t i = 0; i < count; i++) {
    temp[i] = nums[size - count + i];
  }
  // calc remain
  size_t remain = size - count;
  // rotate remain, from the latter
  for (int i = remain - 1; i >= 0; i--) {
    nums[count + i] = nums[i];
  }
  // copy temp to head
  for (size_t i = 0; i < count; i++) {
    nums[i] = temp[i];
  }
}
/**
 * @brief using reverse to rotate
 *
 * @param nums
 * @param k
 */
void rotate2(std::vector<int> &nums, int k) {
  int size = nums.size();
  int step = k % size;
  std::reverse(nums.begin(), nums.end());
  auto it = nums.begin();
  it += step;
  std::reverse(nums.begin(), it);
  std::reverse(it, nums.end());
}

void rotate3_helper(std::vector<int> &nums) {
  int size = nums.size();
  // if only one item, return
  if (size < 2) {
    return;
  }
  // else, rotate 1 step
  int temp = nums[size - 1];
  for (int i = size - 2; i >= 0; i--) {
    nums[i + 1] = nums[i];
  }
  nums[0] = temp;
}

/**
 * @brief rotate one position every time :over time
 *
 * @param nums
 * @param k
 */
void rotate3(std::vector<int> &nums, int k) {
  int step = k % nums.size();
  for (int i = 0; i < step; i++) {
    rotate3_helper(nums);
  }
}
/**
 * @brief direct move
 *
 * @param nums
 * @param k
 */
void rotate4(std::vector<int> &nums, int k) {
  int size = nums.size();
  int step = k % size;
  int index = 0;
  std::vector<bool> visited(size, false);
  int count = 0;
  while (count < size) {
    int from = nums[index];
    int target = index + step;
    int hold = 0;
    while (!visited[index]) {
      // set flag
      visited[index] = true;
      count++;
      // save origin
      hold = nums[target];
      // assign
      nums[target] = from;
      // update index
      index = target;
      // update from
      from = hold;
      // calc new target
      target = (target + step) % size;
    }
    index++;
  }
}