#!/bin/sh

case $BLOCK_BUTTON in
	1) alacritty -e neofetch ;;
esac

RAMUSAGE=$(free -h | awk '/Mem:/ {gsub("\i",""); printf("%sB│%sB\n", $3, $2)}') 

echo -e "\uf0c2 $RAMUSAGE"
