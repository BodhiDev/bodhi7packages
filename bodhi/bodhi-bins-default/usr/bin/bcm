#!/bin/bash
#
# Broadcom device driver finder and installer script
# Copyright 2023 Štefan (the_waiter) Uram
#
# "bcm" is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as published
# by the Free Software Foundation; either version 3 of the License, or (at
# your option) any later version.
#
# "bcm" is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with "set-background-bodhi"; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

b43 () {
   sudo apt purge bcmwl-kernel-source
   sudo apt install firmware-b43-installer && sudo apt install linux-firmware
}

b43legacy () {
   sudo apt purge bcmwl-kernel-source
   sudo apt install firmware-b43legacy-installer && sudo apt install linux-firmware
}
 
bcmwl () {
   sudo apt purge firmware-b43-installer
   sudo apt install bcmwl-kernel-source
}

installer () {
   case $1 in
      b43)         b43;;
      b43legacy)   b43legacy;;
      bcmwl)       bcmwl;;
   esac
}

question () {
 while true; do
    read -r -p "Do you wish to install suitable bcm driver [y/n]? " yn
    case $yn in
        [Yy]* ) installer "$1"; break;;
        [Nn]* ) exit;;
        * ) echo "Please answer yes or no.";;
    esac
done 
}

unknown () {
   echo 'Unidentified Wifi card. Please check Bodhi wiki!'
}

input=$(lspci -nn -d 14e4:) # executes command and incializes variable
token=$(echo "$input" | awk -F"14e4:" '{print $2}') # find token

var=$(echo "$token" | sed 's/[][()]//g' | sed 's/ //g')

if [ -z "$token" ]
then
  echo $'\e[1;31m'Your Wifi device is not Broadcom!$'\e[0m'
  exit 0
else
  echo $'\e[1;32m'Your Wifi device: bcm [14e4:"$token"$'\e[0m'
fi

case $var in
    1713)           question "b43";;
    4301)           question "b43legacy";;
    4306rev02)      question "b43legacy";;
    4306rev03)      question "b43";;
    4307)           question "b43";;
    4311)           question "b43";;
    4311rev01)      question "b43";;
    4312)           question "b43";;
    4313)           question "b43";;
    4315)           question "b43";;
    4315rev01)      question "b43";;
    4318)           question "b43";;
    4318rev02)      question "b43";;
    4319)           question "b43";;
    4320rev02)      question "b43";;
    4320rev03)      question "b43";;
    4321)           question "b43";;
    4324)           question "b43";;
    4325)           question "b43";;
    4328)           question "b43";;
    4328rev03)      question "bcmwl";;
    4329)           question "bcmwl";;
    432a)           question "bcmwl";;
    432b)           question "bcmwl";;
    432c)           question "bcmwl";;
    432d)           question "bcmwl";;
    4331)           question "b43";;
    4335)           question "b43";;
    4350)           question "b43";;
    4353rev01)      question "b43";;
    4358)           question "bcmwl";;
    4359)           question "b43";;
    4360)           question "b43";;
    4365)           question "b43";;
    4365rev01)      question "bcmwl";;
    43a0)           question "bcmwl";;
    43a3)           question "b43";;
    43barev01)      question "b43";;
    43b1)           question "bcmwl";;
    43b1rev03)      question "bcmwl";;
    43c3rev04)      question "b43";;
    4727)           question "bcmwl";;
    a962)           question "b43";;
    *)              unknown;;
esac
 
