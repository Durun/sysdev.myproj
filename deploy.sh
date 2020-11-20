#!/bin/sh -ex

TARGET_BRANCH="deploy"

# git config
git config --global user.name "CircleCI deployer"
git config --global user.email "<>"

# checkout main branch
git checkout $TARGET_BRANCH
git reset --hard origin/main

# run
./src/gen-readme.bash

# commit
git add -A
git commit -m "CircleCI updates GitHub Pages"
if [ $? -ne 0]; then
	echo "nothing to commit"
	exit 0
fi

# push
git remote set-url origin "git@github.com:Durun/sysdev.myproj.git"
git push -f origin $TARGET_BRANCH
