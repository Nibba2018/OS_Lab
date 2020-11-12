read -p "Enter first number:" a
read -p "Enter second number:" b

echo "Before swapping a=$a & b=$b"

temp=$a
a=$b
b=$temp

echo "After swapping a=$a &  b=$b"
