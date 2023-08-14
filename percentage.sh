echo "Enter the value:"
read value
echo "Enter the total value:"
read total
percentage=$(( (value * 100) / total ))
echo "The percentage is: $percentage%"
