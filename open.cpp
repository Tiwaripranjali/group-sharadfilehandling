#include <fstream>
int main() {
// Create an ifstream object
Ifstream
infile("example.txt");
// Check if the file was
opened successfully
if (infile.is_open()) {
// Read from the file
// ...
// Close the file
infile.close();
}
 else {
// Handle error
}
return 0;
}
