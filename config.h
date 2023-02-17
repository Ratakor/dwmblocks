//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/  /*Command*/         /*Update Interval*/    /*Update Signal*/
    {"",      "sb_music",         5,                     9},
    {"",      "sb_cputemp",       10,                    0},
    /*{"",      "sb_fanspeed",      10,                    0},*/
    /*{"",      "sb_memory",        10,                    0},*/
    {"",      "sb_battery",       10,                    0},
    {"",      "sb_wifi",          10,                    0},
    /*{"",      "sb_ethernet",      5,                     0},*/
    /*{"",      "sb_localip",       5,                     0},*/
    /*{"",      "sb_publicip",      5,                     0},*/
    {"",      "sb_volume",        0,                     10},
    /*{"",      "sb_news",          3600,                  0},*/
    /*{"",      "sb_mail",          180,                   0},*/
    {"",      "sb_weather",       3600,                  0},
    /*{"",      "sb_daypercent",    600,                   0},*/
    {"",      "sb_date",          3600,                  0},
    {"",      "sb_time",          1,                     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
