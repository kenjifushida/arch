----- CONTENTS -----
Source code: matrix_multiplication.c
    compile with: gcc matrix_multiplication.c -o matrix_multiplication
    after compilation run with: ./matrix_multiplication
Evidence the program runs: 

----- ENVIRONMENT -----
Local Machine:
    Chip: Apple M1 Mac
    Kernel Version: Darwin Kernel Version 21.5.0

Docker Nikkokun Container:
    Architecture: x86_64
    Kernel release: 5.10.104-linuxkit
    Kernel Version: #1 SMP PREEMPT Thu Mar 17 17:05:54 UTC 2022

----- PERFORMANCE REPORT -----
* All matrix multiplications were done using the Nikkokun Docker Container

Matrix Size 10:
Time: 0.000210 secs

Matrix Size 100:
Time: 0.038526 secs

Matrix Size 1000:
Time: 10.726168 secs

Matrix Size 10000:
Time: 