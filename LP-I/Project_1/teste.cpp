#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Employee
{
    int id;
    string name;
    string position;
};

class Database
{
private:
    vector<Employee> employees;

public:
    void createTable()
    {
        // No explicit table creation needed in this simplified example
    }

    void insertRow(int id, const string &name, const string &position)
    {
        Employee employee{id, name, position};
        employees.push_back(employee);
    }

    void saveTableToFile(const string &filename)
    {
        ofstream outputFile(filename);

        if (!outputFile.is_open())
        {
            cerr << "Error opening the output file." << endl;
            return;
        }

        // Write the table headers to the file
        outputFile << "ID"
                   << "\t"
                   << "Name"
                   << "\t\t"
                   << "Position" << endl;

        // Write the table data to the file
        for (const auto &employee : employees)
        {
            outputFile << employee.id << "\t" << employee.name << "\t\t" << employee.position << endl;
        }

        outputFile.close();
        cout << "Table saved to file: " << filename << endl;
    }
};

int main()
{
    Database db;
    db.createTable();

    // Insert rows into the "employees" table
    db.insertRow(1, "John Doe", "Manager");
    db.insertRow(2, "Jane Smith", "Developer");
    db.insertRow(3, "Mike Johnson", "Salesperson");

    // Save the table to a file
    db.saveTableToFile("employees_table.txt");

    return 0;
}
