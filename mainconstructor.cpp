#include <iostream>
using namespace std;

class Employee {
private:
    int age;
    int Id;
    int salary;
    string name;
    int THsalary;

public:
    // Default constructor
    Employee() : age(0), Id(0), salary(0), THsalary(0), name("") {}

    // Constructor with age and Id, and initializing other fields
    Employee(int a, int i, int s, string n) {
        age = a;
        Id = i;
        salary = s;
        name = n;
        THsalary = s - (s * 0.1);  // Example: 10% deduction for take-home salary
    }

    // Getter for salary
    int getsalary() {
        return salary;
    }

    // Getter for take-home salary
    int getTakeHomeSalary() {
        return THsalary;
    }

    // Setter for salary
    void setsalary(int s) {
        salary = s;
    }

    // Setter for take-home salary
    void setTakeHomeSalary(int ths) {
        THsalary = ths;
    }

    // Optional: Getter for name, if needed
    string getName() {
        return name;
    }
};

int main() {
    // Create an Employee object with specific values
    Employee e1(30, 1001, 10000, "John Doe");
    
    // Output salary using the getter function
    cout << "Salary: " << e1.getsalary() << endl;
    
    // Output take-home salary
    cout << "Take-home salary: " << e1.getTakeHomeSalary() << endl;

    return 0;
}
