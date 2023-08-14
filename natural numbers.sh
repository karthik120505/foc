echo "Enter the value of n:"
read n
echo "The first $n natural numbers are:"
for ((i = 1; i <= n; i++)); do
    echo -n "$i "
done

echo ""  
