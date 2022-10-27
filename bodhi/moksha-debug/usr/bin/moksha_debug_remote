#!/bin/bash

LOGFILE=/tmp/moksha-log-`date -Iseconds`.log 
PORT=10000

source /etc/moksha-debug/moksha-debug.cfg
source $HOME/.moksha-debug.cfg

E_START=TRUE
gdbserver --wrapper env E_START=$E_START EINA_LOG_LEVEL=$EINA_LOG_LEVEL -- $HOST:$PORT /usr/bin/enlightenment >> $LOGFILE 2>&1
