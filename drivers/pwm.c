//PWM signal on PA81 Using TT0
void configure_pwm(void) {
    /* Enable the TCC0 clock */
    GCLK->PCHCTRL[TCC0_GCLK_ID].reg = GCLK_PCHCTRL_GEN_GCLK0 | GCLK_PCHCTRL_CHEN;

    /* Configure PA18 as TCC0 output */
    PORT->Group[0].PINCFG[18].bit.PMUXEN = 1;
    PORT->Group[0].PMUX[18 >> 1].reg |= PORT_PMUX_PMUXO_E;

    /* Set up TCC0 for PWM */
    TCC0->CTRLA.reg = TCC_CTRLA_PRESCALER_DIV64;
    TCC0->WAVE.reg = TCC_WAVE_WAVEGEN_NPWM;
    TCC0->CC[0].reg = 24000; // Duty cycle
    TCC0->PER.reg = 48000; // Period (sets frequency)
    while (TCC0->SYNCBUSY.reg);

    /* Enable TCC0 */
    TCC0->CTRLA.bit.ENABLE = 1;
    while (TCC0->SYNCBUSY.bit.ENABLE);
}
