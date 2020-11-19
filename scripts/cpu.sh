#!/bin/sh

case $BLOCK_BUTTON in
	1) alacritty -e neofetch ;;
esac

echo -e "\uf2db $(sensors | awk '/Package id 0:/ {gsub("\+",""); print $4}')"
