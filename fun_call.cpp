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
  int a = 128;
  int b = 11;
  add(a, b);
  test();


  int a = 12;
  int b = 15;
  max(a, b);
  return 0;
}
