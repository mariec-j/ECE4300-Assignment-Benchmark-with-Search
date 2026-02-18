#include <iostream>
#include <set>
#include <random>
#include <fstream>
#include <cmath>
using namespace std;

// Main file!!!!!!!!

int main() {
    int N = 100000; //ten million Total number of unique numbers to generate
    set<double> numbers;

    // Initialize a random number generator
    random_device rd;
    mt19937 gen(rd());
    int range = 100000000;//hundred million
    uniform_int_distribution<> dis(1, range); // Adjust the range as needed

    // Generate unique random numbers
    while (numbers.size() < N) {
        numbers.insert(dis(gen));
    }

    // Open the file for writing
    string fname =  to_string(N) + ".csv";
    ofstream writeFile(fname);
    if (!writeFile.is_open()) {
        cerr << "Unable to open file for writing." << std::endl;
        return 1; // Return an error code
    }

    // Write the numbers to the file in ascending order
    for (int num : numbers) {
        writeFile << num << "\n";
    }

    // Close the file
    writeFile.close();

    std::cout << "Numbers written to numbers.txt successfully." << std::endl;

    return 0;
}
