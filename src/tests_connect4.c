#include <stdio.h>
#include "connect4.h"
#include "tests_connect4.h"

void print_status(int);
void print_board(connect4*);

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();

void 
check_tests(int test)
{
    switch(test) 
    {
        case 1:
        {
            test1();
            break;
        }
        case 2:
        {
            test2();
            break;
        }
        case 3:
        {
            test3();
            break;
        }
        case 4:
        {
            test4();
            break;
        }
        case 5:
        {
            test5();
        }
        case 6:
        {
            test6();
        }
    }
}

void
test1() 
{
    connect4 game;
    connect4_init(&game, 4, 4, 2);
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 2));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 2));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 2));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);

    connect4_free (&game);
}

void
test2()
{
    connect4 game;
    connect4_init(&game, 4, 4, 2);
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 0));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 0));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 1));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 2));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 2));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_board(&game);

    connect4_free (&game);
}

void
test3() {
    connect4 game;
    connect4_init(&game, 4, 4, 2);
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 0));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 1));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 2));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 2));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 3));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 2));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 3));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 0));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_board(&game);
    
    connect4_free (&game);
}

void
test4() 
{
    connect4 game;
    connect4_init(&game, 10, 10, 2);
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 2));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 2));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 3));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 4));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 4));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 4));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 1));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 4));
    print_board(&game);

    connect4_free (&game);
}

void
test5()
{
    connect4 game;
    connect4_init(&game, 10, 10, 2);
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 0));
    print_status(connect4_make_play(&game, 2, 1));
    print_status(connect4_make_play(&game, 1, 2));
    print_status(connect4_make_play(&game, 2, 3));

    print_status(connect4_make_play(&game, 1, 0));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 1));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 2));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 2));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 3));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 2));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 3));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 0));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_board(&game);

    connect4_free (&game);
}

void
test6()
{
    connect4 game;
    connect4_init(&game, 10, 10, 2);
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 3));
    print_status(connect4_make_play(&game, 2, 1));
    print_status(connect4_make_play(&game, 1, 2));
    print_status(connect4_make_play(&game, 2, 0));

    print_status(connect4_make_play(&game, 1, 2));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 1));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 0));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 0));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 1));
    print_board(&game);
    print_status(connect4_make_play(&game, 2, 3));
    print_board(&game);

    print_status(connect4_make_play(&game, 1, 0));
    print_board(&game);

    connect4_free (&game);
}

void 
print_status(int status)
{
    printf("STATUS: %d\n", status);
}

void 
print_board(connect4* game)
{
    char* board = connect4_to_string(game);
    printf("%s \n", board);
}