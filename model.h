#ifndef MODEL_H
#define MODEL_H

class ClickerModel {
private:
    int points;
    int level; 

public:
    ClickerModel();

    void incrementPoints();
    int getPoints() const;
    int getLevel() const; 
};

#endif
