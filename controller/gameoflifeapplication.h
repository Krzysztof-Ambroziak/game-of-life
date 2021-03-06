#ifndef GAMEOFLIFE_GAMEOFLIFEAPPLICATION_H
#define GAMEOFLIFE_GAMEOFLIFEAPPLICATION_H

#include <QApplication>
#include <QTimer>
#include "actions.h"
#include "gui/guiservice.h"
#include "model/model.h"

class GameOfLifeApplication: public QApplication {
    Q_OBJECT

public:
    explicit GameOfLifeApplication(int& argc, char** argv);
    
    Model* getModel();
    
    GuiService* getGuiService();
    
    void init();
    
    void setInterval(int interval);
    
    void timerTrigger();
    
    void show();

private:
    Model model;
    
    GuiService guiService;
    
    QTimer* const timer;
    
    Actions actions;
};

#endif // GAMEOFLIFE_GAMEOFLIFEAPPLICATION_H
