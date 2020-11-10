#!/bin/sh

case $BLOCK_BUTTON in
	1) alacritty -e neofetch ;;
esac

TEMP1=$(sensors | awk '/Core 0/ {gsub("\+",""); print $3}')
TEMP2=$(sensors | awk '/Core 1/ {gsub("\+",""); print $3}')
echo -e "\uf2c8 $TEMP1 $TEMP2" | awk '{ printf("%s %s│%s\n"), $1, $2, $3 }'
