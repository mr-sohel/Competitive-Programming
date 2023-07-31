#include <iostream>
using namespace std;
#include <array>

int main()
{
  array<int, 5> first;
  array<int, 5> second; // = {11, 22, 33, 44, 55};
  cin >> first[0] >> first[1] >> first[2] >> first[3] >> first[4];
  cin >> second[0] >> second[1] >> second[2] >> second[3] >> second[4];
  first.swap(second);

  cout << "first:";
  for (auto x : first)
    cout << ' ' << x;
  cout << '\n';

  cout << "second:";
  for (auto x : second)
    cout << ' ' << x;
  cout << '\n';

  return 0;
}
