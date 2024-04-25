#include<iostream>
#include<string>
using namespace std;
//prices
int tokyoStandard[6] = {9945, 7035, 6090, 5620, 8455, 4975};
int tokyoDeluxe[6] = {10485, 7580, 6630, 6160, 8910, 5245};
int koreaStandard[6] = {7985, 6315, 5380, 5990, 3995, 890};
int koreaDeluxe[6] = {8730, 6950, 6150, 6550, 4365, 1465};
int koreaLuxury[6] = {10745, 9290, 8155, 8060, 5375, 2440};
int childPrice[10] = {8455, 4915, 8910, 5245, 3995, 890, 4365, 1465, 5375, 2440};
string package[3] = {"Standard", "Deluxe", "Luxury"};
string place[2] = {"Tokyo", "South Korea"};
int chos, packageOption, numOfPeople, numOfChild;
bool withChildOrNot, withChildBedOrNot;
string userName, PhoneNumber;
void totalPrice(int chos, int packageOption, int numOfPeople, int numOfChild, bool withChildOrNot, bool withChildBedOrNot){
    //to know how much for one people
    int pricePerPeople;
    int pricePosition;
    int priceForChild;
    int cp;
    if(numOfPeople >= 2 && numOfPeople <= 3){
        pricePosition = 0;
    }
    if(numOfPeople >= 4 && numOfPeople <= 5){
        pricePosition = 1;
    }
    if(numOfPeople >= 6 && numOfPeople <= 7){
        pricePosition = 2;
    }
    if(numOfPeople >= 8 && numOfPeople <= 9){
        pricePosition = 3;
    }
    //to know where they go
    switch (chos)
    {
    case 1:
        switch (packageOption)
        {
        case 1:
            pricePerPeople = tokyoStandard[pricePosition];
            cp = 0;
            break;
        case 2:
            pricePerPeople = tokyoDeluxe[pricePosition];
            cp = 2;
            break;
        }
        break;
    case 2:
        switch (packageOption)
        {
        case 1:
            pricePerPeople = koreaStandard[pricePosition];
            cp = 4;
            break;
        case 2:
            pricePerPeople = koreaDeluxe[pricePosition];
            cp = 6;
            break;
        case 3:
            pricePerPeople = koreaLuxury[pricePosition];
            cp = 8;
            break;
        }
    }
    //get the price for baby
    if(withChildOrNot == 1){
        if(withChildBedOrNot == 1){
            cp = cp + 1;
        }
        priceForChild = childPrice[cp];
        cout<<"RM "<<priceForChild<<" for one child."<<endl;
    }
    cout<<"RM "<<pricePerPeople<<" for one adult."<<endl;
    cout<<"Total price is RM "<<(priceForChild * numOfChild) + (pricePerPeople * numOfPeople);
}
int main(){
    for(int loop = 0; loop != 1; loop--){ //this is for the loop from the end        
        for(int s = 0; s != -1; s--){ //this for is for first menu
            cout<<"Thank you for using Lavender Trours & Travel travel package booking progream"<<endl;
            cout<<"Please enter the number at the front of option that you want to choose."<<endl;
            cout<<"[1] Go to TOKYO\n[2] Go to SOUTH KOREA\n[3]EXIT"<<endl;
            cin>>chos;
            if(chos == 1 || chos == 2){
                for(int i = 0; i != -1; i--){
                    cout<<"You are going to "<<place[chos - 1]<<"\nWhich package you want to choose?"<<endl<<"[1]"<<package[0]<<endl<<"[2]"<<package[1]<<endl;
                    if(chos == 2){
                        cout<<"[3]"<<package[2]<<endl;
                    }
                    cout<<"Please enter the number at the front of option.\n";
                    cin>>packageOption;
                    if((packageOption == 1 || packageOption == 2) || (chos == 2 && packageOption == 3)){
                        cout<<"OK, now you choosed "<<package[packageOption - 1];
                        for(int f = 0; f != -1; f--){
                            cout<<"\nHow many people of you?\n";
                            cin>>numOfPeople;
                            if(numOfPeople < 2 || numOfPeople > 9){
                                cout<<"Minimum two people, maximum nine people";
                                f = 1;
                            }
                        }
                        for(int c = 0; c != -1; c--){
                            cout<<"Will there a child with you?\n[y/n]\n";
                            string baby;
                            cin>>baby; //to know is there any baby
                            if(baby == "y" || baby == "Y" || baby == "n" || baby == "N"){
                                if(baby == "y" || baby == "Y"){
                                    withChildOrNot = 1;
                                    cout<<"How many child with you?"<<endl;
                                    cin>>numOfChild;
                                    for(int i = 0; i != -1; i--){
                                        cout<<"Do they need a bed?\n[y/n]\n";
                                        char wcbon;
                                        cin>>wcbon;
                                        if(wcbon == 'y' || wcbon == 'Y' || wcbon == 'n' || wcbon == 'N'){
                                            if(wcbon == 'y' || wcbon == 'Y'){
                                                withChildBedOrNot = 1;
                                            }
                                            else{
                                                withChildBedOrNot = 0;
                                            }
                                        }
                                        else{
                                            cout<<"You entered WRONG answer! Try again.\n";
                                            i = 1;
                                        }
                                    }
                                }
                                else{
                                    withChildOrNot = 0;
                                }
                                cout<<"Now we need some of your information.\nWhat' your name?(no spaces)\n";
                                cin>>userName;
                                cout<<"And your phone number?\n";
                                cin>>PhoneNumber;
                            }
                            else{
                                cout<<"You entered WRONG answer! Try again.\n";
                                c = 1;
                            }
                        }
                    }
                    else{
                        cout<<"You entered WRONG number. Please try again.\n";
                        packageOption = 0;
                        i = 1;
                    }
                }
            }
            else if(chos == 3){
                return 0; 
            }
            else{
                cout<<"You entered WRONG number. Please try again.\n";
                s = 1;
            }
        }
        cout<<"Now, we are ready to book the travel.\nYou have choosed to go to "<<place[chos - 1]<<" with "<<package[packageOption - 1]<<" package.\n";
        cout<<"And all of you are "<<numOfPeople<<" people.";
        if(withChildOrNot == 1){
            cout<<"\nAnd with "<<numOfChild<<" child, with";
            if(withChildBedOrNot == 1){
                cout<<" bed";
            }
            else{
                cout<<" no bed";
            }
        }
        cout<<"\nYour booking number is "<<userName.substr(0,4)<<PhoneNumber.substr(PhoneNumber.size() - 4, 4)<<endl;
        totalPrice(chos, packageOption, numOfPeople, numOfChild, withChildOrNot, withChildBedOrNot);
        for(int j = 0; j != -1; j--){
            cout<<"Now you want to book another one or just exit?\n[1]Book another one\n[2]Exit\n";
            cin>>loop;
            if(loop != 1 && loop != 2){
                cout<<"You entered the WRONG number, please try again.\n";
                j = 1;
            }
        }
    }
    return 0;
}