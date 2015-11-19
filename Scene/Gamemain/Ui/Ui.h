#include "../../../Share.h"

class Ui
{
public:
    Ui();
    
    void Draw();

    void Setup();
    void Cost(const int& cost);
    Item Select(Item _item);
    void SelectDraw(Item _item);

    bool is_start;

private:
    Font font = Font("res/kokubanB.ttf");
    
    Object itemobject[static_cast<int>(Item::MAX)];
    //Texture comic;
    Texture desk;
    Texture game;
    Texture robot;
    Texture comic;
    Texture floor;

    void FloorDraw();


    
    
};

