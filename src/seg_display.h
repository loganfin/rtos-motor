#pragma once

#include <FreeRTOS.h>
#include <task.h>
#include <queue.h>
#include "pico/stdlib.h"

extern const uint seg_display_left;
extern const uint seg_display_right;

extern QueueHandle_t xQControl;

typedef struct display_packet {
    int data;
    uint duration;
} display_packet;

void seg_display_init();
void seg_display_digit(uint display, uint8_t digit);
void seg_display_off();

/* FreeRTOS Tasks */
void vDisplayManager();
void vLeftDisplay();
void vRightDisplay();
