
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┬──────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │  = │Back  │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──┴┬────┬┘
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴────┤
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │Enter  │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───────┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift   │
 * ├─────┬──┴─┬─┴───┴──┬┴───┴───┴───┴──┬┴───┴┬──┴──┬┴─────────┘
 * │Ctrl │Alt │  Cmd   │    Space      │ Cmd │AltGr│
 * └─────┴────┴────────┴───────────────┴─────┴─────┘
 */

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┬──────┐
 * │ º │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ¡  │Back  │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──┴┬────┬┘
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ` │ + │ Ç  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴────┤
 * │ Mayús│ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ñ │ ´ │Enter  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───────┤
 * │Sft │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │ Shift   │
 * ├────┴┬──┴─┬─┴───┴──┬┴───┴───┴───┴──┬┴───┴┬──┴──┬┴─────────┘
 * │Ctrl │Alt │  Cmd   │    Espacio    │ Cmd │AltGr│
 * └─────┴────┴────────┴───────────────┴─────┴─────┘
 */

// Row 1
#define ES_MORD &kp GRAVE     // º
#define ES_SQT &kp MINUS     // '
#define ES_IEXL &kp EQUAL     // ¡
// Row 2
#define ES_GRAVE &kp LBKT     // ` (dead)
#define ES_PLUS &kp RBKT      // +
// Row 3
#define ES_NTIL &kp SEMI // ñ
#define ES_TILD &kp APOS      // ´ (dead)
#define ES_CCED &kp BSLH      // ç
// Row 4
#define ES_COMMA &kp COMMA     // ,
#define ES_DOT &kp DOT        // .
#define ES_MINUS &kp SLASH     // -
#define ES_LT &kp GRAVE // <


/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ! │ " │ . │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ¡ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ^ │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ Ç │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */


// Row 1
#define ES_FORD &kp LS(NUBS)  // ª
#define ES_EXCL &kp LS(N1)    // !
#define ES_DQT  &kp LS(N2)    // "
#define ES_MDDT &kp LS(N3)    // · (interpunct)
#define ES_DLLR &kp LS(N4)    // $
#define ES_PRCNT &kp LS(N5)    // %
#define ES_AMPS &kp LS(N6)    // &
#define ES_FLSH &kp LS(N7)    // /
#define ES_LPAR &kp LS(N8)    // (
#define ES_RPAR &kp LS(N9)    // )
#define ES_EQUAL  &kp LS(N0)    // =
#define ES_QMARK &kp LS(MINUS) // ?
#define ES_IQMARK &kp LS(EQUAL) // ¿
// Row 2
#define ES_CARET &kp LS(LBKT)  // ^ (dead)
#define ES_ASTRK &kp LS(RBKT)  // *
// Row 3
#define ES_DIAE &kp LS(APOS)  // ¨ (dead)
#define ES_UCED &kp LS(BSLH)  // Ç
// Row 4
// <
#define ES_GT &kp LS(GRAVE) // >
#define ES_SEMI &kp LS(COMMA) // ;
#define ES_COLON &kp LS(DOT)   // :
#define ES_UNDER &kp LS(SLASH) // _
// ;

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ \ │ | │ @ │ # │ ~ │   │   │   │   │   │   │   │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ [ │ ] │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │ { │ } │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */

// Row 1
#define ES_BSLH &kp RA(GRAVE)  // "\"
#define ES_PIPE &kp RA(N1)    // |
#define ES_AT   &kp RA(N2)    // @
#define ES_HASH &kp RA(N3)    // #
#define ES_TILD &kp RA(N4)    // ~
#define ES_NOT  &kp RA(N5)    // ¬
// Row 2
#define ES_EURO &kp RA(E)     // €
#define ES_LBKT &kp RA(LBKT)  // [
#define ES_RBKT &kp RA(RBKT)  // ]
// Row 3
#define ES_LBRC &kp RA(APOS)  // {
#define ES_RBRC &kp RA(BSLH)  // }


