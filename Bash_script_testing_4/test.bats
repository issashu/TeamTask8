#!/usr/bin/env bats

string=$1
symbol1=$2
symbol2=$3

result=$(./strrefactory "Mama kaka lala nana" a e)
expected="Meme keke lele nen"

@test "test refactory string" {
    if [[ $result != "$expected" ]]
    then 
        echo "Fail!"
    fi
}
