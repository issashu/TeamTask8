#! /bin/bash
num1=$1
num2=$2
input=$3
expected=$4
path=../main
print_final_result="$path $num1 $num2 $input" 

# If number of arguments less then 1; print usage and exit
if [ $# -lt 1 ] 
then
    echo "Please supply at least one argument in order to run" "$0" >&2
    exit 1
else
    echo "./bash_testing is running with enough number of arguments"
    echo "Testing.."
    res=$($print_final_result)
    exit_status=$?
fi

printf "\n"

[ "$exit_status" -eq 0 ] && echo "print_final_result command was successful" || echo "print_final_result failed with exit status: $exit_status"
[ "$res" -eq "$expected" ] && echo "and the result was as expected $res" || echo "but the result was wrong: $res and not $expected"

# Clean exit with status 0
exit 0