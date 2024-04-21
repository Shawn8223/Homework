#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ZipCode {
private:
    int zip_code; // Internally storing the zip code as an integer

    // Mapping of digit to its barcode representation
    const vector<string> barcode_map = {
        "11000", // 0
        "00011", // 1
        "00101", // 2
        "00110", // 3
        "01001", // 4
        "01010", // 5
        "01100", // 6
        "10001", // 7
        "10010", // 8
        "10100"  // 9
    };

    // Converts an integer zip code to a barcode string
    string zip_to_barcode() const { // Add const here
        string barcode = "1"; // Start with a leading 1 (long bar)
        int temp_zip = zip_code;

        // Convert each digit of the zip code to barcode format
        for (int i = 0; i < 5; i++) {
            int digit = temp_zip % 10; // Extract the last digit
            barcode = barcode_map[digit] + barcode; // Prepend the barcode representation
            temp_zip /= 10; // Remove the last digit
        }

        barcode += "1"; // Append a trailing 1 (long bar)
        return barcode;
    }

    // Converts a barcode string to an integer zip code
    int barcode_to_zip(const string& barcode) {
        // Remove leading and trailing 1
        string actual_barcode = barcode.substr(1, barcode.size() - 2);
        int zip = 0;

        // Process each group of 5 digits
        for (int i = 0; i < actual_barcode.size(); i += 5) {
            string group = actual_barcode.substr(i, 5);

            // Compare the group with barcode_map to find the digit
            for (int j = 0; j < 10; j++) {
                if (group == barcode_map[j]) {
                    zip = zip * 10 + j; // Append the digit to the zip code
                    break;
                }
            }
        }

        return zip;
    }

public:
    // Constructor taking integer zip code
    ZipCode(int zip) {
        zip_code = zip; // Store the zip code
    }

    // Constructor taking barcode string
    ZipCode(const string& barcode) {
        zip_code = barcode_to_zip(barcode);
    }

    // Return the integer zip code
    int get_zip() const { // Add const here
        return zip_code;
    }

    // Return the barcode string
    string get_barcode() const { // Add const here
        return zip_to_barcode();
    }
};


int main() {
    // Create a ZipCode object using integer zip code
    ZipCode zip1(99504);
    cout << "Zip code: " << zip1.get_zip() << endl;
    cout << "Bar code: " << zip1.get_barcode() << endl;

    // Create a ZipCode object using bar code string
    ZipCode zip2("110100101000101011000010011");
    cout << "Zip code: " << zip2.get_zip() << endl;
    cout << "Bar code: " << zip2.get_barcode() << endl;

    system("pause");
    return 0;
}
