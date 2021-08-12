STATEMENT

-eq * equal
-ne * not equal
-lt * less than
-le * less than or equal
-gt * greater than
-ge * greater than or equal



'IF' STATEMENT

if expression
then
   echo "True"
elif expression2; then
   echo "False"
else
    echo "null"
fi



'WHILE' STATEMENT

i=0
while [ $i -le 10 ]; do
    echo i:$i
    ((i+=1))
done

j=0
until [ $j -ge 10 ]; do
    echo j:$j
    ((j+=1))
done



'FOR' STATEMENT

for i in {1..10}
do
    echo $i
done

for ((i=1; i<=10; i++ ))
do
    echo $i
done

arr={"apple" "banana" "cherry"}
for i in ${arr![pic](@)}
do
    echo $i
done

declare -A arr
arr![pic]("name")="Scott"
arr![pic]("id")="1234"
for i in "${!arr![pic](@)}"
do
    echo "$i: ${arr![pic]($i)}"
done

for i in $(ls)
do
    echo $i
done

for i in $@
do
    echo $i
done

echo "There were $* arguments."



'CASE' STATEMENT

$a="dog"
case $a in
        cat) echo "Feline";;
        dog|puppy) echo "Canine";;
        *) echo "No match!";;
esac

FUNCTIONS

function greet {
    echo "Hi, $1! What a nice $2"
}

echo "And now, a greeting!"
greet Cleber Morning
greet Everybody Evening

finction numberthings {
    i=1
    for f in $@; do
        echo $i: $f
        ((i+=1))
done

numberthings $(ls)


