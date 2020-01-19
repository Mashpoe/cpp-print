# Python-Like Print for C++
An implementation of Python 3's "print" function in C++. It can take any number of arguments with mixed types!

# Example:

```c++
#include <print.hpp>

int main()
{
  
  print("hello", 1337, "world");
  
  int num = 255;
  
  print("the value of num is", num, "and its address is", &num);
  
}
```

example output:

```
hello 1337 world 
the value of num is 255 and its address is 0x7ffeefbff53c 
```
