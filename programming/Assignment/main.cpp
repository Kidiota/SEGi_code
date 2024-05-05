#include<iostream>
#include<string>
using namespace std;
int price [2] [3] [6] = {{{9945, 7035, 6090, 5620, 8455, 4975},{10485, 7580, 6630, 6160, 8910, 5245}},{{7985, 6315, 5380, 5990, 3995, 890},{8730, 6950, 6150, 6550, 4365, 1465},{10745, 9290, 8155, 8060, 5375, 2440}}};
int childPrice [2] [3] [2] {{{4975,8455},{5245,8910}},{{890,3995},{1465,4365},{2440,5375}}};
string package[3] = {"Standard", "Deluxe", "Luxury"};
string place[2] = {"Tokyo", "South Korea"};
int chos, packageOption, numOfPeople, numOfChild;
bool withChildOrNot, withChildBedOrNot;
string userName, PhoneNumber;
void totalPrice(int chos, int packageOption, int numOfPeople, int numOfChild, bool withChildOrNot, bool withChildBedOrNot){
    int pricePerPeople;
    int priceForChild;
    int cp;
    pricePerPeople = price[chos-1][packageOption-1][numOfPeople/2-1]; //get the price for one people 
    if(withChildOrNot == 1){  //get the price for baby
        priceForChild = childPrice[chos-1][packageOption-1][withChildBedOrNot];
        cout<<"RM "<<priceForChild<<" for one child."<<endl;
    }
    cout<<"RM "<<pricePerPeople<<" for one adult."<<endl;
    cout<<"Total price is RM "<<(priceForChild * numOfChild) + (pricePerPeople * numOfPeople);
}
int main(){
    for(int loop = 0; loop != 1; loop--){ //this is for the loop from the end        
        for(int s = 0; s != -1; s--){ //this for is for first menu
            cout<<"Thank you for using Lavender Trours & Travel travel package booking progream"<<endl;
            cout<<" ________________________________________________________________"<<endl;
            cout<<"|                         WONDERFUL TOKYO                        |"<<endl;
            cout<<"|----------------------------------------------------------------|"<<endl;
            cout<<"|  Package |                 Price per Person (RM)               |"<<endl;
            cout<<"|  Option  | 2-3pax | 4-5pax | 6-7pax | 8-9pax |child WB|child NB|"<<endl;
            cout<<"|----------------------------------------------------------------|"<<endl;
            cout<<"| standard | RM9945 | RM7035 | RM6090 | RM5620 | RM8455 | RM4975 |"<<endl;
            cout<<"|----------------------------------------------------------------|"<<endl;
            cout<<"|  Deluxe  | RM10485| RM7580 | RM6630 | RM6160 | RM8910 | RM5245 |"<<endl;
            cout<<"|________________________________________________________________|\n"<<endl;
            cout<<" ________________________________________________________________"<<endl;
            cout<<"|                       AMAZING SEOUL & JEJU                     |"<<endl;
            cout<<"|----------------------------------------------------------------|"<<endl;
            cout<<"|  Package |                 Price per Person (RM)               |"<<endl;
            cout<<"|  Option  | 2-3pax | 4-5pax | 6-7pax | 8-9pax |child WB|child NB|"<<endl;
            cout<<"|----------------------------------------------------------------|"<<endl;
            cout<<"| standard | RM7985 | RM6315 | RM5380 | RM5990 | RM3995 | RM 890 |"<<endl;
            cout<<"|----------------------------------------------------------------|"<<endl;
            cout<<"|  Deluxe  | RM8730 | RM6950 | RM6150 | RM6550 | RM4365 | RM1465 |"<<endl;
            cout<<"|----------------------------------------------------------------|"<<endl;
            cout<<"|  Luxury  | RM10745| RM9290 | RM8155 | RM8060 | RM5375 | RM2440 |"<<endl;
            cout<<"|________________________________________________________________|"<<endl;
            cout<<"                                Nots: WB = With bed. NB = No bed."<<endl;
            cout<<"Please enter the number at the front of option that you want to choose."<<endl;
            cout<<"[1] Go to TOKYO\n[2] Go to SOUTH KOREA\n[3]EXIT"<<endl;
            cin>>chos; //get know where to go
            if(chos == 1 || chos == 2){ //if the answer is wrong, go back
                for(int i = 0; i != -1; i--){
                    cout<<"You are going to "<<place[chos - 1]<<"\nWhich package you want to choose?"<<endl<<"[1]"<<package[0]<<endl<<"[2]"<<package[1]<<endl;
                    if(chos == 2){ //if go to korea, have 3 chooses
                        cout<<"[3]"<<package[2]<<endl;
                    }
                    cout<<"Please enter the number at the front of option.\n";
                    cin>>packageOption; //to know which package
                    if((packageOption == 1 || packageOption == 2) || (chos == 2 && packageOption == 3)){
                        cout<<"OK, now you choosed "<<package[packageOption - 1];
                        for(int f = 0; f != -1; f--){
                            cout<<"\nHow many people of you?\n";
                            cin>>numOfPeople; //to know how many people
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
                                    for(int u = 0; u != -1; u--){
                                        cout<<"How many child with you?"<<endl;
                                        cin>>numOfChild;
                                        if(numOfChild <= 0){
                                            cout<<"You choosed with child, type again.\n";
                                            u = 1;
                                        }
                                    }
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
                                cin>>userName; //get user name
                                cout<<"And your phone number?\n";
                                cin>>PhoneNumber; //get phone number
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
        cout<<"\nYour booking number is "<<userName.substr(0,4)<<PhoneNumber.substr(PhoneNumber.size() - 4, 4)<<endl; //make the user id
        totalPrice(chos, packageOption, numOfPeople, numOfChild, withChildOrNot, withChildBedOrNot); //get the total price
        for(int j = 0; j != -1; j--){
            cout<<"\nNow you want to book another one or just exit?\n[1]Book another one\n[2]Exit\n";
            cin>>loop;
            if(loop != 1 && loop != 2){
                cout<<"You entered the WRONG number, please try again.\n";
                j = 1;
            }
        }
    }
    return 0;
}