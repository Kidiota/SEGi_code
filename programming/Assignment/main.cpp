#include<iostream>
#include<string>
using namespace std;

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
                    cout<<bookingNumber<<endl;
                }
                switch (chos)
                {
                case 1:
                    //TOKYO
                    cout<<"jijl";
                    break;

                case 2:
                    //SOUTH KOREA
                    cout<<"ttt";
                    break;
                
                case 3:
                    //EXIT
                    chos = 0;
                    break;

                default:
                    cout<<"You entered WRONG number。 Please try again.\n";
                    chos = 9;
                    break;
                }    
            }

        }

        
        
        
        

    return 0;
}