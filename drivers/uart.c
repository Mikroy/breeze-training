//sercom3 uart on PA22(TX) and PA23(RX)
void configure_uart(void) {
    /* Enable SERCOM3 clock */
    GCLK->PCHCTRL[SERCOM3_GCLK_ID_CORE].reg = GCLK_PCHCTRL_GEN_GCLK0 | GCLK_PCHCTRL_CHEN;
    
    /* Configure PA22 as TX (MUX D), PA23 as RX (MUX D) */
    PORT->Group[0].PINCFG[22].bit.PMUXEN = 1;
    PORT->Group[0].PINCFG[23].bit.PMUXEN = 1;
    PORT->Group[0].PMUX[22 >> 1].reg |= PORT_PMUX_PMUXO_D | PORT_PMUX_PMUXE_D;

    /* Configure UART Baud Rate */
    SERCOM3->USART.BAUD.reg = 63019; // 115200 baud at 48 MHz

    /* Configure SERCOM3 as UART */
    SERCOM3->USART.CTRLA.reg = SERCOM_USART_CTRLA_MODE_USART_INT_CLK | 
                               SERCOM_USART_CTRLA_TXPO(1) | 
                               SERCOM_USART_CTRLA_RXPO(3);

    SERCOM3->USART.CTRLB.reg = SERCOM_USART_CTRLB_TXEN | SERCOM_USART_CTRLB_RXEN;
    while (SERCOM3->USART.SYNCBUSY.reg);

    /* Enable UART */
    SERCOM3->USART.CTRLA.bit.ENABLE = 1;
    while (SERCOM3->USART.SYNCBUSY.bit.ENABLE);
}
