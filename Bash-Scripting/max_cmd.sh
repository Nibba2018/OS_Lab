temp=$(( $1 >= $2 ? $1:$2 ))
echo "Largest:$(( $3 >= $temp ? $3:$temp ))"
