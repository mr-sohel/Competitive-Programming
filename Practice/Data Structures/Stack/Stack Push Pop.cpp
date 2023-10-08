// stack::push/pop
#include <iostream>       // std::cout
#include <stack>          // std::stack
using namespace std;
int main ()
{
  std::stack<int> mystack;
  int n;
  for (int i = 0; i < 5; ++i)
  {
    cin >> n;
    mystack.push(n);
  }


  for (int i = 4; i >= 0; i--)
    std::cout << mystack.top() - i << ' ';

  std::cout << "\nPopping out elements...";
  while (!mystack.empty())
  {
    std::cout << ' ' << mystack.top();
    mystack.pop();
  }
  std::cout << '\n';

  return 0;
}
