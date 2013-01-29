#ifndef BOARDCLASS_H
#define BOARDCLASS_H

class boardClass
{
    public:
        boardClass();
        virtual ~boardClass();
        void initialize();
        void render();
        bool checkWin();
        void update(int move, char icon);
        bool gameDraw();

    protected:
    private:
    char box[9];
};

#endif // BOARDCLASS_H
