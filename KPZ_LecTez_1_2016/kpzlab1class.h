#ifndef KPZLAB1CLASS_H
#define KPZLAB1CLASS_H
// NO using namespace std!
/*
Тези питання 1. Мова програмування С++ з точки зору розробника, що використовує С#.
    1.1 Мова С++ не передбачає використання frameworcs або віртуальних машин.
 Середовище розробки Qt Creator і набір бібліотек Qt побудований виключно
 на засобах стандартного С++. Присутні деякі синтаксичні особливості, що відрізняють Qt від
 стандартного С++. Це середовище також дає можливість здійснювати реальну кросплатформену
 реалізацію проектів.
    Мова С++ і бібліотеки Qt не мають суттєвих переваг перед засобами мови С# для
 операційної системи Windows. В тому числі, як на мою думку у швидкості роботи.
 Якщо програми призначена для Windows її доцільно розробляти з використанням засобів .NET,
 з використанням мови С#.
    Проте є галузі де розробка без використання  C++ НЕ МОЖЛИВА. А бібліотека
Qt дуже і дуже бажана. До них відносяться: операційні системи реального часу;
високошвидкісні програмні системи,які потребують велику кількість апаратних ресурсів,
особливо при необхідності забезпечення кросплатформенності;
вбудовані системи, що вимагають  аналізу вихідного коду;
вбудовані системи, що працюють без операційних систем (програми мікроконтроллерів);
код для ядра операційних систем.
    1.2 Елементи мови С++, що співпадають з елементами мови С#. Стандартні типи даних,
змінні. Основний девіз, щодо змінних, в С++ змінна це тільки змінна і нічого більше!!!
Синтаксис оголошення змінних в С++ і С# в основному співпадає, проте не забуваємо про девіз.
Типи змінних,цілочисельні: int, short, long, unsigned int, unsigned short, unsigned long.
Типи змінних з плаваючою комою:float(f = 7,7f), double, long double (d = 12,1L).
Символьна змінна типу char. Класс для реалізації тексту string. Heloo world.
Булева змінна bool.
    Змінні стандарту С++11
char16_t A single 16-bit character char16_t c16 = u’m’;
char32_t A single 32-bit character char32_t c32 = U’m’;
wchar_t A single wide-character size depends on compiler wchar_t w = L’m’;
auto The compiler will decide the type automatically auto i = 7; // i will be an int

decltype(expr)
The type will be the type of the expression expr

int i = 7;
decltype(i) j = 8;
// j will also be an int

    1.3 Оператори арифметичні і логічні. В цілому співпадають.
Оператори розгалуження, реалізації циклу, тренарні оператори у цілому співпадають.
Простір імен в цілому співпадає, проте синтаксис і філософія використання
суттєво відрізняється.
    1.4 Масиви призначені для зберігання змінних і об’єктів одного типу.
Масиви суттєво відрізняються в С++ і будуть докладно розглянуті пізніше,
коли будуть розглядатися питання прямого доступу до оперативної пам’яті,
покажчики і посилання.

        Тези питання.2 Основні елементи мови С++. Типи даних користувача мови С++ з точки зору розробника, що використовує С#.

     2.1 Перед початком роботи створимо проект Qt, що реалізує графічний інтерфейс
на основі бібліотек Qt. Після створення проекту можна побачити, що утворюється три
вихідних файлу: smth.h, smth.cpp, main.cpp по умовчанню. Де дає мені право начати
вивчення С++ з використанням стилю [1].
    2.2 Давайте напишемо першу програму, що являє собою Hello World з використанням
С++ і середовища розробки Qt. Під час створення обираємо проект з нативним С++.
Представлена далі. Ця програма вже представляє собою достатні концепції
мови С++, а саме:
Comments,
Preprocessor Directives,
The main() Function,
I/O Streams.
    2.2 Директиви препроцесора, що найбільш частіше використовуються. Що таке директиви препроцесора.
    #include [file]
    #define [key] [value]

    #ifdef [key]
    #ifndef [key]
    #endif

    #pragma [xyz]

   One example of using preprocessor directives is to avoid multiple includes.
    For example:
    #ifndef MYHEADER_H
    #define MYHEADER_H
        // ... the contents of this header file
    #endif

    2.3 Простір імен
    Оголошення.
...
 namespace mycode
 {
    void foo();
 }
    Використання простору імен окремо для функції.
mycode::foo();    // Calls the “foo” function in the “mycode” namespace
    Використання для всього коду у файлі.
#include “namespaces.h”
using namespace mycode;
int main()
 {
    foo();  // Implies mycode::foo();
    return 0;
 }
    2.4 Типи даних користувача.

    2.4.1 Енуменатори (Enumerated Types). Використання для певних ідентифікаторів, що
повторюються. Приклад шахові фігури, шашки (настільна гра), доміно, гральні карти, топографічні
карти.
    Приклад, якщо немає енуменаторів.
const int kPieceTypeKing = 0;
const int kPieceTypeQueen = 1;
const int kPieceTypeRook = 2;
const int kPieceTypePawn = 3;
 //etc. int
 myPiece = kPieceTypeKing;
    Приклад, якщо є енуменатори. Не строгий тип енуменатору
typedef enum
 {
 kPieceTypeKing,// C нуля
 kPieceTypeQueen,
 kPieceTypeRook,
 kPieceTypePawn
 } PieceT;

PieceT CurrentP = 0;
PieceT CurrentP = kPieceTypeQueen;
Навіщо. Для покращення читання коду.
Приклад.
if (CurrentP == kPieceTypeRook)
{
// Do 1
} else {
// Do 2
}

Не строгість
typedef enum
 {
 kPieceTypeKing=1, // Не с нуля
 kPieceTypeQueen,
 kPieceTypeRook=10, // С 10
 kPieceTypePawn
 } PieceT;

Строгий тип енуменаторів (Strongly Typed Enumerations). Засіб С++11.

enum class MyEnumLong : unsigned long
 {
    EnumValueLong1,
    EnumValueLong2 = 10,
    EnumValueLong3
 };

    2.4.2 Структури (Structs). Інкапсулірують в одному типі даних користувача декілька
    відомих типів. Структура може містити методи. Використання такого стилю не прийнято.
 Оголошення структури.
typedef struct
 {
    char    firstInitial;//Перші ініціали
    char    middleInitial;
    char    lastInitial;
    int     employeeNumber;
    int     salary;
 } EmployeeT;
Створення екземпляру структури.
 EmployeeT anEmployee;
    anEmployee.firstInitial='P';
    anEmployee.middleInitial='P';
    anEmployee.lastInitial='P';
    anEmployeee.mployeeNumber=125;
    anEmployee.salary=1250;

 2.5.2 Класи.
 Для початку роботи з класами оберемо один з варіантів оголошення і використання класу.
 При цьому приклад обраний у найближчому варіанті до С#.

 //-- Оголошення класу в*.h
#include <string>
 class AirlineTicket
 {
    public:
     AirlineTicket();
    ~AirlineTicket();
     int          calculatePriceInDollars() const;
     std::string  getPassengerName() const;
     void         setPassengerName(std::string inName);
     int          getNumberOfMiles() const;
     void         setNumberOfMiles(int inMiles);
     bool         getHasEliteSuperRewardsStatus() const;
     void         setHasEliteSuperRewardsStatus(bool inStatus);
    protected:
    std::string  mPassengerName;
    int          mNumberOfMiles;
    bool         bHasEliteSuperRewardsStatus;
 };
//--Опис його функціональності в *.срр
AirlineTicket::AirlineTicket()// Initialize data members
 {
bHasEliteSuperRewardsStatus = false;
mPassengerName = “Unknown Passenger”;
mNumberOfMiles = 0;
 }

 AirlineTicket::~AirlineTicket()// Nothing much to do in terms of cleanup
 {
 }

 int AirlineTicket::calculatePriceInDollars() const
 {
    if (getHasEliteSuperRewardsStatus())// Elite Super Rewards customers fly for free!
 {
    return 0;
    }
// The cost of the ticket is the number of miles times
// 0.1. Real airlines probably have a more complicated formula!
    return static_cast<int>(getNumberOfMiles() * 0.1);
 }

 string AirlineTicket::getPassengerName() const
 {
    return mPassengerName;
 }
 void AirlineTicket::setPassengerName(string inName)
 {
    mPassengerName = inName;
 }
 // Other get and set methods omitted for brevity.
// Використання готового класу у стеку. Синтаксичні прийоми найближчі до C#.
AirlineTicket myTicket;  // Stack-based AirlineTicket
myTicket.setPassengerName(“Sherman T. Socketwrench”);
myTicket.setNumberOfMiles(700);
int cost = myTicket.calculatePriceInDollars();
cout << “This ticket will cost $” << cost << endl;
Таким чином ми визначили, що клас у мові С++ це звичайний варіант
використання ООП підходу, достатньо схожий з підходом у C#. При цьому э певні особливості, які
ми розглянемо у наступній частині курсу.


*/

#include <string>
#include <iostream>
namespace lab1
{
//Оголошено енуменатор
typedef enum
 {
 kPieceTypeKing,
 kPieceTypeQueen,
 kPieceTypeRook,
 kPieceTypePawn
 } PieceT;

// Оголошено перший клас
class KpzLab1Class
{
public:                 // Публічні методи і поля
    KpzLab1Class();     // Конструктор
    void HelloMethod(); // Звичайний метод
    static void SimpleFunctionHello();//Не потребує створення екземпляру класу
                                      // Методи доступу пишемо самі
    int GetCounter ();
    void SetCounter(int);
protected: // Захищены методи і поля
    void ProtectedHelloMethod(); // Звичайний метод
//private:   // Приватні методи і поля
    void PrivateHelloMethod(); // Звичайний метод
    int mCounter;
};
// Оголошено оголошено другий клас і наслідування
class InhKpzLab1Class : public KpzLab1Class
{
public:
    InhKpzLab1Class();
    void InhHelloMethod();
    static void InhSimpleFunctionHello();



};
}
#endif // KPZLAB1CLASS_H
