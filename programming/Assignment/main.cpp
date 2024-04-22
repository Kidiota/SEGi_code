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

void TotalPrice(int chos, int packageOption, int numOfPeople, bool withChildOrNot, bool withChildBedOrNot){
    
}

int main(){
        for(int chos = 0; chos != -1; chos--){ //this is for the loop from the end
            //Menu
            cout<<"Thank you for using Lavender Trours & Travel travel package booking progream"<<endl;
            cout<<"Please enter the number at the front of option that you want to choose."<<endl;
            cout<<"[1] Go to TOKYO\n[2] Go to SOUTH KOREA\n[3]EXIT"<<endl;
        
            for(int chos = 0; chos != -1; chos--){ //this for is for first menu
                cin>>chos;
                if(chos == 1 || chos == 2){ //we do the register there
                    cout<<"Now we need to know how you are.\n";
                    cout<<"Please enter your name:";
                    string userName;
                    cin>>userName;
                    cout<<"Please enter your phone number:";
                    string phoneNumber;
                    cin>>phoneNumber;
                    //generate booking number
                    string bookingNumber = userName.substr(0,4) + phoneNumber.substr(phoneNumber.length()-4);
                    //cout<<bookingNumber<<endl;
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
    return 0;
}