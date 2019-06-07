using namespace std;
int main()
{
    int array3d[4][5][3];
    for (int row=0; row<4; row++)
        for (int col=0; col<5; col++)
            for (int ver=0; ver<3; ver ++)
                array3d[row][col][ver] = row + col + ver;
}