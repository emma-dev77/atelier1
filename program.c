#include <stdio.h>
 
int main(void) {
    
   int speed=120;
   int alt=2000;

    printf("+-----------------------------------------------------------------------+\n");
    printf("|%4d                                                              %4d |\n", speed+40, alt+400);
    printf("|                                                                       |\n");
    printf("|                                                                       |\n");
    printf("|%4d                                                              %4d |\n", speed+30, alt+300);
    printf("|                                                                       |\n");
    printf("|                                                                       |\n");
    printf("|%4d                    PITCH:+143     BANK:+248                  %4d |\n", speed+20, alt+200);
    printf("|                           --- HORIZON ---                             |\n");
    printf("|                            --   -+-   --                              |\n");
    printf("|%4d                                                              %4d |\n", speed+10, alt+100);
    printf("|                                                                       |\n");
    printf("|                                  |                                    |\n");
    printf("|%4d                         -----------                        >%4d< |\n", speed, alt);
    printf("|                                  |                                    |\n");
    printf("|                                                                       |\n");
    printf("|%4d                                                              %4d |\n", speed-10, alt-100);
    printf("|                                                                       |\n");
    printf("|                                                                       |\n");
    printf("|%4d                                                              %4d |\n", speed-20, alt-200);
    printf("|                                                                       |\n");
    printf("|                                                                       |\n");
    printf("|%3d                                                               %4d |\n", speed-30 , alt-300);
    printf("|                                                                       |\n");
    printf("|                                                                       |\n");
    printf("|%3d                                                      VSI:+500 %4d |\n", speed-40, alt-400);
    printf("| [km/h]                                                           [m]  |\n"); 
    printf("+-----------------------------------------------------------------------+\n");
    printf("|         W           |      HDG:1431671456°        |        E          |\n");
    printf("|   |.....|.....|.....|..|.....|.....|.....|..|.....|..|.....|.....|    |\n");
    printf("|           240       |      270      300      330  |          060      |\n");
    printf("|            S        |            N           ^    |          NE       |\n");
    printf("+-----------------------------------------------------------------------+\n");
 
    return 0;
}