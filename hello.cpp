// A hello world program in C++
#include<iostream>
using namespace std;

// Function defined in subdir1/subdir2/mylib.cpp
int myfunc();

int main()
{
    int var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var12, var13, var14;

    cout << "Hello World! This is a c++ program\n";

    //Use of Uninitialized Variable var1
    var2 = var1 + 5;
  
    return 0;
}

