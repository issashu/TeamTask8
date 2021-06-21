#!/usr/bin/env bats

@test "test refactory success" {
    run ./strrefactory "$supplied" "$symbol1" "$symbol2"
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