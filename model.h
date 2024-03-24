#ifndef MODEL_H
#define MODEL_H

class ClickerModel {
private:
    int points;

public:
    ClickerModel();

    void incrementPoints();
    int getPoints() const;
};

#endif 
