#include <stdio.h>
#include <Windows.h>
#define WIDTH 10        //����
#define HEIGHT 20        //����


 
 
 

void gotoxy(int x, int y)
{

    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

  {

                {0,0,0,0},

                {1,0,0,0},

                {1,1,1,0},

                {0,0,0,0}},

        {

                {0,0,1,0},

                {0,0,1,0},

                {0,1,1,0},

                {0,0,0,0}},

        {

                {1,1,1,0},

                {0,0,1,0},

                {0,0,0,0},

                {0,0,0,0}},

        {

                {1,1,0,0},

                {1,0,0,0},

                {1,0,0,0},

                {0,0,0,0}},


    {

{0, 0, 0, 0},

{0, 0, 1, 0},

{1, 1, 1, 0},

{0, 0, 0, 0} },  

{

{0, 1, 1, 0},

{0, 0, 1, 0},

{0, 0, 1, 0},

{0, 0, 0, 0} },   

{

{1, 1, 1, 0},

{1, 0, 0, 0},

{0, 0, 0, 0},

{0, 0, 0, 0} },   

{

{1, 0, 0, 0},

{1, 0, 0, 0},

{1, 1, 0, 0},

{0, 0, 0, 0} },


    {

{0, 0, 0, 0},

{0, 1, 0, 0},

{1, 1, 1, 0},

{0, 0, 0, 0} },  

{

{0, 0, 0, 0},

{0, 1, 0, 0},

{1, 1, 0, 0},

{0, 1, 0, 0} },   

{

{0, 0, 0, 0},

{0, 0, 0, 0},

{1, 1, 1, 0},

{0, 1, 0, 0} },   

{

{0, 0, 0, 0},

{0, 1, 0, 0},

{0, 1, 1, 0},

{0, 1, 0, 0} },



    {

{0, 1, 0, 0},

{0, 1, 0, 0},

{0, 1, 0, 0},

{0, 1, 0, 0} },  

{

{0, 0, 0, 0},

{0, 0, 0, 0},

{1, 1, 1, 1},

{0, 0, 0, 0} },   

{

{0, 1, 0, 0},

{0, 1, 0, 0},

{0, 1, 0, 0},

{0, 1, 0, 0} },   

{

{0, 0, 0, 0},

{0, 0, 0, 0},

{1, 1, 1, 1},

{0, 0, 0, 0} },


    {

{1, 1, 0, 0},

{1, 1, 0, 0},

{0, 0, 0, 0},

{0, 0, 0, 0} },  

{

{1, 1, 0, 0},

{1, 1, 0, 0},

{0, 0, 0, 0},

{0, 0, 0, 0} },   

{

{1, 1, 0, 0},

{1, 1, 0, 0},

{0, 0, 0, 0},

{0, 0, 0, 0} },   

{

{1, 1, 0, 0},

{1, 1, 0, 0},

{0, 0, 0, 0},

{0, 0, 0, 0} },




   {

{0, 0, 0, 0},

{0, 1, 1, 0},

{1, 1, 0, 0},

{0, 0, 0, 0} },  

{

{0, 1, 0, 0},

{0, 1, 1, 0},

{0, 0, 1, 0},

{0, 0, 0, 0} },   

{

{0, 0, 0, 0},

{0, 1, 1, 0},

{1, 1, 0, 0},

{0, 0, 0, 0} },  

{

{0, 1, 0, 0},

{0, 1, 1, 0},

{0, 0, 1, 0},

{0, 0, 0, 0} }, 



    {

{0, 0, 0, 0},

{1, 1, 0, 0},

{0, 1, 1, 0},

{0, 0, 0, 0} },  

{

{0, 0, 1, 0},

{0, 1, 1, 0},

{0, 1, 0, 0},

{0, 0, 0, 0} },

{  

{0, 0, 0, 0},

{1, 1, 0, 0},

{0, 1, 1, 0},

{0, 0, 0, 0} },  

{

{0, 0, 1, 0},

{0, 1, 1, 0},

{0, 1, 0, 0},

{0, 0, 0, 0} },



};




void MAP()
{
 
    system("cls");
 
    gotoxy(WIDTH , HEIGHT);
 
    int i;

    
    gotoxy(0, HEIGHT + 1);
    for (i = 0; i < WIDTH; i++)
        printf("��");
	
	gotoxy(0,0);
	for (i = 0; i < HEIGHT; i++)
        printf("��\n");
}

int main() {
	MAP();
}
