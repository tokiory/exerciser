int bin_search(int nums[], int len, int target) {
  int low = 0, high = len - 1;

  while (low <= high) {
    int medium = (low + high) / 2;
    int el = nums[medium];

    if (el == target) {
      return medium;
    } else if (target < el) {
      high = medium - 1;
    } else {
      low = medium + 1;
    }
  }

  return -1;
}
