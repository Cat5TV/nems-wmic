#!/bin/bash

[ $# == 1 ] || {
    echo "Usage: apply_heimdal.sh <lorikeet_path>"
    exit 1
}

LORIKEET_PATH="$1"

S4PATH="$PWD"

pushd $LORIKEET_PATH || exit 1
git reset --hard 
git am --abort
popd

try_patch() {
    commit="$1"
    git format-patch --stdout $commit -1 > "$commit".patch
    sed -i 's|/source4/heimdal/|/|g' "$commit".patch
    pushd $LORIKEET_PATH || exit 1
    git reset --hard
    echo
    if patch -p1 --forward < "$S4PATH/$commit.patch"; then
	echo
	echo "Commit $commit can apply - applying"
	git reset --hard
	git am "$S4PATH/$commit.patch"
    else
	echo
	echo "Commit $commit does not apply cleanly"
	echo
    fi
    popd || exit 1
}

commits="$(git log --pretty=oneline --reverse --since='1 months ago' heimdal | cut -d' ' -f1)"
for c in $commits; do
    git log $c -1
    echo -n "Try apply? [Y/n] "
    read answer
    case $answer in
	n*)
	    continue
	    ;;
	 *)
	    try_patch $c
	    ;;
    esac
done
