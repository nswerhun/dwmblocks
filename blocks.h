//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",        "supgrades",   1200,   0},
    {"",        "sweather",    300,    0},
    {"💾 ",     "sdisk",       1200,   0},
    {"📃 ",     "smem",        5,      0},
    {"🌡 ",      "scpu",        5,      0},
    /* {"",        "statusbat",        10,     0}, */
    {"🗓 ",      "sdate",       1,      0},
    {"⌚ ",     "stime",       1,      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
