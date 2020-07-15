//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "statusbat",  10,   0},
    {"📄 ", "statusmem",  5,   0},
    {"🌡 ", "statuscpu",  5,   0},
    {"🗓 ", "statusdate",  1,   0},
    {"⌚ ", "statustime",  1,   0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
