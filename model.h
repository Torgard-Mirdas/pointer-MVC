#ifndef MODEL_H
#define MODEL_H
#include <string>

using namespace std;

class ClickerModel {
private:
    int points;
    int level; 

public:
    ClickerModel();

    void incrementPoints();
    int getPoints() const;
    int getLevel() const;
    void saveGameState(const std::string& filename) const;
    void loadGameState(const std::string& filename);
    std::string toRoman(int value);
};

#endif
