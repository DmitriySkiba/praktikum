bool is_can_exit_from_maze(const std::vector<std::string>& maze, int row, int col);

bool is_valid_position(const std::vector<std::string>& maze, int row, int col) {
    int rows = maze.size();
    int cols = maze[0].size();
    return (row >= 0 && row < rows && col >= 0 && col < cols);
}

bool is_can_exit_from_maze_helper(const std::vector<std::string>& maze, int row, int col, std::vector<std::vector<bool>>& visited) {

    if (maze[row][col] == 'E') {
        return true;
    }
    
    visited[row][col] = true;
    
    std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (const auto& dir : directions) {
        int newRow = row + dir.first;
        int newCol = col + dir.second;
        
        if (is_valid_position(maze, newRow, newCol) && !visited[newRow][newCol] && maze[newRow][newCol] != '#') {
            if (is_can_exit_from_maze_helper(maze, newRow, newCol, visited)) {
                return true;
            }
        }
    }
    
    return false;
}

bool is_can_exit_from_maze(const std::vector<std::string>& maze, int row, int col) {
    int rows = maze.size();
    int cols = maze[0].size();
    
    if (!is_valid_position(maze, row, col)) {
        return false;
    }
    
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    
    return is_can_exit_from_maze_helper(maze, row, col, visited);
}