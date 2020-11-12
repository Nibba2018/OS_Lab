read -p "Enter marks:" marks

if (( $marks >= 90 && $marks <= 100 )); then
    echo A
elif (( $marks >= 70 && $marks <= 89 )); then
    echo B
elif (( $marks >= 40 && $marks <=69 )); then
    echo C
else
    echo F
fi
