#include "main.h"

int main(){
    Account user1("Max Og",50000.00,50000.00);
    Account user2("Kevin Fage",50000.00,50000.00);

    int option {-1};
    cout << "Press 1 to check balance, 2 to deposit money, 3 to withraw money, 0 to exit: " << endl;    
    cin >> option;

    while (option > 0 && option <=3) {
        switch (option)
        {
        case 1:
            user1.checkBalance();
            break;

        case 2:
            user1.depositMoney();
            break;

        case 3:
            user1.withdrawMoney();
            break;
        
        default:
            cout << "invalid input " << endl;
            break;
        }
        cout << "Press 1 to check balance, 2 to deposit money, 3 to withraw money, 0 to exit: " << endl;    
        cin >> option;
    }


    return 0;
}
