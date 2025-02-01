//PA14 as output pin
void configure_io(void) {
    PORT->Group[0].DIRSET.reg = (1 << 14);   // Set PA14 as output
    PORT->Group[0].OUTCLR.reg = (1 << 14);   // Set PA14 LOW
}
