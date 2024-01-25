#include <iostream>
#include <string>

void permute_str(std::string current, std::string choices) {
    if (choices.empty()) {
        std::cout << current << std::endl;
    } else {
        for (size_t i = 0; i < choices.length(); ++i) {
            char chosen = choices[i];
            std::cout << chosen << ":)" << std::endl;
            std::string remaining_choices = choices;
            remaining_choices.erase(i, 1);
            std::cout << remaining_choices << ":()" << std::endl;
            permute_str(current + chosen, remaining_choices);
        }
    }
}

int main() {
    std::string input;
    std::cin >> input;
    permute_str("", input);

    return 0;
}
