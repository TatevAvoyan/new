#include "iostream"
#include "cstring"

void test(std::string word){
    std::string test = "Lorem Ipsum is simply dummy ... Lorem Ipsum";

    for(int i = 0; i < test.find(word); i++ ){
        if (std::string::npos != test.find(word)){
            test.replace(test.find(word), word.size(), "");

        } else  {
            std::cout << "chi gtel";
        }
        std::cout << i;
    }
}

int main() {

    test("Ipsum");

    return 0;
}