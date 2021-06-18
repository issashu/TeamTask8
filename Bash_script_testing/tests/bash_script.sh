#!/bin/bash

#compile the C app
#../"make clean"
#../"make"

#Supply arguments and test output
number=$1
position=$2
expected=$3
path=../output/
bitwise_func="$path/main $number $position"

# If number of arguments less then 1; print usage and exit
if [ $# -lt 1 ] 
then
    echo "Please supply at least one argument in order to run" "$0" >&2
    exit 1
else
    echo "./bash_script is running with enough number of arguments"
    echo "Testing.."
    # result=$(eval "$bitwise_func")
    result=$($bitwise_func)
    exit_status=$?    
fi

printf "\n"

[ "$exit_status" -eq 0 ] && echo "bitwise_func command was successful" || echo "bitwise_func failed with exit status: $exit_status"
[ "$result" -eq "$expected" ] && echo "and the result was as expected $result" || echo "but the result was wrong: $result and not $expected"

# Clean exit with status 0
exit 0