#include <iostream>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;
};

int main(){
    Cricketer* dhoni = new Cricketer(); // creates a dynamic object of type Cricketer
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    Cricketer* kohli = new Cricketer(); // creates a copy of the dynamic object dhoni
    *kohli = *dhoni;

    delete dhoni; // deallocates the memory occupied by dhoni

    cout << "Dhoni's jersey number: " << kohli->jersey_no << endl;
    cout << "Dhoni's country: " << kohli->country << endl;
    
}