#!/usr/bin/env bats

string=$1
symbol1=$2
symbol2=$3

expected="Meme keke lele nene"
fail="Mama kaka lala nana"

@test "test refactory success" {
    run ./strrefactory "Mama kaka lala nana" a e
    [ $status -eq 0 ]
    [ "${lines[0]}" = "${expected}" ]
}

@test "test refactory fail" {
    run ./strrefactory "Mama kaka lala nana" a e
    [ $status -eq 0 ]
    [ "${lines[0]}" != "${fail}" ]
}

@test "not enough arguments" {
    run ./strrefactory
    [ $status -eq 1 ]
}