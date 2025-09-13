/*
 *
 *  Core/common layer defs for tern (30) keys.
 *
 * extended keycodes found in "hosts" folder
 *
 */

//                                                Symbol & math
//  * left paired symbols are "linger keys" via hold taps. Tap for left, hold for pair with insertion point between
//         ╭────────────────────────────────────╮                ╭───────────────────────────────────╮
//╭────────|    °   |   ≤    |   ≥    |    <    |                |   |    |    \   |    €   |    £   |────────╮       
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

//                                         Fkey & Num Row
//          ╭───────────────────────────────────╮                ╭───────────────────────────────────╮
//╭─────────|        |        |        |        |                |    /*  |   7    |    8   |   9    |────────╮        
//|   LGUI  |  LALT  |  LSHFT |  LCTRL |        |                |    -+  |  C/4   |   S/5  |  A/6   |   G/=  |
//|  PScrn  | Sh-TAB |   TAB  |GUI-sh-4|        |                |        |   4    |    5   |   6    |    ≈   |
//╰──────────────────────────╮  BKSP   |   DEL  |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_fun_label "l_fn"

#define l_fun_LT                    &none               &none               &none               &none
#define l_fun_RT &SlshStar          &kp N7              &kp N8              &kp N9              

#define l_fun_LM &kp LGUI          &kp LALT            &kp LSHFT            &kp LCTRL           &none
#define l_fun_RM &MinusPlus        &mt LCTRL N4        &mt RSHFT N5         &mt RALT N6         &mt LGUI EQUAL

#define l_fun_LB &kp PSCRN          &kp LS(TAB)         &kp TAB             &kp LG(LS(4))              
#define l_fun_RB                    &kp N4              &kp N5              &kp N6              &kp LA(X)

#define l_fun_LH &kp BSPC           &kp DEL
#define l_fun_RH &kp N0             &kp DOT

//                                        Nav & NumPad (standard)
//          ╭───────────────────────────────────╮                ╭───────────────────────────────────╮
//╭─────────|  HOME  |   UP   | PG_UP |         |                |   /*   |   7    |   8    |   9    |────────╮
//|  Lword  |  LEFT  |  DOWN  |  RGT  |  Rword  |                |   -+   |  C/4   |  S/5   |  A/6   |   G/=  |
//|   SPC   |   END  |   TAB  | PG_DN |         |                |        |   1    |   2    |   3    |    ≈   |
//╰──────────────────────────╮  BSPC  |KP_ENTER |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_num_label "l_num"

#define l_num_LT                    &kp HOME            &kp UP              &kp PG_UP           &none
#define l_num_RT &SlshStar          &kp KP_N7           &kp KP_N8           &kp KP_N9           

#define l_num_LM &kp S_WRDL         &kp LEFT            &kp DOWN            &kp RIGHT           &kp S_WRDR
#define l_num_RM &MinusPlus         &mt LCTRL KP_N4     &mt RSHFT KP_N5     &mt RALT KP_N6      &mt LGUI KP_EQUAL

#define l_num_LB &kp S_DBTM         &kp END             &kp SPACE           &kp PG_DN          
#define l_num_RB                    &kp KP_N1           &kp KP_N2           &kp KP_N3           &kp LA(X)

#define l_num_LH &lt l_fun BSPC     &lt l_nav KP_ENTER
#define l_num_RH &kp KP_N0          &kp KP_DOT

//                                           Shorcuts & Navigation
//         ╭────────────────────────────────────╮                ╭────────────────────────────────────╮
//╭────────|   cutl  | copyl | pstel |    ESC   |                |         |  HOME  |   UP   |  PG_UP |───────╮
//|  gui   |   alt   |  shft |  ctrl |   Find   |                |  Lword  |  LEFT  |  DOWN  |   RGT  | Rword |
//|  undo  |   cut   |  copy |  pste |          |                |         |   END  |        |  PG_DN |       |
//╰──────────────────────────╮ APPSW |   APPSW  |                |   back  |   fwd  ╭─────────────────────────╯
//                           ╰──────────────────╯                ╰──────────────────╯
#define l_nav_label "l_nav"

#define l_nav_LT                    &kp LC(X)           &kp LC(C)           &kp LC(V)           &kp ESC
#define l_nav_RT &none              &kp HOME            &kp UP              &kp PG_UP          

#define l_nav_LM &kp LGUI           &kp LALT            &kp LSHFT           &kp LCTRL           &kp S_FIND
#define l_nav_RM &kp S_WRDL         &kp LEFT            &kp DOWN            &kp RIGHT           &kp S_WRDR

#define l_nav_LB &kp UNDO           &kp CUT             &kp S_COPY          &kp S_PSTM          
#define l_nav_RB                    &kp END             &none               &kp PG_DN           &none

#define l_nav_LH &SlApBack          &SlAppy
#define l_nav_RH &kp S_BBACK        &kp S_BFWD

//                                          Keyboard & System Settings
//                      L_CFG Keyboard Configuration (left) and Media Settings (right)
//         ╭───────────────────────--──────────╮                ╭───────────────────────────────────╮
//╭────────| BOOT  |       |         |   USB   │                │  BRI+  |  VOL+  |  NEXT  |        |────────╮
//│        |       |       |         |    BT   |                |  BRI-  |  VOL-  |   PP   |        │        |
//│  BTC   |  BT0  │  BT1  |  BT2    │         |                |        |  MUTE  |  PREV  |        │        |
//╰──────────────────────────╮ ZMOUT |  ZMIN   │                │  ZMIN  |  ZMOUT ╭──────────────────────────╯
//                           ╰───────────────-─╯                ╰───────────────-─╯


#define l_cfg_label "l_cfg"

#define l_cfg_LT                    &rst_btld           &none               &none             &out OUT_USB
#define l_cfg_RT &kp C_BRI_UP       &kp C_VOL_UP        &kp C_NEXT          &none         

#define l_cfg_LM &none              &none               &none               &none             &out OUT_BLE
#define l_cfg_RM &kp C_BRI_DN       &kp C_VOL_DN        &kp C_PP            &none             &none

#define l_cfg_LB &bt BT_CLR         &bt BT_SEL 0        &bt BT_SEL 1        &bt BT_SEL 2       
#define l_cfg_RB                    &kp C_MUTE          &kp C_PREV          &none             &none

#define l_cfg_LH &kp S_ZMOUT        &kp S_ZMIN
#define l_cfg_RH &kp S_ZMIN         &kp S_ZMOUT
