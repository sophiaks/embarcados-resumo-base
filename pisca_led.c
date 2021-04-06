void pisca_led(int times, int delay) {
    for (int i = 1; i < times; i++) {
        pio_set(PIOC, LED_PIO_IDX_MASK); //coloca 1 no pino LED
        delay_ms(delay);
        pio_clear(PIOC, LED_PIO_IDX_MASK); //coloca 0 no pino LED
        delay_ms(delay);
    }
}