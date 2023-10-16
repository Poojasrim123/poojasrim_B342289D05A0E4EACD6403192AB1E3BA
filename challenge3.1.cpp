#include <iostream>
#include <vector>
#include <string>

std::vector<int> linear_search_product(const std::vector<std::string>& product_list, const std::string& target_product) {
    std::vector<int> indices;

    for (int i = 0; i < product_list.size(); ++i) {
        if (product_list[i] == target_product) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::vector<std::string> products = {"apple", "banana", "apple", "orange", "apple"};
    std::string target = "apple";
    std::vector<int> result = linear_search_product(products, target);

    if (result.empty()) {
        std::cout << "Product not found." << std::endl;
    } else {
        std::cout << "Product found at indices: ";
        for (int index : result) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}