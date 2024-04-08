#include "model.h"
#include <fstream>
#include <iostream>

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