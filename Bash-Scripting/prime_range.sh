for((i=2;i<100;i++));
do
    #echo $i
    flag=0
    for((j=2;j<=$((i/2));j++));
    do
        if [ $((i % j)) == 0 ]
        then
            flag=1          
        fi
    done    
    if [ $flag == 0 ]
    then
        echo -n "$i "           
    fi
done
echo ""
