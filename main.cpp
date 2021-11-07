#include "iostream"
#include "cstring"

void test(std::string word){
    std::string test = "Lorem Ipsum is simply dummy ... Lorem Ipsum";

    if (std::string::npos != test.find(word)){
        std::cout << test.find(word) << "\n";
        std::cout << test.find_last_not_of(word);
    } else  {
        std::cout << "chi gtel";
    }
}

int main() {

    test("Ipsum");

    return 0;
}