#!/bin/sh -e

# ensures that the eo symbol versions match the upstream part of the
# version from the current changelog.  See README.source for more
# details on eolian-generated symbols.

FAIL=0
CHLOGVER=$(dpkg-parsechangelog -S Version | cut -f 1 -d -)

for i in debian/*.symbols; do
    echo -n "Checking eo symbol versions in $i..."
    if awk '/^ .*~eo$/ {print $NF}' $i | grep -v ^$CHLOGVER > /dev/null; then
	FAIL=1
	echo fail
    else
	echo ok
    fi
done

exit $FAIL
