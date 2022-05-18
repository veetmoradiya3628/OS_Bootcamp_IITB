#!/bin/bash
mkdir root
cd root
for(( i=5; i>=1; i-- ))
do
	mkdir dir$i
done
cd root
for(( i=1; i<=5; i++ ))
do
	cd dir$i
	for(( j=1; j<=4; j++))
	do
		touch file$j
		for(( k = 1; k<=$j; k++ ))
		do
			echo $j >> file$j
		done
	done
	cd ..
done

