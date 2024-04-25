#include<iostream>
#include<string>
using namespace std;
//prices
int tokyoStandard[6] = {9945, 7035, 6090, 5620, 8455, 4975};
int tokyoDeluxe[6] = {10485, 7580, 6630, 6160, 8910, 5245};
int koreaStandard[6] = {7985, 6315, 5380, 5990, 3995, 890};
int koreaDeluxe[6] = {8730, 6950, 6150, 6550, 4365, 1465};
int koreaLuxury[6] = {10745, 9290, 8155, 8060, 5375, 2440};
string package[3] = {"Standard", "Deluxe", "Luxury"};
string place[2] = {"Tokyo", "South Korea"};

int chos, packageOption, numOfPeople, numOfChild;
bool withChildOrNot, withChildBedOrNot;
string userName, PhoneNumber;

void TotalPrice(int chos, int packageOption, int numOfPeople, int numOfChild, bool withChildOrNot, bool withChildBedOrNot){
    
}

int main(){
    for(int chos = 0; chos != -1; chos--){ //this is for the loop from the end        
        for(int chos = 0; chos != -1; chos--){ //this for is for first menu
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
                        cout<<"How many people of you?\n";
                        cin>>numOfPeople;
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
                                cout<<"Now we need some of your information.\nWhat' your name?\n";
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
                        cout<<"You entered WRONG number。 Please try again.\n";
                        packageOption = 0;
                        i = 1;
                    }
                }
            }
            else if(chos == 3){
                chos = 0;
            }
            else{
                cout<<"You entered WRONG number。 Please try again.\n";
                chos = 9;
            }
        }
    }
    cout<<"Now, we are ready to book the travel.\nYou have choosed to go to "<<place[chos - 1]<<" with "<<package[packageOption - 1]<<"package.\n";
    cout<<"And all of you are "<<numOfPeople<<" people";
    if(withChildOrNot == 1){
        cout<<"and with "<<numOfChild<<" child, with";
        if(withChildBedOrNot = 1){
            cout<<"bed";
        }
        else{
            cout<<"no bed";
        }
    }
    
    return 0;
}