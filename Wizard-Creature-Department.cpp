/*==========================================================

 Title:     Assignment 9 - C++ Wizard Creature Department
 Course:  	CIS 2252
 Author:  	<Mohammed Tanvvir>
 Date:    	<8 /10 /23 >
 Description: This program ....

 ==========================================================
*/

#include <iostream>

using namespace std;
//class var
class Creature {
    protected:
    string name;
    int quantity;
    string creatureType = "unknown";
    
public:
//nopar constr
    Creature(){ 
    name = " ";
    quantity = 0;
}
//par const
Creature(string name, int quantity){
    this->name = name;
    this->quantity = quantity;
}
//mutator
void setName(string name) {
    this->name = name; 
}
void setQuantity(int quantity){
    this->quantity = quantity;
}
//accessor methos
string getName(){
    return name;
}
int getQuantity(){
    return quantity;
}
//print fuinciton to display creature info
void printStatement(){
    cout << "There's " << quantity << " creatures named " << name << endl;
}

};

class Phoenix:public Creature{
    //class car decla
    private:
    string color;
    
    public:
    //no par constric
    Phoenix():Creature(){
        color = " ";
        creatureType = " phoenixes";
    }
    Phoenix(string name, int quanity, string color):Creature(name, quanity){
        this->color = color;
        creatureType = " phoenixes";
    }
    void setColor(string color){
        this->color = color;
    }
    
    string getColor(){
        return color;
    }
    //overrriden print for pheonix info
    void printStatement(){
        if(getQuantity() == 1)
        cout << "There's " << getQuantity() << " " << color << creatureType << " named " << getName() << endl;
        
        else
        cout << "There's " << getQuantity() << " " << color << creatureType << " named " << getName() << endl;
    }
};

class Basilisk:public Creature{
    public:
    Basilisk():Creature(){
        creatureType = " basilisk";
    }
    Basilisk(string name, int quantity):Creature(name, quantity){
        creatureType = " basilisk";
    }
    
    void printStatement(){
        setQuantity(1);
        cout<<"There's " << getQuantity() << creatureType << " named " << getName() << endl;
    }
};


//Write classes here...

int main()
{
	//create empty array of size 3 for storing name
    string nameArr[3];

	// Write loop here to record user input as names
    // and set third name to “Clover”
    for(int i = 0; i<2; i++){
        cin >> nameArr[i];
    }
    nameArr[2] = "Clover";

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();

    
}

