int maxDistance(vector<vector<int>>& grid) {
        vector<vector<int>>matrix=grid;
        int height = matrix.size();
    if (height == 0) return -1;

    int width = matrix[0].size();
    if (width == 0) return -1;

    queue<pair<int, int>> cell_queue;  // Push all zeroes into queue
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (matrix[row][col] == 1) cell_queue.push(make_pair(row, col));
        }
    }

    int dir[5] = {1, 0, -1, 0, 1};
    int max_dist = -1;
    int curr_dist = 0;

    while (!cell_queue.empty()) {  // BFS
        int size = cell_queue.size();
        curr_dist++;

        for (int i = 0; i < size; i++) {
            int row = cell_queue.front().first;
            int col = cell_queue.front().second;
            cell_queue.pop();

            for (int d = 1; d <= 4; d++) {
                int r = row + dir[d - 1];
                int c = col + dir[d];

                if (r < 0 || c < 0 || r >= height || c >= width || matrix[r][c] == 1) continue;

                matrix[r][c] = 1;  // Set cell to 0, so we don't count it anymore
                max_dist = curr_dist;
                cell_queue.push(make_pair(r, c));
            }
        }
    }

    return max_dist;
    }
