#!/bin/bash

OUT=README.md

echo "# myproj" > $OUT
echo "## Files" >> $OUT
find * -type f | sed -e "s/\\(.*\\)/- [\\0](.\\/\\0)/" >> $OUT
