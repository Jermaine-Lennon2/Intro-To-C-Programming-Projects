
/*
 Jermaine T Lennon
 Intro to C Programming
 Final Project
 */

/*
 For my final project, I will create a program to do the following:
 1. Allow the user to enter information about themselves:
Is this a delivery or a pickup?
What is your name and address?
How are you paying for your pizza? Cash or credit?
 
 2. Allow the user to enter their Pizza order?
 Is this a thin crust or NY Style pizza?
 What topping would you like? There should not be a limit on how many topping the user enters.
 Would you like a soda with you order? If so, how many, and what type?
 Would you like wing with your order? If so, how many, and what type?
 3. Display the users information.
 4. Display the order back to the user.
 5. Display the amount of the user order.
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

// Structures/Classes


struct userInformation
{
    char name[50];
    char address[50];
    char orderOption[50];
    char paymentOption[50];
};





// Prototypes
void displayingInformation();
void displayingPizzaOrder();
void pizzaType();
void pizzaToppings();
void soda();
void wings();



int main(){
    displayingInformation();
    pizzaType();
    pizzaToppings();
    soda();
    wings();

    
    return 0;
};

void displayingInformation(){
    
    userInformation costumerOne;
    
    cout << "Enter Full name: ";
    cin.getline(costumerOne.name, 50);
    
    cout << "Enter Address: ";
    cin.getline(costumerOne.address, 50);

    cout << "Delivery or Pickup: ";
    cin.getline(costumerOne.orderOption, 50);
    
    cout << "Enter Payment Option: ";
    cin.getline(costumerOne.paymentOption, 50);


    
    cout << "\n Displaying Information. \n" << endl;

    cout << "Name: " << costumerOne.name << endl;
    cout << " " << endl;
    cout << "Address: " << costumerOne.address << endl;
    cout << " " << endl;
    cout << "Delivery or Pickup: " << costumerOne.orderOption << endl;
    cout << " " << endl;
    cout << "Payment Option: " << costumerOne.paymentOption << endl;
    cout << " " << endl;
}



void pizzaType(){
    
    string customersPizzaType;
    
    
    cout << "Enter the type of pizza you want:  NY CRUST OR THIN CRUST " << endl;
    getline(cin, customersPizzaType);
        if (customersPizzaType == "NY CRUST")
            cout << "You Enter NY CRUST. That will be $12.50" << endl;
        else if (customersPizzaType == "THIN CRUST")
            cout << "You entered THIN CRUST. That will be $15.50" << endl;
    
}

void pizzaToppings(){
    
    vector<string> pizzatoppings;
    
    string toppings;
    string again;
    
    do
    {
        cout << "What pizza toppings would you like? " << endl;
        cin >> toppings;
        pizzatoppings.push_back(toppings);
        
        cout << " " << endl;
        cout << "Do you want another topping? Y/N ($1.25 for every topping)" << endl;
        cin >> again;
    
    }
    
    while (again.compare("Y") == 0);
    
    for(int n = 0; n < pizzatoppings.size(); n++)
    {
        cout << " " << endl;
        cout << "The topping i would like are: " << pizzatoppings[n] << endl;
        
      
    }
}

void soda()
{
    string soda;
    char customerSoda;

    cout << "Would you like a soda? Y/N " << endl;
    cin >> soda;
    
    if (soda == "Y") {
        
        cout << "What typer of Soda would you like?" << endl;
        cin>> customerSoda;
        
        switch (customerSoda) {
            case 'P':
                printf(" I would like Pepsi. $1.50");
                break;
            
            case 'O':
                printf("I would like Orange Fanta. $1.50");
                break;
                
            case 'G':
                printf("I would like Grape Fanta. $1.50");
                break;
                
            case 'T':
                printf("I would like Sweet Tea. $1.50");
                break;
                
            case 'L':
                printf("I would like Lemonade. $1.50");
                break;
                
            case 'W':
                printf("I would like water. $0.50");
                
            default:
                break;
        }
    }
    else if (soda == "N" ) {
        cout << " Move On " << endl;
    }
    
}

void wings()
{
    string wings;
    char customersWings;
    
    cout << "Would you like wings? Y/N " << endl;
    cin >> wings;
    
    if (wings == "Y") {
        
        cout << "What flavor of wings would you like?" << endl;
        cin>> customersWings;
        
        switch (customersWings) {
            case 'H':
                printf(" I would like Hot Honey. $7.50 ");
                break;
            
            case 'L':
                printf("I would like Lemon Peper. $7.50");
                break;
                
            case 'B':
                printf("I would like Barbecue. $7.00");
                break;
                
            case 'M':
                printf("I would like Mild. $6.50");
                break;
                
            case 'S':
                printf("I would like Spice. $6.50");
                break;
                
            default:
                break;
        }
    }
    else if (wings == "N" ) {
        cout << " Done " << endl;
    }
    
    
}
