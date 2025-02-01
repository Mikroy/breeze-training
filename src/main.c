/**
 * @file main.c
 * 
 * @brief 
 * 
 * @author Miguel Ruiz Esparza
 * 
 * @copyright 2024
 */

/* MACROS */
/* LOCAL VARIABLES (static) */
/* GLOBAL VARIABLES (global) */
/* LOCAL PROTOTYPES */
/* GLOBAL PROTOTYPES */

int main (void)
{
    configure_clock();
    configure_io();
    configure_uart();
    configure_pwm();

    while (1)
    {

    }
    return 0;
}
