//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/   /*Update Signal*/
	{"", "$HOME/Repos/dwmblocks/scripts/cpu.sh",	        		10,		18},
	{"", "$HOME/Repos/dwmblocks/scripts/gpu.sh",	        		10,		17},
	{"", "$HOME/Repos/dwmblocks/scripts/memory.sh",	        		10,		1},
	{"", "$HOME/Repos/dwmblocks/scripts/disk.sh",	        		10,		9},
	{"", "$HOME/Repos/dwmblocks/scripts/battery/battery_poly.py 0.9 .0%",	10,		3},
	{"", "$HOME/Repos/dwmblocks/scripts/sound.sh",	                	0,		10},
	{"", "$HOME/Repos/dwmblocks/scripts/time.sh",				10,		2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//pretty seperators: ▇ │   
static char *delim = " ∙ ";
//static unsigned int delimLen = 5;
