#!/bin/bash

function create_file(){
    for ((i = 1; i <= $2; i++)); do
        cp ../codes/L_Skeleton.cpp ../student_codes/L$1\_E$i.cpp
    done
}

echo "Enter the Lecture number: "
read lecture_number

echo "Enter the Exercise number: "
read exercise_number

create_file $lecture_number $exercise_number



