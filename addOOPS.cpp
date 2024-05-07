#include<iostream>
class Car{
    private:
        int speed;
        int gear;
        float price;
    public:
        void inputDetails()
        {
            std::cout<<"Enter speed: ";
            std::cin>>speed;
            std::cout<<"Enter gear no: ";
            std::cin>>gear;
            std::cout<<"Enter Prince: ";
            std::cin>>price;
        } 

         void printDetails()
        {
            std::cout<<"\nEntered speed: "<<speed<<"\n";
            std::cout<<"Entered gear_no: "<<gear<<"\n";
            std::cout<<"Entered Prince: "<<price<<"\n\n";
        }  
};

int main()
{
    Car car[300];

    std::cout<<"Enter further Details for Scorpio:\n";
    scorpio.inputDetails();
    scorpio.printDetails();
    std::cout<<"Enter further Details for Fortuner:\n";
    fortuner.inputDetails();
    fortuner.printDetails();
    std::cout<<"Enter further Details for Defender:\n";
    defender.inputDetails();
    defender.printDetails();
}