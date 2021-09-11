/*

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
}

int solution(vector<int> &A)
{
  int sol = 0;
  return sol;
}

int main()
{
  vector<int> array({});
  printv(array);
  cout << solution(array) << endl;
}
