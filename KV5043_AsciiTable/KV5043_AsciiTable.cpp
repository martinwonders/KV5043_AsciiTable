#include <iostream>

int main() {
    std::cout << "ASCII Table (0 to 127):\n\n";
    std::cout << "Dec\tChar\t|\tDec\tChar\t|\tDec\tChar\t|\tDec\tChar\n";
    std::cout << "-------------------------------------------------------------\n";

    // Loop through 32 values in a group, with four columns per row
    for (int row = 0; row <= 31; ++row) {
        for (int col = 0; col < 4; ++col) {
            int value = row + (col * 32);  // Calculate the value for each column (0, 32, 64, 96)
            char asciiChar = static_cast<char>(value);

            // Check for non-printable characters and display "N/A"
            if (value < 32 || value == 127) {
                std::cout << value << "\t" << "N/A" << "\t|\t";
            }
            else {
                std::cout << value << "\t" << asciiChar << "\t|\t";
            }
        }
        std::cout << std::endl;  // New line after printing all four columns
    }

    return 0;
}
