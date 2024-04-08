#include "model.h"
#include <fstream>
#include <iostream>

using namespace std;

ClickerModel::ClickerModel() : points(0), level(1) {}

void ClickerModel::incrementPoints() {
    points++;
    if (points % 5 == 0) {
        level++;
    }
}

int ClickerModel::getPoints() const {
    return points;
}

int ClickerModel::getLevel() const {
    return level; 
}

void ClickerModel::saveGameState(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << points << std::endl;
        file << level << std::endl;
        file.close();
    } else {
        std::cerr << "Unable to open file " << filename << " for writing." << std::endl;
    }
}

void ClickerModel::loadGameState(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> points;
        file >> level;
        file.close();
    } else {
        std::cerr << "Unable to open file " << filename << " for reading." << std::endl;
    }
}

//void ClickerModel::getFilename(){
  //  std::cin<<filename;
//}

std::string ClickerModel::toRoman(int value) {
    struct romandata_t { int value; std::string numeral; };
    const struct romandata_t romandata[] = {
            1000, "M",
            900, "CM",
            500, "D",
            400, "CD",
            100, "C",
            90, "XC",
            50, "L",
            40, "XL",
            10, "X",
            9, "IX",
            5, "V",
            4, "IV",
            1, "I"
    };

    std::string result;
    for (const auto& data : romandata) {
        while (value >= data.value) {
            result += data.numeral;
            value -= data.value;
        }
    }
    return result;
}
