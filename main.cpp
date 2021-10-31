#include "iostream"
#include "string"
using std::cout;

void print(){

    std::string text = "Python is an interpreted high-level general-purpose programming language. Its design philosophy emphasizes code readability with its use of significant indentation. Its language constructs as well as its object-oriented approach aim to help programmers write clear, logical code for small and large-scale projects.";

    std::cout << "Enter the text.\n";
    std::string word;
    std::getline(std::cin, word);

    if (std::string::npos != text.find(word)){
        std::cout << "first index - "  << text.find(word) << " last index - " << text.find(word) - 1 + word.length();
    } else {
        cout << " 404 ";
    }
}

int main(){

    print();

    return 0;
}