#!/usr/bin/env bats

@test "test macro with x > y" {
    NUM1=13
    NUM2=5
    expected_result=13
    
    run ./macros "$NUM1" "$NUM2"
    [ $status -eq 0 ]
    [ "${lines[0]}" == "${expected_result}" ]
}

@test "test macro with x < y" {
    NUM1=12
    NUM2=23
    expected_result=23

    run ./macros "$NUM1" "$NUM2"
    [ $status -eq 0 ]
    [ "${lines[0]}" == "${expected_result}" ]
}

@test "test macro with x == y" {
    NUM1=21
    NUM2=21
    expected_result=21

    run ./macros "$NUM1" "$NUM2"
    [ $status -eq 0 ]
    [ "${lines[0]}" == "${expected_result}" ]
}


@test "not enough arguments" {
    run ./macros
    [ $status -eq 1 ]
}