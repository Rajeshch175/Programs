#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    // Create and open a file for writing using fopen()
    FILE* file = fopen("example.txt", "wb"); // "wb" for binary write mode
    if (file == nullptr) {
        std::cerr << "Failed to create file." << std::endl;
        return 1;
    }

    // Write data to the file using fwrite()
    const char* text = "Hello, Windows!";
    size_t bytesWritten = fwrite(text, sizeof(char), strlen(text), file);
    if (bytesWritten != strlen(text)) {
        std::cerr << "Failed to write to file." << std::endl;
        fclose(file);
        return 1;
    }

    // Close the file using fclose()
    fclose(file);

    // Open the file for reading using fopen() with "rb" mode
    file = fopen("example.txt", "rb"); // "rb" for binary read mode
    if (file == nullptr) {
        std::cerr << "Failed to open file for reading." << std::endl;
        return 1;
    }   

    // Read data from the file using fread()
    char buffer[100];
    size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer), file);
    if (bytesRead == 0) {
        std::cerr << "Failed to read from file." << std::endl;
        fclose(file);
        return 1;
    }

    // Null-terminate the buffer to treat it as a string
    buffer[bytesRead] = '\0';

    // Close the file again using fclose()
    fclose(file);

    // Print the contents of the file
    std::cout << "File Contents: " << buffer << std::endl;

    // Use fseek() to set the file pointer to the beginning of the file
    file = fopen("example.txt", "rb");
    if (file == nullptr) {
        std::cerr << "Failed to open file for seeking." << std::endl;
        return 1;
    }

    fseek(file, 0, SEEK_SET); // Move to the beginning of the file

    // Use remove() to delete the file
    if (remove("example.txt") != 0) {
        std::cerr << "Failed to delete the file." << std::endl;
        return 1;
    }

    // Close the file again using fclose()
    fclose(file);

    return 0;
}
