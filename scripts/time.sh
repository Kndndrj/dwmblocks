#!/bin/sh

case $BLOCK_BUTTON in
	1) notify-send "Calendar" "$(cal -n 9 -S)" -t 100000 ;;
esac

echo $(date '+%H:%M - %a %d %b')
