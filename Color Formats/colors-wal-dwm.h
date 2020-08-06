static const char norm_fg[] = "#cbdfdf";
static const char norm_bg[] = "#020202";
static const char norm_border[] = "#8e9c9c";

static const char sel_fg[] = "#cbdfdf";
static const char sel_bg[] = "#7FC0CA";
static const char sel_border[] = "#cbdfdf";

static const char urg_fg[] = "#cbdfdf";
static const char urg_bg[] = "#77B9C4";
static const char urg_border[] = "#77B9C4";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
