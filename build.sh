#!/bin/sh

OUT=TradeX
SRCDIR=src
ARCH=$(uname -m)
OUTPUT="TeadeX_$ARCH.exe"

# Select compiler
if [ "$(uname -s)" = "Linux" ]; then
  COMPILER=x86_64-w64-mingw32-g++
else
  COMPILER=g++
fi

CPP_FILES=$(find "$SRCDIR" -name '*.cpp')

echo "Building with $COMPILER ..."
$COMPILER -I"$SRCDIR" $CPP_FILES -o "$OUTPUT"

echo "Build done"