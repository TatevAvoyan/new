#include "iostream"
#include "cstring"

//version 1
int test0(std::string word) {
    std::string test = "Ipsum Lorem Ipsum is simply dummy ... Lorem Ipsum Ipsum Lorem Ipsum is Lorem Ipsum is Lorem Ipsum Ipsum is";
    int i = 0;
    while(std::string::npos != test.find(word)) {
        std::cout << i + 1 << " Index: " << test.find(word) << "\n";
        test.replace(test.find(word), word.size(), "ipsum");
        i++;
    }
    return i;
}

// version 2
void test(std::string word){
    std::string test = "Ipsum Lorem Ipsum is simply dummy ... Lorem Ipsum Ipsum Lorem Ipsum is Lorem Ipsum is Lorem Ipsum Ipsum is";
    int j = test.length();
    int i;
    for(i = 0; i < j; i++){
        if (std::string::npos != test.find(word)){
            std::cout << i + 1 << " Index: " << test.find(word) << "\n";
            test.replace(test.find(word), word.size(), "ipsum");
        }
    }
}

// version 3
int text(std::string word) {

    std::string test = "Ipsum Lorem Ipsum is simply dummy ... Lorem Ipsum Ipsum Lorem Ipsum is Lorem Ipsum is Lorem Ipsum Ipsum is";
    int search_w_length = word.length();
    int i = test.find(word);

    while (i != std::string::npos){
        int j = word.length();
        if (i < j) {
            std::cout << "If \n";
        }
        else {
            int new_search_index = i + search_w_length;
            std::string new_str = test.substr(new_search_index);
            std::cout << new_str.find(word) << "\n";
        }
        i++;
    }
    return i;
}


int main() {

    int i = test0("Ipsum");
    std::cout << "Version 1: The word is used " << i << " times\n" ;

    test("Ipsum");

  /*  int k = text("Ipsum");
    std::cout << "Version 2: The word is used " << j << " times" ;*/

    return 0;
}