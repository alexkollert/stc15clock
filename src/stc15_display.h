#ifndef __STC15_DISPLAY_H_
#define __STC15_DISPLAY_H_

#include <8052.h>
#include <stdint.h>

/* Delay execution by using hardware timer */
void _timer_delay();

void _digit(uint8_t /* position */,
            uint8_t /* value */,
            uint8_t /* dot */);

void stc15_show_time(uint8_t /* hours_high */,
                     uint8_t /* hours_low  */,
                     uint8_t /* minutes_high */,
                     uint8_t /* minutes_lot  */,
                     uint8_t /* dot */);

void stc15_show_byte(uint8_t /* value */);

/*
 * Detect if display connected to pins P2_0..7 / P3_2..5 is
 * a common cathode or anode type.
 */
void stc15_detect_display();

#endif  // __STC15_DISPLAY_H_
