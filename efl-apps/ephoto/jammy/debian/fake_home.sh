#!/bin/sh

cleanup () {
    [ -n "$temp_HOME" ] && rm -r "$temp_HOME"
    [ -n "$temp_XDG_RUNTIME_DIR" ] && rm -r "$temp_XDG_RUNTIME_DIR"
}

trap cleanup EXIT

temp_HOME=$(mktemp -d)
temp_XDG_RUNTIME_DIR=$(mktemp -d)

env HOME="$temp_HOME" \
    XDG_RUNTIME_DIR="$temp_XDG_RUNTIME_DIR" \
    $*
