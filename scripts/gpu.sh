#!/bin/sh

echo -e "\uf008 $(sensors | awk '/temp1/ {gsub("\+",""); print $2}')"
