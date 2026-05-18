# Membuat fungsi untuk menghitung determinan matriks
def determinant(matrix):
    n = len(matrix)
    if n == 1:
        return matrix[0][0]
    elif n == 2:
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0]
    else:
        det = 0
        for j in range(n):
            submatrix = [row[:j]+row[j+1:] for row in matrix[1:]]
            det += ((-1)**j)*matrix[0][j]*determinant(submatrix)
        return det

# Contoh penggunaan program
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print("Matrix:")
for row in Matrix:
    print(row)
print("Determinan:", determinant(matrix))
