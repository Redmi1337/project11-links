#include <iostream>

template<typename T>
void Foo(T &a)
{
  a = 2;
}

template<typename T>
void PFoo(T *pa)
{
  *pa = 1;
}

void Foo2(int &a, int &b, int &c)
{
  a *= 2;
  b %= 2;
  c += 48;
}

template<typename T>
void Swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{
  int value = 7;
  std::cout << value << std::endl;
  Foo(value);
  std::cout << value << std::endl;
  PFoo(&value);
  std::cout << value << std::endl;
  int a = 5, b = 3, c = 21;
  std::cout << a << "\t" << b << "\t" << c << std::endl;
  Foo2(a,b,c);
  std::cout << a << "\t" << b << "\t" << c << std::endl;
  double str = 7.12;
  double var = 2.71;
  std::cout << str << "\t" << var << std::endl;
  Swap(str, var);
  std::cout << str << "\t" << var << std::endl;
  return 0;
}
