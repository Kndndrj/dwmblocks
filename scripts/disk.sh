#!/bin/sh

case $BLOCK_BUTTON in
	1) alacritty -e ranger ;;
esac

echo -e "\uf0a0 $(df -h /| awk '/\//{ printf("%sB│%sB\n", $3, $2)}')"
