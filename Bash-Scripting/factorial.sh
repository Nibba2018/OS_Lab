read -p "Enter number:" num
factorial=1

for i in $(seq 1 $num);
do factorial=$(($factorial*$i))
done

echo "Factorial of $num is $factorial"
