#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "model.h"
#include "view.h"
#include <string>


class ClickerController {
private:
    ClickerModel model;
    ClickerView view;

public:
    void run();
    void saveGameState(const std::string& filename) const;
    void loadGameState(const std::string& filename);
};

#endif 
