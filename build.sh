OUT=TradeX
SRCDIR=src
ARCH=$(uname -m)
OUTPUT=TeadeX_$ARCH

CPP_FILES=$(find "$SRCDIR" -name '*.cpp')
echo "Building...."

g++ -I"$SRCDIR" $CPP_FILES -o "$OUTPUT"


echo "Build done"