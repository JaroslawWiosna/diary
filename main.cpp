#include<iostream>
#include<string>
#include<experimental/string_view>
#include<fstream>
#include<experimental/filesystem>

namespace fs = std::experimental::filesystem;

int main(int argc, char *argv[]) {

    std::string args = "";

    for (int i{1}; i < argc; ++i) {
        std::cout << argv[i];
        std::cout << std::endl;

        args += argv[i];
        args += " ";
    }

    std::cout << args << std::endl;

    std::cout << "Home directory is: " << getenv("HOME");
    std::cout << std::endl;

    std::string diaryName = "~/.diary";

    // change tilde to getenv("HOME");
    if ('~' == diaryName[0]) {
        diaryName = std::string(getenv("HOME")) + diaryName.substr(1, diaryName.size() - 1);
    }

    fs::path diaryPath(diaryName);
    if (fs::exists(diaryPath)) {
        std::cout << "~/.diary exists" << std::endl;
    } else {
        std::cout << "~/.diary does NOT exist" << std::endl;
        std::cout << "~/.diary will be created" << std::endl;
        std::ofstream outfile(diaryName);
        outfile << "T E X T" << std::endl;
        outfile.close();
    }

    return 0;
}
