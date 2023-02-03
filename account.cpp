#include <iostream>
#include <string>
using namespace std;

class Account{
  private:
      string name;
      string type;
      int amount;
  public:
      void initialize(){
        cout << "Enter the name of the holder : ";
        cin >> name;
        cout << "Enter the type of the account 's' or 'c' : ";
        cin >> type;
        cout << "Enter the amount in the account: ";
        cin >> amount;
      }
      void deposit(){
        int hold;
        cout << "Enter the amount you wanna deposit : ";
        cin >> hold;
        hold = (int) hold;
        amount+=hold;
        cout << amount << endl;
      }
      void withdraw(){
        int hold;
        cout << "Enter the amount you wanna withdraw : ";
        cin >> hold;
        hold = (int) hold;
        if (hold > 0 && hold <= amount){
          amount-=hold;
          cout << amount << endl;
        }
        else cout << "Amount is either more than the current balance or invalid ";
      }
};

int main(){
  Account one;
  one.initialize();
  one.deposit();
  one.withdraw();
  return 0;
}