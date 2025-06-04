# Distinct 2 Subarray

This C++ code processes multiple test cases, and for each case, it finds the **length of the shortest subarray that contains exactly two distinct numbers**. If no such subarray exists, it prints `-1`.

---

### 🧩 Step-by-Step Explanation:

1. **Input & Setup:**

   ```cpp
   int T; cin >> T;
   ```

   * `T` is the number of test cases.
   * For each test case, it reads an integer `N` (array size), then the array `A`.

2. **Finding Shortest Subarray with Exactly 2 Distinct Elements:**

   ```cpp
   int ans = N + 1;
   ```

   * `ans` is initialized to a large value to track the shortest valid subarray.
   * The outer loop fixes a starting point `i`, and the inner loop expands to the right from `i` to find subarrays.

3. **Using an Unordered Set to Track Unique Elements:**

   ```cpp
   unordered_set<int> s;
   ```

   * For each subarray starting at `i`, elements from `A[i]` to `A[j]` are added to a set `s`.
   * The size of the set tells how many distinct elements are in the subarray.

4. **Decision Logic:**

   ```cpp
   if (s.size() == 2)
       ans = min(ans, j - i + 1);
   else if (s.size() > 2)
       break;
   ```

   * If exactly 2 distinct elements: update `ans`.
   * If more than 2: stop checking this subarray (it can’t become valid again).

5. **Output:**

   ```cpp
   if (ans == N + 1)
       cout << -1 << endl;
   else
       cout << ans << endl;
   ```

   * If no valid subarray was found, print `-1`.
   * Otherwise, print the length of the shortest one.

---

### 💡 Summary:

This program handles multiple test cases and, for each one, finds the shortest subarray that contains exactly two different numbers. It reads an array and uses nested loops to check all subarrays. An unordered set keeps track of how many unique numbers are in the current subarray.

If the set reaches exactly two distinct numbers, the program updates the minimum length found so far. If it finds more than two, it stops checking that subarray. At the end of each test case, it prints the shortest length found or -1 if no such subarray exists.
