/*
 *
 *  Core/common layer defs for tern (30) keys.
 *
 * extended keycodes found in "hosts" folder
 *MUCH TO DO
 */

//                                                Symbol & math
//  * left paired symbols are "linger keys" via hold taps. Tap for left, hold for pair with insertion point between
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|        |    °   |   ≤    |   ≥    |    <    |                |   |    |    \   |    €   |    £   |        |
//|    ∞   |    [   |   (    |   {    |    >    |                |   /    |    ~   |    %   |    ^   |   &    |
//|    •   |    ]   |   )    |   }    |         |                |        |    `   |    @   |    #   |   $    |
//╰──────────────────────────╮ dwdlt  |  dwdr   |                | &none  | &appr  ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_sym_label "l_sym"

#define l_sym_LT                    &kp S_DEGR          &kp LA(COMMA)       &kp LA(DOT)         &lk_LRltgt
#define l_sym_RT &kp PIPE           &kp BSLH            &kp C_EURO          &kp C_BPND         

#define l_sym_LM &kp LA(N5)         &lk_LRbkt           &lk_LRpar           &lk_LRbrc           &kp GT
#define l_sym_RM &kp FSLH           &mt LCTRL TILDE     &mt RSHFT PRCNT     &mt RALT CARET      &mt RGUI AMPS

#define l_sym_LB &kp LS(LA(9))      &kp RBKT            &kp RPAR            &kp RBRC            
#define l_sym_RB                    &kp GRAVE           &kp AT              &kp HASH            &kp DLLR         

#define l_sym_LH &kp S_DWRDL        &kp S_DWRDR
#define l_sym_RH &none              &kp &none

//                                         Fkey & Num Row (optimized)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|         |  F10   |  F11   |  F12   |  F13   |                |    *   |   7    |    8   |   9    |        |
//|   C/F5  |  A/F6  |  G/F7  |  S/F8  |  F14   |                |    /   |  S/1   |   G/2  |  A/3   |   C/-  |
//|    F1   |   F2   |   F3   |   F4   |        |                |        |   4    |    5   |   6    |    +   |
//╰──────────────────────────╮  BKSP   |   DEL  |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_fun_label "l_fn"

#define l_fun_LT                    &kp F10             &kp F11             &kp F12             &kp F13
#define l_fun_RT &kp STAR           &kp N7              &kp N8              &kp N9              

#define l_fun_LM &mt LGUI F5       &mt LALT F6         &mt LSHFT F7         &mt LCTRL F8        &kp F14
#define l_fun_RM &kp FSLH          &mt LCTRL N1        &mt RSHFT N2         &mt RALT N3        &mt LGUI MINUS

#define l_fun_LB &kp F1             &kp F2              &kp F3              &kp F4              
#define l_fun_RB                    &kp N4              &kp N5              &kp N6              &kp PLUS

#define l_fun_LH &kp BSPC           &kp DEL
#define l_fun_RH &kp N0             &kp DOT

//                                        Nav & NumPad (standard)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|         |  HOME  |   UP   | PG_UP |   ¶up   |                |    /   |   7    |   8    |   9    |        |
//|  Lword  |  LEFT  |  DOWN  |  RGT  |  Rword  |                |    *   |  S/4   |  G/5   |  A/6   |   C/+  |
//|   Bot   |   END  |   SPC  | PG_DN |         |                |        |   1    |   2    |   3    |    =   |
//╰──────────────────────────╮  BSPC  |KP_ENTER |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_num_label "l_num"

#define l_num_LT                    &kp HOME            &kp UP              &kp PG_UP           &kp S_PARU
#define l_num_RT &kp KP_DIVIDE      &kp KP_N7           &kp KP_N8           &kp KP_N9           

#define l_num_LM &kp S_WRDL         &kp LEFT            &kp DOWN            &kp RIGHT           &kp S_WRDR
#define l_num_RM &kp KP_MULTIPLY    &mt LCTRL KP_N4     &mt RSHFT KP_N5      &mt RALT KP_N6      &mt LGUI KP_PLUS

#define l_num_LB &kp S_DBTM         &kp END             &kp SPACE           &kp PG_DN          
#define l_num_RB                    &kp KP_N1           &kp KP_N2           &kp KP_N3           &kp KP_EQUAL

#define l_num_LH &lt l_fun BSPC     &lt l_nav KP_ENTER
#define l_num_RH &kp KP_N0          &kp KP_DOT

//                                           Shorcuts & Navigation
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|        |   quit  | ScrCp | SelCp |  pstmtch |                |   Top   |  HOME  |   UP   |  PG_UP |       |
//|  ctrl  |   alt   |  gui  |  shft |   Find   |                |  Lword  |  LEFT  |  DOWN  |   RGT  | Rword |
//|  undo  |   cut   |  copy |  pste |          |                |         |   END  |  DOWN  |  PG_DN | ¶dn   |
//╰──────────────────────────╮ APPSW |   APPSW  |                |   back  |   fwd  ╭─────────────────────────╯
//                           ╰──────────────────╯                ╰──────────────────╯
#define l_nav_label "l_nav"

#define l_nav_LT                    &kp S_QUIT          &kp S_ScrCp         &kp S_SelCp         &kp S_PSTM
#define l_nav_RT &kp S_DTOP         &kp HOME            &kp UP              &kp PG_UP          

#define l_nav_LM &kp LGUI           &kp LALT            &kp LSHFT            &kp LCTRL           &kp S_FIND
#define l_nav_RM &kp S_WRDL         &kp LEFT            &kp DOWN            &kp RIGHT           &kp S_WRDR

#define l_nav_LB &kp UNDO           &kp CUT             &kp S_COPY          &kp S_PSTM          
#define l_nav_RB                    &kp END             &kp DOWN            &kp PG_DN           &kp S_PARD

#define l_nav_LH &SlApBack          &SlAppy
#define l_nav_RH &kp S_BBACK        &kp S_BFWD

//                                          Keyboard & System Settings
//                      L_CFG Keyboard Configuration (left) and Media Settings (right)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//│          BT2      BT1      BT0      BT_Clr  │                │ ZOOMRST none    none    KILL-W             │
//│  HD_AKTg L_0      L_1      KC_VOLU  KC_BRIU |                | ZOOMOUT KC_MPRV KC_MUTE KC_MNXT KC_NO      │
//│  QK_BOOT AG_SWAP  AG_NORM  KC_VOLD          │                │         KC_MRWD KC_MPLY KC_MFFD QK_BOOT    │
//╰──────────────────────────╮ ZOOMOUT  ZOOMIN  │                │ ZOOMIN  ZOOMOUT ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_cfg_label "l_cfg"

#define l_cfg_LT                     &bt BT_SEL 2        &bt BT_SEL 1        &bt BT_SEL 0       &bt BT_CLR
#define l_cfg_RT &kp S_ZMRST         &none               &none               &kp KILL_W         

#define l_cfg_LM &none              &kp C_NEXT          &kp C_PP            &kp C_VOL_UP        &kp C_BRI_UP
#define l_cfg_RM &kp S_ZMOUT        &kp C_VOL_UP        &kp C_MUTE          &kp C_NEXT          &none

#define l_cfg_LB &rst_btld          &kp C_PREV          &kp C_MUTE          &kp C_VOL_DN       
#define l_cfg_RB                    &kp C_VOL_DN        &kp C_PP            &kp C_PREV          &rst_btld

#define l_cfg_LH &kp S_ZMOUT        &kp S_ZMIN
#define l_cfg_RH &kp S_ZMIN         &kp S_ZMOUT
