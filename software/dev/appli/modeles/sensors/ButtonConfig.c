//
// Created by Thomas on 05/05/2023.
// Edit by Dorian.
//

#include "ButtonConfig.h"
#include "config.h"
#include "stm32f1_gpio.h"
#include "macro_types.h"
#include "systick.h"



#define LONG_PRESS_DURATION    1000    //unité : [1ms] => 1 seconde.

static void process_ms(void);

static volatile bool_e flag_10ms;
static volatile uint32_t t = 0;
static bool_e initialized = FALSE;

//void BUTTONCONFIG_init(void)
//{
//    //Initialisation du port du bouton bleu en entrée
//    BSP_GPIO_PinCfg(BUTTONCONFIG_GPIO, BUTTONCONFIG_PIN, GPIO_MODE_INPUT,GPIO_PULLUP,GPIO_SPEED_FREQ_HIGH);
//
//    Systick_add_callback_function(&process_ms);
//
//    initialized = TRUE;
//}

static void process_ms(void)
{
    static uint32_t t10ms = 0;
    t10ms = (t10ms + 1)%10;        //incrémentation de la variable t10ms (modulo 10 !)
    if(!t10ms)
        flag_10ms = TRUE; //toutes les 10ms, on lève ce flag.
    if(t)
        t--;
}

/**
    Cette machine à états gère la détection d'appuis sur le bouton bleu.
    Elle doit être appelée en boucle très régulièrement.
    Précondition : avoir appelé auparavant BUTTON_init();
    Si un appui vient d'être fait, elle renverra BUTTON_EVENT_SHORT_PRESS ou BUTTON_EVENT_LONG_PRESS
*/
//button_event_e BUTTON_state_machine(void)
//{
//    typedef enum
//    {
//        INIT = 0,
//        WAIT_BUTTON,    //En C, les nombres se suivent dans une enum.
//        BUTTON_PRESSED,
//        WAIT_RELEASE
//    }state_e;
//
//    static state_e state = INIT; //La variable d'état, = INIT au début du programme !
//    /**    Le mot clé static est INDISPENSABLE :
//    *     "state" DOIT GARDER SA VALEUR d'un appel à l'autre de la fonction.
//    *    Une place lui est réservée en mémoire de façon permanente
//    *    (et non pas temporaire dans la pile !)
//    */
//
//    button_event_e ret = BUTTON_EVENT_NONE;
//    bool_e blue_button;
//
//    if(flag_10ms && initialized)    //le cadencement de cette portion de code à 10ms permet d'éliminer l'effet des rebonds sur le signal en provenance du bouton.
//    {
//        flag_10ms = FALSE;
//        blue_button = !HAL_GPIO_ReadPin(BUTTONCONFIG_GPIO, BUTTONCONFIG_PIN);
//        switch(state)
//        {
//            case INIT:
//                state = WAIT_BUTTON;    //Changement d'état
//                break;
//            case WAIT_BUTTON:
//                if(blue_button)
//                {
//                    printf("[BUTTON] button pressed\n");
//                    t=LONG_PRESS_DURATION;    //Action réalisée sur la transition.
//                    state = BUTTON_PRESSED;    //Changement d'état conditionné à "if(current_button)"
//                }
//                break;
//            case BUTTON_PRESSED:
//                if(t==0)
//                {
//                    ret = BUTTON_EVENT_LONG_PRESS;
//                    printf("[BUTTON      ] long press event\n");
//                    state = WAIT_RELEASE;        //le temps est écoulé, c'était un appui long !
//                }
//                else if(!blue_button)
//                {
//                    ret = BUTTON_EVENT_SHORT_PRESS;
//                    printf("[BUTTON      ] short press event\n");
//                    state = WAIT_BUTTON;    //le bouton a été relâché avant l'écoulement du temps, c'était un appui court !
//                }
//                break;
//
//            case WAIT_RELEASE:
//                if(!blue_button)
//                {
//                    printf("[BUTTON      ] release button after long press\n");
//                    state = WAIT_BUTTON;
//                }
//                break;
//            default:
//                state = INIT;    //N'est jamais sensé se produire.
//                break;
//        }
//    }
//    return ret;
//}
