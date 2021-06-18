#!/usr/bin/env bats

@test "allocating little memory" {
    run ./pointers
    echo 12
    echo 25
    [ "$status" -eq 0 ]
}

@test "allocating little memory, reallocating to fail" {
    run ./pointers
    echo 12
    echo 1000000000000000000000000000000000000000000000000000000000000000000000
    [ "$status" -eq 1 ]
}

@test "allocating memory to fail" {
    run ./pointers
    echo 1000000000000000000000000000000000000000000000000000000000000000000000
    [ "$status" -eq 1 ]
}