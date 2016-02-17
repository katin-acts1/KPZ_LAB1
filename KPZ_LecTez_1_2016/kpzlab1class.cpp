#include "kpzlab1class.h"
using namespace std;
using namespace lab1;
//---------1 klass
KpzLab1Class::KpzLab1Class()
{

}
void KpzLab1Class::HelloMethod()
{
std::cout << "Hello from method"<<std::endl;
}

void KpzLab1Class::SimpleFunctionHello()
{
   printf("Hello from Simple Function");
}
int KpzLab1Class::GetCounter ()
{
 return this->mCounter;
}
void KpzLab1Class::SetCounter(int counter)
{
  mCounter = counter;
}

void KpzLab1Class::ProtectedHelloMethod() // Звичайний метод
{
  std::cout << "Hello from Protected method"<<std::endl;
}
void KpzLab1Class::PrivateHelloMethod() // Звичайний метод
{
 std::cout << "Hello from Private method"<<std::endl;
}
// --------------2 class

    InhKpzLab1Class::InhKpzLab1Class()
    {}
    void InhKpzLab1Class::InhHelloMethod()
    {}
    void InhKpzLab1Class::InhSimpleFunctionHello()
    {}

