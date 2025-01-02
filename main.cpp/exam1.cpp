// #include <fstream>
// #include <iostream>
// #include <string>
// #include <cstdlib> // For system()
// #include <ctime>   // For date

// using namespace std;

// // Function to generate and save a QR code as an image file
// void saveQRCodeToFile(const string &url, const string &outputFile)
// {
//     string command = "qrencode -o " + outputFile + " '" + url + "'";
//     system(command.c_str());
//     cout << "QR Code saved as " << outputFile << endl;
// }

// // Function to generate and display a QR code in the console
// void displayQRCodeConsole(const std::string &url)
// {
//     std::string command = "qrencode -t ANSI256 '" + url + "'";
//     system(command.c_str());
// }

// // Function to add a product and handle both QR generation methods
// void addProduct(const string &name, int quantity, double pricePerUnit)
// {
//     // Generate the current date
//     time_t now = time(0);
//     tm *ltm = localtime(&now);
//     string date = to_string(1900 + ltm->tm_year) + "-" +
//                   to_string(1 + ltm->tm_mon) + "-" +
//                   to_string(ltm->tm_mday);

//     // Calculate total price
//     double totalPrice = quantity * pricePerUnit;

//     // Print product details
//     cout << "\nProduct Added:\n";
//     cout << "Name: " << name << "\n";
//     cout << "Quantity: " << quantity << "\n";
//     cout << "Price per Unit: " << pricePerUnit << "\n";
//     cout << "Total Price: " << totalPrice << "\n";
//     cout << "Date: " << date << "\n";

//     // Generate the URL for the QR code
//     string url = "http://127.0.0.1:8000/invoice/" + name;

//     // Save the QR code to a file
//     string outputFile = name + "_qr.png";
//     saveQRCodeToFile(url, outputFile);

//     // Display the QR code in the console
//     cout << "\nQR Code (URL: " << url << ") displayed below:\n";
//     displayQRCodeConsole(url);

//     // Prepare product details in JSON-like format
//     string productJson = "{\n"
//                          "  \"Product Name\": \"" +
//                          name + "\",\n"
//                                 "  \"Quantity\": " +
//                          to_string(quantity) + ",\n"
//                                                "  \"Price per Unit\": " +
//                          to_string(pricePerUnit) + ",\n"
//                                                    "  \"Total Price\": " +
//                          to_string(totalPrice) + ",\n"
//                                                  "  \"Date\": \"" +
//                          date + "\"\n"
//                                 "}";

//     // Read the existing JSON-like data from the file if it exists
//     ifstream inFile("products.json");
//     string fileData;
//     bool isFirstProduct = true;
//     if (inFile.is_open())
//     {
//         getline(inFile, fileData, '\0');
//         inFile.close();
//         // Check if the file already contains data (array start)
//         isFirstProduct = fileData.empty() || fileData == "[]";
//     }

//     // Write the updated product details to the file
//     ofstream outFile("products.json", ios::app);
//     if (isFirstProduct)
//     {
//         // If it's the first product, start the JSON array
//         outFile << "[\n"
//                 << productJson << "\n";
//     }
//     else
//     {
//         // If it's not the first product, append a comma before adding the new product
//         outFile << ",\n"
//                 << productJson << "\n";
//     }

//     // Close the JSON array if it's the last product
//     outFile << "]";
//     outFile.close();
//     cout << "Product details saved as products.json" << endl;
// }

// int main()
// {
//     string name;
//     int quantity;
//     double pricePerUnit;

//     cout << "Enter Product Name: ";
//     getline(cin, name);
//     cout << "Enter Quantity: ";
//     cin >> quantity;
//     cout << "Enter Price per Unit: ";
//     cin >> pricePerUnit;

//     addProduct(name, quantity, pricePerUnit);

//     return 0;
// } 

// ////////


//  curl qrenco.de