//Умный калькулятор 2.0. Реализовать калькулятор кредитов, вкладов и конвертер валют из BYN в USD, EUR, RUB и обратно. Приложение должно иметь удобный и понятный интерфейс пользовательского меню
//Подсказки:
//1) процентные ставки с названием кредита или вклада, а так же текущий курс лучше всего выносить в define;
//2) пользовательское меню реализовать через if-else if- else if- else (или switch-case)
//3) дать пользователю возможность работать с программой бесконечное количество раз (бесконечный цикл)
//4) main() должен содержать в идеале только вызовы функций, if-else if- else if- else и цикл while()

#include <iostream>
using namespace std;
//CREDIT/////////////////////////////
# define PERCENTEGES1 5
# define PERCENTEGES2 9
# define PERCENTEGES3 16
//DEPOSIT////////////////////////////
# define RATE1 10
# define RATE2 20
# define RATE3 25
//CULCULATOR//////////////////////////
# define BYN_TO_USD 2.61
# define BYN_TO_EUR 3.10
# define BYN_TO_RUB 28
# define USD_TO_BYN 2.59
# define EUR_TO_BYN 3.09
# define RUB_TO_BYN 0.04

void printText(string massage);
void printTextWithEndl(string massage);
void printTextWelcom(string massage);
void printResult(string massage, double parametr);
//CREDIT/////////////////////////////////
double contractA(double a, double b);
double contractB(double a, double b);
double contractC(double a, double b);
//DEPOSIT////////////////////////////////
double contract1(double a, double b);
double contract2(double a, double b);
double contract3(double a, double b);
//CALCULATOR///////////////////////////////
double bynToUsd(double a, double b);
double bynToEur(double a, double b);
double bynToRub(double a, double b);
double usdToByn(double a, double b);
double eurToByn(double a, double b);
double rubToByn(double a, double b);

void printTextWelcom(string massage)
{
    cout << "Welcom to our bank!"<< endl<<
    "In our bank you can get the following services: "<< endl<<
    "1. lending."<< endl<<
    "2. Depositing."<< endl<<
    "3.Transferring money."<< endl;
}
void printTextWithEndl(string massage)
{
    cout << massage << endl;
}
void printText(string massage)
{
    cout << massage;
}
void printResult(string massage, double parametr)
{
    cout << massage << parametr << endl;
}
//CREDIT//////////////////////////////////////////
double contractA(double a, double b)
{
    return a * b / 100;
}
double contractB(double a, double b)
{
    return a * b / 100;
}
double contractC(double a, double b)
{
    return a * b / 100;
}
//DEPOSIT/////////////////////////////////////////
double contract1(double a, double b)
{
    return ((a / 100) * b)/ 12;
}
double contract2(double a, double b)
{
    return ((a / 100) * b)/ 2;
}
double contract3(double a, double b)
{
    return a / 100 * b;
}
//CALCULATOR///////////////////////////////
double bynToUsd(double a, double b)
{
    return  a / BYN_TO_USD;
}
double bynToEur(double a, double b)
{
    return  a / BYN_TO_EUR;
}
double bynToRub(double a, double b)
{
  return  a * BYN_TO_RUB;
}
double usdToByn(double a, double b)
{
    return  a * USD_TO_BYN;
}
double eurToByn(double a, double b)
{
    return  a * EUR_TO_BYN;
}
double rubToByn(double a, double b)
{
    return  a * RUB_TO_BYN;
}

int main()
{
    int service = 0;
    printTextWelcom("");
    // while (true);
    printText("Select service: ");
    cin >> service;
    if (service == 1)
    {
        //CREDIT//////////////////////////////
        printTextWithEndl("You can choose the conditions for lending in USD, EUR and BYN.");
        printTextWithEndl("First. In USD 5% in year for one year");
        printTextWithEndl("Second. In EUR 9% in year for one year");
        printTextWithEndl("Third. In BYN 16% in year for one year");
        int bankMoney = 0;
        int creditorChoice = 0;
        cout<< endl;
        cout << "Choice the contract: 1, 2 or 3: ";
        cin >> creditorChoice;

        cout << "Amount of money: ";
        cin >> bankMoney;
        
        if (creditorChoice == 1)
        {
            printResult("USD: ",contractA(bankMoney, PERCENTEGES1));
        }
        else if (creditorChoice == 2)
        {
            printResult("EUR: ",contractB(bankMoney, PERCENTEGES2));
        }
        else if (creditorChoice == 3)
        {
            printResult("BYN: ",contractC(bankMoney, PERCENTEGES3));
        }
        else if (creditorChoice > 3 or creditorChoice < 0)
        {
            printTextWithEndl("Error ");
        }
    printTextWithEndl("");
    }
    
    else if (service == 2)
    {
        //DEPOSIT/////////////////////////////
        printTextWithEndl("We are ready to offer you favorable deposit terms.");
        printTextWithEndl("You can choice three options: ");
        printTextWithEndl("First. 10 %  per year for a period of 1 month.");
        printTextWithEndl("Second. 20 % per year for a period of 6 months.");
        printTextWithEndl("Third. 25 %  per year for a period of 12 months.");
        int customerMoney = 0;
        int customerChoice = 0;
        cout<< endl;
        cout << "Choice the contract: 1, 2 or 3: ";
        cin >> customerChoice;
        cout << "Amount of money: ";
        cin >> customerMoney;
        
        if (customerChoice == 1)
        {
            printResult("For 1 month: ",contract1(customerMoney, RATE1));
        }
        else if (customerChoice == 2)
        {
            printResult("For 6 months: ",contract2(customerMoney, RATE2));
        }
        else if (customerChoice == 3)
        {
            printResult("For 12 months: ",contract3(customerMoney, RATE3));
        }
        else
        {
            printText("Error");
        }
        printTextWithEndl("");
    }
    if (service == 3)
    {
        //CALCULATOR///////////////////////////////
        printTextWithEndl("Money transfer service.");
        double currency1 = 0, currency2 = 0;
        double amount = 0;
        printText("Select the currency: 1.USD 2.EUR 3.RUB 4.BYN: ");
        cin >> currency1;
        printText("Select the exchange currency:1.USD 2.EUR 3.RUB 4.BYN: ");
        cin >> currency2;
        if ( (currency1 == currency2) or (currency1 == 1 and currency2 == 2) or (currency1 == 1 and currency2 == 3) or (currency1 == 2 and currency2 == 1) or (currency1 == 2 and currency2 == 3) or (currency1 == 3 and currency2 == 1) or (currency1 == 3 and currency2 == 2))
        {
            printText("Error!      ");
        }

        printText("Select amount of the money: ");
        cin >> amount;
        
        if ( currency1 == 4 and currency2 == 1)
        {
            printResult("USD: ",bynToUsd(amount, BYN_TO_USD));
        }
        else if (currency1 == 4 and currency2 == 2)
        {
            printResult("EUR: ", bynToEur(amount, BYN_TO_EUR));
        }
        else if (currency1 == 4 and currency2 == 3)
        {
            printResult("RUB: ", bynToRub(amount, BYN_TO_RUB));
        }
        else if (currency1 == 1 and currency2 == 4)
        {
            printResult("BYN: ", usdToByn(amount, USD_TO_BYN));
        }
        else if (currency1 == 2 and currency2 == 4)
        {
            printResult("BYN: ", eurToByn(amount, EUR_TO_BYN));
        }
        else if (currency1 == 3 and currency2 == 4)
        {
            printResult("BYN: ", rubToByn(amount, RUB_TO_BYN));
        }
        printTextWithEndl("");
    }
   
    return 0;
}















