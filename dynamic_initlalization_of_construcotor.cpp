#include <iostream>
using namespace std;
class fixedDeposit
{
private:
    int p_amount;
    int year;
    float rate;
    float r_vlaue;

public:
    fixedDeposit(){};// it is important in dinamic construtor
    fixedDeposit(int, int, int);
    fixedDeposit(int, int, float = 0.12);
    void dispaly();
};
fixedDeposit::fixedDeposit(int p, int q, int r)
{
    p_amount = p;
    year = q;
    rate = r;
    r_vlaue = p_amount;
    for (int i = 0; i < q; i++)
    {
        r_vlaue = r_vlaue * (1.0 + float(r) / 100);
    }
}
fixedDeposit::fixedDeposit(int a, int b, float c)
{
    p_amount = a;
    year = b;
    rate = c;
    r_vlaue = p_amount;
    for (int i = 0; i < b; i++)
    {
        r_vlaue = r_vlaue * (1.0 + c);
    }
}
void fixedDeposit::dispaly()
{
    cout << "prinviple amout = " << p_amount << endl;
    cout << "return value = " << r_vlaue << "\n";
}
int main()
{
    fixedDeposit fds1, fds2;
    int p;
    int y;
    float r;
    int R;
    cout << "Enter amount,period ,interest rate" 
         << "\n";
    cin >> p >> y >> R;
    fds1 = fixedDeposit(p, y, R);

    cout << "Enter amount and period"
         << "\n";
    cin >> p >> y;
    fds2 = fixedDeposit(p, y);

    cout << "\n Deposit1";
    fds1.dispaly();

    cout << "\n Deposit2";
    fds2.dispaly();
    return 0;
}