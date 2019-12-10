#include <iostream>
#include <cstring>

using namespace std;

class Map
{
public:

    int mapDisplay[5][5];

    Map(int map[][5], int X, int Y)
    {
        //quer o endereço no memcpy, não o valor, logo é .mapDisplay...
        //eh ponteiro que manda, logo ele mesmo... -> eh pro valor!
        //memcpy(mapDisplay, map, sizeof(int)*5*5);
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                this->mapDisplay[i][j] = map[i][j];
            }
        }
        set_X(X);
        set_Y(Y);
    }

    void set_X(int X)
    {
        this->currentX = X;
    }

    int get_X()
    {
        return this->currentX;
    }

    void set_Y(int Y)
    {
        this->currentY = Y;
    }

    int get_Y()
    {
        return this->currentY;
    }

    int Right()
    {
        int right;
        int X = get_X();
        int Y = get_Y();


        if(Y == 4)
            right = 1;
        else if(this->mapDisplay[X][Y+1] == 1)
            right = 1;
        else
            right = 0;

        return right;
    }

    int Down()
    {
        int down;
        int X = get_X();
        int Y = get_Y();

        if(X == 4)
            down = 1;
        else if(this->mapDisplay[X+1][Y] == 1)
            down = 1;
        else
            down = 0;

        return down;
    }

    int Left()
    {
        int left;
        int X = get_X();
        int Y = get_Y();

        if(Y == 0)
            left = 1;
        else if(this->mapDisplay[X][Y-1] == 1)
            left = 1;
        else
            left = 0;

        return left;
    }

    int Top()
    {
        int top;
        int X = get_X();
        int Y = get_Y();

        if(X == 0)
            top = 1;
        else if(this->mapDisplay[X-1][Y] == 1)
            top = 1;
        else
            top = 0;

        return top;
    }

    int CurrentPosit()
    {
        int X, Y;

        X = get_X();
        Y = get_Y();

        EraseSquare();

        if(X == 4 && Y == 4)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }


private:
    //int mapDisplay[5][5];
    int currentX;
    int currentY;

    void EraseSquare()
    {
        this->mapDisplay[this->currentX][this->currentY] = 1;
    }

};

int MoveCop(int map[][5], int X, int Y)
{
    int right, down, left, top, success = 0;
    //Map newMap = new Map(map, X, Y);
    Map newMap(map, X, Y);

    if(newMap.CurrentPosit() ==  1)
    {
        return 1;
    }

    else
    {
        if(newMap.Right() == 0)
        {
            success += MoveCop(newMap.mapDisplay, X, Y+1);
        }
        if(newMap.Down() == 0)
        {
            success += MoveCop(newMap.mapDisplay, X+1, Y);
        }
        if(newMap.Left() == 0)
        {
            success += MoveCop(newMap.mapDisplay, X, Y-1);
        }
        if(newMap.Top() == 0)
        {
            success += MoveCop(newMap.mapDisplay, X-1, Y);
        }

        return 0 + success;
    }

}

int main()
{
    int map[5][5];
    int N;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j=0; j<5; j++)
        {
            for (int k=0; k<5; k++)
            {
                cin >> map[j][k];
            }
        }

        if(MoveCop(map, 0, 0) > 0)
            cout << "COPS\n";
        else
            cout << "ROBBERS\n";
    }
    exit(0);
}
