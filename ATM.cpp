#include <iostream>

using namespace std;

class ATM {
    public:
    int accountBalance;

ATM(){
 accountBalance = 1000;

}
        
void makeCashDeposit(float money){
        if(money <= 500){
            accountBalance = accountBalance + money;
             cout << "Your current account balance is: " << accountBalance << endl;
        } else {
            cout << "Value too great to deposit." << endl;
        }
}
void makeCheckDeposit(float money){
    accountBalance = accountBalance + money;
     cout << "Your current account balance is: " << accountBalance << endl;

}
void makeCashWithdrawal(float money){
      
            int moneycast = (int)money;
            if((moneycast % 1 == 0) && (money <= 200)){
               accountBalance = accountBalance - money;
                cout << "Your current account balance is: " << accountBalance << endl;

            } else{
                cout << "Sorry, unacceptable amount" << endl;
            }
        
    }
void checkAccountBalance(){
    cout << "Your current account balance is: " << accountBalance << endl;
    }

};
int main(){
    int option;
    float money;
    ATM VM;
    

 while(1) {
        cout << "Press 1 make a deposit with cash." << endl; 
        cout << "Press 2  make a deposit with a check." << endl;
        cout << "Press 3 make a withdrawal." << endl;
        cout << "Press 4 to check current balance." << endl;
        cout << "Press any number key to exit." << endl;
        cin >> option;
        switch(option){
            case 1:
            cout << "      Please insert cash amount      " << endl;
            cout << "------Amount may not exceed $500-----"<<endl;
            cin >> money;
            VM.makeCashDeposit(money);
            break;

            case 2: 
            cout << "Please insert check." << endl;
            cin >> money;
            VM.makeCheckDeposit(money);
            break;

            case 3:
            cout << "Please input value amount you would like to withdraw." << endl;
            cout << "--------------Withdrawal Limit is $200---------------" << endl;
            cin >> money;
            VM.makeCashWithdrawal(money);
            break;

            case 4:
            VM.checkAccountBalance();
            break;
        return 0;
        }
    }
   return 0; 
}