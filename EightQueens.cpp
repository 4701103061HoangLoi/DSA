bool validate(int row, int col) {
    for (int i = 0; i < row; i++) //check các hàng xem đã có quân hậu nào chưa
        if (board[i][col] == 1) return 0;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) //check đường chéo từ góc trái trên sang phải dưới
        if (board[i][j] == 1) return 0;

    for (int i = row, j = col; i >= 0 && j < boardSize; i--, j++) //check đường chéo từ góc trái dưới sang phải trên
        if (board[i][j] == 1) return 0;
    return 1; //nếu check xong mà không còn quân, tức là có thể đặt một quân hậu vào vị trí board[row][col]
}

bool Try(int row) {
    if (row >= boardSize) return 1;
    for (int col = 0; col < boardSize; ++col)
    {
        if (validate(row, col)) //kiểm tra vị trí hiện tại có đặt được không
        {
            board[row][col] = 1; //đặt 1 con hậu vào vị trí đó
            if (Try(row + 1)) return 1; //thử đặt tiếp 1 con hậu vào vị trí row+1
            board[row][col] = 0; // quay lui
        }
    }
    return 0;
}