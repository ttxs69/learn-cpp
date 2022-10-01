#include <vector>
template <class T>
ssize_t BinarySearchWithWhile(std::vector<T> &container, T target) {
  ssize_t left = 0;
  ssize_t right = container.size() - 1;
  while (left <= right) {
    ssize_t mid = (left + right) / 2;
    if (container[mid] == target) {
      return mid;
    }
    if (target < container[mid]) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return -1;
}
