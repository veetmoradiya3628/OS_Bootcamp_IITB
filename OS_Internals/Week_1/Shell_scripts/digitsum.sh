#echo "Enter a number"
#read num
num=$1
sum=0

while [ $num -gt 0 ]
do
    mod=`expr $num % 10`    #It will split each digits
    sum=`expr $sum + $mod`  #Add each digit to sum
    num=`expr $num / 10`    #divide num by 10.
done

echo $sum
