#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include "TargetFinder.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: provide number of vector elements." << std::endl; 
        return -1;
    }

    try {
        int n = std::stoi(argv[1]); 
        std::vector<int> numeric_vec;
        numeric_vec.reserve(n); 

        std::cout << "Provide " << n << " vector elements:\n";
        for (int i = 0; i < n; ++i) {
            int num;
            std::cin >> num;
            numeric_vec.push_back(num);
        }

        std::cout << "Your vector: ";
        for (int num : numeric_vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        int target;
        std::cout << "Provide target: ";
        std::cin >> target;

        TargetFinder<int> finder(target);

        auto result = std::find_if(numeric_vec.begin(), numeric_vec.end(), finder);

        if (result != numeric_vec.end()) {
            std::cout << "Target found in the vector." << std::endl;
        } else {
            std::cout << "Target not found in the vector." << std::endl;
        }
    }
    catch(const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }
    catch(const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    catch(...) {
        std::cerr << "Unknown error occurred" << std::endl;
    }

    system("pause");
    return 0;
}
