from Matrix import Matrix

print("Enter row and column of matrix: ")
row = int(input("Row: "))
column = int(input("Column: "))

m = Matrix(row, column)

m.set_matrix()
m.zeroing()
m.show()