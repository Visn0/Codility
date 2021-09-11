/*
A non-empty array A consisting of N integers is given.

A permutation is a sequence containing each element from 1 to N once, and only once.

For example, array A such that:

    A[0] = 4
    A[1] = 1
    A[2] = 3
    A[3] = 2
is a permutation, but array A such that:

    A[0] = 4
    A[1] = 1
    A[2] = 3
is not a permutation, because value 2 is missing.

The goal is to check whether array A is a permutation.

Write a function:

int solution(vector<int> &A);

that, given an array A, returns 1 if array A is a permutation and 0 if it is not.

For example, given array A such that:

    A[0] = 4
    A[1] = 1
    A[2] = 3
    A[3] = 2
the function should return 1.

Given array A such that:

    A[0] = 4
    A[1] = 1
    A[2] = 3
the function should return 0.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [1..1,000,000,000].
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <numeric> //std::accumulate
#include <climits> //X_MAX

using namespace std;

template <class T>
void printv(int A)
{
  cout << A << endl;
}

template <class... Args>
void printv(int A, Args... args)
{
  cout << A << " ";
  printv(args...);
}

template <class Container>
void printv(Container A)
{
  for (auto v : A)
  {
    cout << v << " ";
  }
  cout << endl;
}

int solution(vector<int> &A)
{
  std::unordered_set<int> s;
  int size = A.size();
  for (size_t i = 0; i < size; i++)
  {
    if (A[i] <= size)
    {
      s.insert(A[i]);
    }
  }
  return (s.size() == size);
}

int main()
{
  vector<int> array({4, 1, 3, 2});
  printv(array);
  cout << solution(array) << endl;
}
