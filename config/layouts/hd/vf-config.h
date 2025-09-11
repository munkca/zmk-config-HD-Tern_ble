/*
 * Vf-config.h
 *
 * SPDX-License-Identifier: MIT
 *
 * See handsdown/handsdown.h for HD variation codes
 *
 */
#pragma once

#define HD_LAYOUT vf        // HD variation 2 letter code from handsdown.h
#include "handsdown.h"      // load header now for HD common defs

#define _______  &trans

/*      Base (alpha) Layer Hands Down Vibranium-vf
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │      W   M   G   X  │ │  -+  .:  /*   J      │
 │  S   C   N   T   K  | |  ,;   A   E   I   H  │
 │  F   P   L   D      │ │       U   O   Y   B  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define lbl_hd "HD-Vf"
#define HD_LT                 &ak_W           &ak_M           &ak_G           &ak_X
#define HD_LM &mt_S LCTRL S   &mt_C LALT C    &mt_N LGUI N    &mt_T LSHFT T   &ak_K
#define HD_LB &ak_F           &ak_P           &ak_L           &ak_D           
#define HD_LH                                                 &lt_BSPC l_fun BSPC   &lt_R l_nav R

#define HD_RT &MinusPlus      &DotColn        &SlshStar       &ak_J          
#define HD_RM &CommaMagic     &mt_A RSHFT A   &mt_E RGUI E    &mt_I RALT I    &mt_H RCTRL H
#define HD_RB                 &ak_U           &ak_O           &ak_Y           &ak_B
#define HD_RH &lt l_sym SPACE &lt l_nav RETURN


#define lbl_dot "l_akDOT" // adaptive grabbag sticky layer.
#define DOT_LT                 &kp T          &kp L           &kp L           &kp L    // Shifted one right from original layout. A problem?       
#define DOT_LM _______        _______         _______         _______         _______
#define DOT_LB _______        _______         _______         _______           
#define DOT_LH                                                _______         _______

#define DOT_RT &kp DLLR       &kp DOT         _______         _______       
#define DOT_RM &caps_word     _______         _______         _______         _______
#define DOT_RB                _______         _______         _______         _______        
#define DOT_RH _______        _______


