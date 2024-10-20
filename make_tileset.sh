#!/bin/sh
folder_name="${1%*/}"
porytiles compile-primary -dual-layer -Wall -o data/tilesets/primary/"${folder_name##*/}" $1 include/constants/metatile_behaviors.h
secondaries=$1/secondaries
for folder_path in $secondaries/*/
do
    folder_name="${folder_path%*/}"
    echo Building "${folder_name##*/}"
    sleep 0.5
    porytiles compile-secondary -dual-layer -Wall -o data/tilesets/secondary/"${folder_name##*/}" $folder_path $1 include/constants/metatile_behaviors.h
done
