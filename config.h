//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/   /*Update Signal*/
	{"", "$HOME/Repos/dwmblocks/scripts/cpu/cpu_info.sh",			10,		18},
	{"", "$HOME/Repos/dwmblocks/scripts/memory/ram.sh",			10,		1},
	{"", "$HOME/Repos/dwmblocks/scripts/memory/disk.sh",			10,		9},
	{"", "$HOME/Repos/dwmblocks/scripts/battery/battery_poly.sh 0.9 .0%",	10,		3},
	{"", "$HOME/Repos/dwmblocks/scripts/sound/sound_info.sh",		0,		10},
	{"", "$HOME/Repos/dwmblocks/scripts/time.sh",				10,		2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//pretty seperators: ▇ │   
static char *delim = " ∙ ";
//static unsigned int delimLen = 5;
