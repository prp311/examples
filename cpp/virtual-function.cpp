#include <iostream>

class Base
{

public:

        void non_virtual_function()
        {
                std::cout << "\tBase::non_virtual_function" << std::endl;
        }

        virtual void virtual_function()
        {
                std::cout << "\tBase::virtual_function" << std::endl;
        }

};

class Derived : public Base
{

public:

        void non_virtual_function()
        {
                std::cout << "\tDerived::non_virtual_function" << std::endl;
        }

        virtual void virtual_function()
        {
                std::cout << "\tDerived::virtual_function" << std::endl;
        }

};

int main()
{

  Base *base = new Derived;
  Derived *derived = (Derived *) base;

  std::cout << "Calling non-virtual function on derived object with base class pointer " << std::endl;
  base->non_virtual_function();
  std::cout << std::endl;


  std::cout << "Calling non-virtual function on derived object with derived class pointer " << std::endl;
  derived->non_virtual_function();
  std::cout << std::endl;

  std::cout << "Calling virtual function on derived object with base class pointer " << std::endl;
  base->virtual_function();
  std::cout << std::endl;

  std::cout << "Calling virtual function on derived object with derived class pointer " << std::endl;
  derived->virtual_function();
  std::cout << std::endl;

  return 0;
}
