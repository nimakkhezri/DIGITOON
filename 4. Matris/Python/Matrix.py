class Matrix:
    def __init__(self, row: int, column: int) -> None:
        self.__row = row
        self.__column = column
        self.__matrix = [[]]

    def set_matrix(self) -> None:
        print("Please enter the fields of the matrix according to the following pattern:\n\n1 2 3\n4 5 6\n7 8 9\n")
        i = 0
        while i < self.__row :
            input_str = input()
            j = 0
            row = []
            while j < self.__column :
                for entry in input_str :
                    if entry.isalnum() :
                        row.append(int(entry))
                        j += 1
            self.__matrix.append(row)
            i += 1
        del self.__matrix[0]

    def show(self) -> None:
        print("\n")
        for i in self.__matrix:
            print(i)

    def __set_zero(self, z_row: int, z_column: int) -> None:
        i = 0
        while i < self.__column:
            self.__matrix[z_row][i] = 0
            i += 1
        i = 0
        while i < self.__row:
            self.__matrix[i][z_column] = 0
            i += 1

    def zeroing(self) -> None:
        rows = []
        columns = []
        i = 0
        while i < self.__row:
            j = 0
            while j < self.__column:
                if self.__matrix[i][j] == 0 :
                    rows.append(i)
                    columns.append(j)
                j += 1
            i += 1
        
        i = 0
        while i < len(rows):
            self.__set_zero(rows[i], columns[i])
            i += 1
