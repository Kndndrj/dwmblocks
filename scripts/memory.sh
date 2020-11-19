#!/bin/sh

case $BLOCK_BUTTON in
	1) alacritty -e neofetch ;;
esac

echo -e "\uf0c2 $(free -h | awk '/Mem:/ {gsub("\i",""); printf("%sB│%sB\n", $3, $2)}')"
