#include<iostream>
using namespace std;
class student {
    private:
    int ID;
    string Name;
    string Specialization;
    
    public:
    student(int id, string name, string special) {
        ID = id;
        Name = name;
        Specialization = special;
    }
 
    string getName() {
        return Name; 
    }
    int getID() {
        return ID; 
    }
    string getSpecialize() {
        return Specialization; 
    }
    void setName(string name) {
        Name = name;
    }
    void setID(int id){
        ID = id;
    }
    void setSpecialize(string special) {
        Specialization = special;
    }
};
int main() {
    student my(12,"sara", "cs");
    my.setName("Sara Talib");
    my.setID(2021);
    my.setSpecialize("Computer Science");
    cout << my.getName() << endl;
    cout << my.getID() << endl;
    cout << my.getSpecialize() << endl;

    return 0;
}