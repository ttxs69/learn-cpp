#include <vector>
template <class T>
long BinarySearchWithWhile(std::vector<T> &container, T target) {
  long left = 0;
  long right = container.size() - 1;
  while (left <= right) {
    long mid = (left + right) / 2;
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
