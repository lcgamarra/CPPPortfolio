#include <iostream>
using namespace std;

class SafeFileWriter {
private:
    FILE* file;

public:
    SafeFileWriter(const char* filename, const char* mode) {
        file = fopen(filename, mode);
        if (!file) throw std::runtime_error("File could not be opened");
    }

    void write(const char* message) {
        fputs(message, file);
    }

    ~SafeFileWriter() {
        if (file) fclose(file);
    }
};

int main() {

    SafeFileWriter safe_file_writer("log.txt", "w");
    safe_file_writer.write("RAII Works!");

    return 0;
}

