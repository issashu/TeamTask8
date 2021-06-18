#!/usr/bin/env bats

@test "allocating little memory" {
    run ./pointers 12 25
    [ "$status" -eq 0 ]
}

@test "allocating little memory, reallocating to fail" {
    run ./pointers 12 1000000000000000000000000000000000000000000000000000000000000000000
    [ "$status" -eq 1 ]
}

@test "allocating memory to fail" {
    run ./pointers 100000000000000000000000000000000000000000000000000000000 25
    [ "$status" -eq 1 ]
}