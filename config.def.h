//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/  /*Command*/                                            /*Update Interval*/    /*Update Signal*/
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_music",         120,                   9},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_cputemp",       10,                    0},
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_fanspeed",      10,                    0},*/
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_memory",        10,                    0},*/
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_battery",       10,                    0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_wifi",          10,                    0},
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_ethernet",      5,                     0},*/
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_localip",       5,                     0},*/
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_publicip",      5,                     0},*/
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_volume",        0,                     10},
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_news",          3600,                  0},*/
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_mail",          180,                   0},*/
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_weather",       3600,                  0},
    /*{"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_daypercent",    600,                   0},*/
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_date",          3600,                  0},
    {"",      "$XDG_CONFIG_HOME/dwmblocks/modules/sb_time",          60,                    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
