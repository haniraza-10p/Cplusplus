#include <iostream>
#include <vector>
#include <string>
#include<cmath>

using namespace std;

enum eyeColor {Brown, Blue, Black};

class Car {
private:
    string Color;
    double Price;

protected:
    string Name;
    bool isBroken;

public:
    Car(string name, string color, double price) {
        Name = name;
        Color = color;
        Price = price;
        isBroken = false;
    }

    void getInfo() {
        cout << "Name : " << Name << endl;
        cout << "Color : " << Color << endl;
        cout << "Price : " << Price << " Rs" << endl;
        cout << endl;
    }

    void crashCar() {
        cout << Name << " crashed." << endl;
        isBroken = true;
    }

    void repairCar() {
        cout << Name << " repaired." << endl;
        isBroken = false;
    }

    void move() {
        if (isBroken)
            cout << Name << " is broken and cannot move." << endl;
        else
            cout << Name << " is ready to move." << endl;
    }
};

class SportsCar:public Car {
public:
    SportsCar(string name, string color, double price) :Car(name, color, price) {

    }
    void move() {
        if (isBroken)
            cout << Name << " is broken and cannot move." << endl;
        else
            cout << Name << " is ready to move like a sports car." << endl;
    }

};

int main()
{
    //Data types
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // age += 10;
    // cout << "Your age is: " << age << endl;

    //String Manupulation
    // string c = "Hani";
    // int length = c.length();
    // for(int i=0;i<length;i++){
    //     cout<<c[i];
    // }
    // cout<<endl;


    //Another type to write if/else statement
    //bool isTodaySunny = false;
    // isTodaySunny? cout<<"Sunny"<<endl:cout<<"Not Sunny"<<endl;

    //vectors
    //vector<string> last_jedi;
    // last_jedi.push_back("kylo");
    // last_jedi.push_back("rey");
    // cout << last_jedi[0] << " ";
    // cout << last_jedi[1] << " ";
    //cout << last_jedi.size() << "\n";

    //Switch case
    // eyeColor ec  = Black;
    // switch (ec)
    // {
    // case Black:
    //     cout<< "Black color"<<endl; break;
    // case Brown:
    //     cout<< "Brown color"<<endl; break;
    // case Blue:
    //     cout<< "Blue color"<<endl; break;
    // default:
    //     break;
    // }

    //Pointers
    /*int numbers[5] = { 1,3,5,7,9 };
    cout << numbers<<endl;
    cout << &numbers[0]<<endl;
    cout << numbers[0] << endl;

    int* numberPointer = numbers;
    cout << "Pointing to " << numberPointer << " value is : " << *numberPointer << endl;
    numberPointer++;
    cout << "Pointing to " << numberPointer << " value is : " << *numberPointer << endl;*/

    //Class Practice
    /*Car c1("Corolla", "White", 400000);
    Car c2("Yaris", "Black", 300000);
    c1.getInfo();
    c2.getInfo();
    
    c1.crashCar();
    c1.repairCar();

    c2.move();
    c2.crashCar();
    c2.move();
    c2.repairCar();
    c2.move();

    SportsCar sc1("Sportage", "Blue", 900000);
    sc1.getInfo();

    sc1.move();

    Car* carptr = &sc1;

    carptr->crashCar();
    carptr->move();*/

    //Working With Strings
   /* string s1 = "Hani Raza";
    cout << s1 << endl;
    cout << s1.length() << endl;
    cout << s1[0] << endl;
    cout << s1[1] << endl;
    s1[0] = 'F';
    cout << s1 << endl;

    cout << s1.find("Raza");
    cout << s1.substr(5, 4);*/

    //Working with Numbers
    /*cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.3) << endl;
    cout << floor(4.9) << endl;
    cout << ceil(4.1) << endl;
    cout << fmax(3,10) << endl;
    cout << fmin(3, 10) << endl;*/

    //User Input
    /*string name;
    cout << "Enter name : ";
    getline(cin, name);

    int age;
    cout << "Enter Age : ";
    cin >> age;*/

    //A small Calculator
    /*int num1, num2;
    char oper;
    double answer;

    cout << "Enter Number 1 : ";
    cin >> num1;
    cout << endl;

    cout << "Enter Number 2 : ";
    cin >> num2;
    cout << endl;

    cout << "Enter Operator (+,-,*,/): ";
    cin >> oper;
    cout << endl;

    switch (oper)
    {
    case '+':
        answer = num1 + num2; break;
    case '-':
        answer = num1 - num2; break;
    case '*':
        answer = num1 * num2; break;
    case '/':
        answer = num1 / num2; break;
    default:
        answer = 0;
        break;
    }

    cout << "Answer is: " << answer;*/

    //Guesing game
    /*int secret = 56;
    int guess = 0;
    int guessCountleft = 5;

    while (guess != secret && guessCountleft>0) {
        cout << "(You have "<< guessCountleft <<" chances left.) Enter guess from 1-99 :";
        cin >> guess;
        guessCountleft--;
    }
    if (guessCountleft == 0) {
        cout << endl << "Sorry! You Lost";
    }
    else {
        cout << endl << "Congratulations! You Win";
    }*/
    
    //Arrays
    /*int arr1[] = { 1,2,3,4,5,6,7,8,9 };
    int arr2[20] = { 1,2,3,4,5,6,7,8,9 };
    arr1[5] = 20;
    cout << arr1[5] << endl;
    cout << arr2[7]*/;

    //2Darray
    int twoDarray[4][3] = {

        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    
    };

    cout << twoDarray[2][1] << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << twoDarray[i][j] << " ";
        }
        cout << endl;
    }


    
        
    system("pause>0");


}