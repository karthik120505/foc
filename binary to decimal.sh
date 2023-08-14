echo "Enter a binary number:"
read binary

decimal=0
base=1

while [ $binary -gt 0 ]; do
    digit=$((binary % 10))
    decimal=$((decimal + digit * base))
    binary=$((binary / 10))
    base=$((base * 2))
done

echo "Decimal equivalent: $decimal"
