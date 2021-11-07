#include "iostream"
#include "cstring"

int test(std::string word){
    std::string test = "Lorem Ipsum is simply dummy ... Lorem Ipsum Lorem Ipsum is Lorem Ipsum is Lorem Ipsum is\"";
    int j = word.length();
    int i;
    for(i = 0; i < j; i++){
        if (std::string::npos != test.find(word)){
            std::cout << "Index: " << test.find(word) << "\n";
            test.replace(test.find(word), word.size(), "ipsum");
        } else {
            std::cout << "chi gtel\n";
        }
        std::cout <<  "i: " << i << "\n";
    }
    return i;
}

void text(std::string word) {

    std::string test = "Lorem Ipsum is simply dummy ... Lorem Ipsum Lorem Ipsum is Lorem Ipsum is Lorem Ipsum is";
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
}


int main() {

    int i = test("Ipsum");
    std::cout << "The word is used " << i << " times" ;

//    text("Ipsum");

    return 0;
}