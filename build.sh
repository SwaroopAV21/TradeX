OUT=TradeX
SRCDIR=.
ARCH=$(uname -m)
OUTPUT=TeadeX_$ARCH

CPP_FILES=$(find "$SRCDIR" -name '*.cpp')

g++ $CPP_FILES -o "$OUTPUT"