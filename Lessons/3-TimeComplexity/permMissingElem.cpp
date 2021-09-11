/*
An array A consisting of N different integers is given.
The array contains integers in the range [1..(N + 1)],
which means that exactly one element is missing.

Your goal is to find that missing element.

Write a function:

int solution(vector<int> &A);

that, given an array A, returns the value of the missing element.

For example, given array A such that:

  A[0] = 2
  A[1] = 3
  A[2] = 1
  A[3] = 5
the function should return 4, as it is the missing element.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [0..100,000];
the elements of A are all distinct;
each element of array A is an integer within the range [1..(N + 1)].
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> &A)
{
  long long n = A.size() + 1;      // +missing elem
  long long sum = n * (n + 1) / 2; // summatory if all elem are present
  long long realSum = 0;
  for (int v : A)
  {
    realSum += v;
  }
  return int(sum - realSum);
}

int main()
{
  vector<int> array({2, 3, 1, 5});
  for (int v : array)
  {
    cout << v << " ";
  }
  cout << endl;
  cout << solution(array) << endl;
}
