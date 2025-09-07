/*
 * keynames_3x5_2.h
 *
 *
 * Created by Alan on 7/24/22.
 *
 * Key Position Names for a tern (30 key) form factor
 *
 *
 *                       UNIVERSAL KEY POSITION NAMES
 *          alphas & combos should be limited to 3x5+2 common core
 *         ╭─────────────────╮                  ╭─────────────────╮
 *         │   0   1   2   3 │                  │  4   5   6   7  │
 *     │   8   9  10  11  12 │                  │ 13  14  15  16  17  |
 *     |  18  19  20  21     │                  │     22  23  24  25  |
 *     ╰────────────╮ 26  27 |                  | 28  29 ╭────────────╯
 *                  ╰────────╯                  ╰────────╯
 *
 * FRA   FR1 FR2 FR3 FR4 FR5                      FR6 FR7 FR8 FR9 FR0   FRB
 * NRA   NR1 NR2 NR3 NR4 NR5                      NR6 NR7 NR8 NR9 NR0   NRB
 *     ╭─────────────────────╮                  ╭─────────────────────╮
 *     │     LT3 LT2 LT1 LT0 │                  │ RT0 RT1 RT2 RT3     │ 
 *     │ LM4 LM3 LM2 LM1 LM0 │                  │ RM0 RM1 RM2 RM3 RM4 │ 
 *     │ LB3 LB2 LB1 LB0     │                  │     RB0 RB1 RB2 RB3 │ 
 *     ╰────────────╮LH2 LH1 |                  | RH1 RH2╭────────────╯
 *                  ╰────────╯                  ╰────────╯ 
 */

#pragma once

#define LT3 0
#define LT2 1
#define LT1 2
#define LT0 3

#define RT0 4
#define RT1 5
#define RT2 6
#define RT3 7


#define LM4 8
#define LM3 9
#define LM2 10
#define LM1 11
#define LM0 12

#define RM0 13
#define RM1 14
#define RM2 15
#define RM3 16
#define RM4 17

#define LB3 18
#define LB2 19
#define LB1 20
#define LB0 21

#define RB0 22
#define RB1 23
#define RB2 24
#define RB3 25


#define LH2 26
#define LH1 27
#define RH1 28
#define RH2 29

#define KEYS_L LT0 LT1 LT2 LT3  LM0 LM1 LM2 LM3 LM4  LB0 LB1 LB2 LB3  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3  RM0 RM1 RM2 RM3 RM4  RB0 RB1 RB2 RB3  // right-hand keys
#define THUMBS LH2 LH1  RH1 RH2                                       // thumb keys
