#!/bin/sh

dig_pow () {
  num=$1; pow=$2; nsave=$num; sum=0;
  declare -a digits=$(grep -o "[0-9]" <<< "$num")


  for i in ${digits[@]}; do
    sum=$((sum + i ** pow))
    let pow++
  done

(( sum%nsave == 0 )) && echo $((sum/nsave)) || echo -1
}

dig_pow "92" "1"
dig_pow "89" "1"
dig_pow "695" "2"
dig_pow  "46288" "3"
dig_pow "46288" "5"
