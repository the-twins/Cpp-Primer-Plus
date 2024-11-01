// Daphne invests $100 at 10% simple interest. That is, every year, the investment earns
// 10% of the original investment, or $10 each and every year:
// interest = 0.10 × original balance
// At the same time, Cleo invests $100 at 5% compound interest. That is, interest is 5%
// of the current balance, including previous additions of interest:
// interest = 0.05 × current balance
// Cleo earns 5% of $100 the first year, giving her $105. The next year she earns 5% of
// $105, or $5.25, and so on. Write a program that finds how many years it takes for
// the value of Cleo’s investment to exceed the value of Daphne’s investment and then
// displays the value of both investments at that time.
#include <iostream>

using namespace std;

const unsigned short OriginBalance = 100;
const float SimpleInvestment = 0.1 * OriginBalance;
const float CompoundInvestment = 0.05;

int main()
{
    int daphne_balance = OriginBalance;
    float cleo_balance = OriginBalance;
    int years;
    for(years = 1; daphne_balance >= cleo_balance; years++)
    {
        daphne_balance += SimpleInvestment;
        cleo_balance += cleo_balance * CompoundInvestment;
        if(years == 1)
            cout << years << " year: Daphne’s balance is " << daphne_balance << "$, Cleo’s is " << 
            cleo_balance << "$." << endl;
        else
            cout << years << " years: Daphne’s balance is " << daphne_balance << "$, Cleo’s is " << 
            cleo_balance << "$." << endl;
    }
    cout << "Cleo’s balance (" << cleo_balance << "$) will exceed Daphne’s balance (" <<
    daphne_balance << "$) in " << years << " years." << endl;
    
    return 0;
}
