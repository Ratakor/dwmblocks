/* Modify this file to change what commands output to your statusbar, and recompile using the make command. */
static const Block blocks[] = {
    /*Icon*/  /*Command*/                                            /*Update Interval*/    /*Update Signal*/
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_music",         120,                   9},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_cputemp",       10,                    0},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_fanspeed",      10,                    0},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_memory",        10,                    0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_battery",       10,                    0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_wifi",          10,                    0},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_ethernet",      10,                    0},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_localip",       3600,                  0},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_publicip",      3600,                  0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_volume",        0,                     10},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_mic",           0,                     11},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_news",          3600,                  0},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_mail",          180,                   0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_weather",       18000,                 8},
    //{"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_daypercent",    600,                   0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_date",          3600,                  0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/blocks/sb_time",          60,                    0},
};

/* sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char delim[] = " | ";
static unsigned int delimLen = 5;
