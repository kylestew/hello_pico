#include "pico/stdlib.h"

const uint LED_PIN = PICO_DEFAULT_LED_PIN;

bool timer_callback(struct timer* t) {
    gpio_put(LED_PIN, !gpio_get(LED_PIN));
    return true;
}

int main() {
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    struct repeating_timer timer;
    add_repeating_timer_ms(-500, timer_callback, NULL, &timer);
    sleep_ms(4000);
    cancel_repeating_timer(&timer);

    return 0;
}
