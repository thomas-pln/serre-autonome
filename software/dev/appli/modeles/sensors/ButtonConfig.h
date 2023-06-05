//
// Created by Thomas on 05/05/2023.
// Edit by Dorian.
//


// Button de config cablé en A2

#ifndef BUTTON_H_
#define BUTTON_H_

typedef enum
{
    BUTTON_EVENT_NONE,
    BUTTON_EVENT_SHORT_PRESS,
    BUTTON_EVENT_LONG_PRESS
}button_event_e;

void BUTTONCONFIG_init(void);

button_event_e BUTTON_state_machine(void);


#endif /* BUTTON_H_ */
