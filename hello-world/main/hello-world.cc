#include "lib/hello-greet.h"
#include <ctime>
#include <iostream>
#include <string>

class Singleton
{
    private:
        /* Here will be the instance stored. */
        static Singleton* instance;

        /* Private constructor to prevent instancing. */
        Singleton();

    public:
        /* Static access method. */
        static Singleton* getInstance();
};

/* Null, because instance will be initialized on demand. */
Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
    if (instance == 0)
    {
        instance = new Singleton();
    }

    return instance;
}

Singleton::Singleton()
{}


void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  //new Singleton(); // Won't work
  Singleton* s = Singleton::getInstance(); // Ok
  Singleton* r = Singleton::getInstance();

  /* The addresses will be the same. */
  std::cout << s << std::endl;
  std::cout << r << std::endl;
  return 0;
}
