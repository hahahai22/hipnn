#include <iostream>
using namespace std;
void test()
{
  int a = 10;
  return a;
}
int add(int a, int b)
{
  int c = a + b;
}
int multi(int a, int b)
{
  int c = a * b;
  return c;
}

int main()
{
  int a = 128;
  int b = 11;
  add(a, b);
  test();
  return 0;
}
