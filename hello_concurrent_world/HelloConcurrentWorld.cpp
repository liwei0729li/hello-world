#include <iostream>
// #include <thread>
#include "mingw.thread.h"

void hello()
{
    std::cout << "Hello World! in hello()" << std::endl;
}

int main()
{
    std::cout << "Hello World! in main()\n" << std::endl;
    std::thread t(hello);
    std::cout << "Hello World! in main()\n" << std::endl;
    t.join();
}
    