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
class Point
{
private:
  int x, y;
public:
  int getX(){return x;}
  int getY(){return y;}
};
int main()
{
  test();
  return 0;
}
