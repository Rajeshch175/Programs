#include <Windows.h>
#include <iostream>

int main() {
    // Use wide-character string for the filename
    HANDLE hFile = CreateFileW(L"example.txt", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        std::cerr << "Failed to create file." << std::endl;
        return 1;
    }

    const wchar_t* text = L"Hello, Windows!"; // Use wide-character string for the text
    DWORD bytesWritten;
    if (!WriteFile(hFile, text, wcslen(text) * sizeof(wchar_t), &bytesWritten, NULL)) {
        std::cerr << "Failed to write to file." << std::endl;
        CloseHandle(hFile);
        return 1;
    }

    CloseHandle(hFile);
    return 0;
}

