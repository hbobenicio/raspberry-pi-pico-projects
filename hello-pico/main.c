#include <pico/stdlib.h>

#ifndef PICO_DEFAULT_LED_PIN
#  error This program requires a board with a regular LED. Did you forgot to include <pico/stdlib.h>? Did you set the Pico SDK up correctly?
#endif

#define LED_PIN PICO_DEFAULT_LED_PIN

int main()
{
    // Setup
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Loop
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(500);

        gpio_put(LED_PIN, 0);
        sleep_ms(500);
    }
}
