# Multiplication of two N x N matrices

A = [
    [1, 0, 3.14, 2.72],
    [2.72, 1, 0, 3.14],
    [1, 1, 1, 1],
    [1, 2, 3, 4]
]

B = [
    [1, 1, 0, 3.14],
    [0,1,3.14,2.72],
    [0,1,1,0],
    [4,3,2,1]
]

def matrix_multiplication(mat_A, mat_B):
    """routine to multiply 2 matrices"""

    # check if the 2 matrices can be multiplied
    if len(mat_A[0]) != len(mat_B):
        print("These 2 matrices cannot be multiplied")
        return

    # set up the result matrix
    result = [[0 for c in range(len(mat_A[0]))] for r in range(len(mat_B))]

    # iterate over the rows in matrix A
    for row in range(len(mat_A)):
        # iterate over the columns in matrix B
        for column in range(len(mat_A[0])):
            # iterate through each column of matrix A
            for k in range(len(mat_A[0])):
                result[row][column] += mat_A[row][k] * mat_B[k][column]

    return result

print(matrix_multiplication(A,B))