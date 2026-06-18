import tkinter as tk
import random

CELL = 30
COLS = 10
ROWS = 20
WIDTH = COLS * CELL
HEIGHT = ROWS * CELL
SPEED = 500

SHAPES = [
    [[1, 1, 1, 1]],

    [[1, 1],
     [1, 1]],

    [[0, 1, 0],
     [1, 1, 1]],

    [[1, 0, 0],
     [1, 1, 1]],

    [[0, 0, 1],
     [1, 1, 1]],

    [[1, 1, 0],
     [0, 1, 1]],

    [[0, 1, 1],
     [1, 1, 0]],
]

COLORS = [
    "cyan", "yellow", "purple", "blue", "orange", "green", "red"
]

class Tetris:
    def __init__(self, root):
        self.root = root
        self.root.title("Tetris")

        self.canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT, bg="black")
        self.canvas.pack()

        self.board = [[None for _ in range(COLS)] for _ in range(ROWS)]
        self.score = 0
        self.game_over = False

        self.new_piece()

        root.bind("<Left>", lambda e: self.move(-1))
        root.bind("<Right>", lambda e: self.move(1))
        root.bind("<Down>", lambda e: self.drop())
        root.bind("<Up>", lambda e: self.rotate())
        root.bind("<space>", lambda e: self.hard_drop())

        self.update()


    def new_piece(self):
        index = random.randrange(len(SHAPES))
        self.piece = SHAPES[index]
        self.color = COLORS[index]
        self.x = COLS // 2 - len(self.piece[0]) // 2
        self.y = 0

        if self.collision(self.x, self.y, self.piece):
            self.game_over = True

    def collision(self, x, y, piece):
        for row_index, row in enumerate(piece):
            for col_index, cell in enumerate(row):
                if cell:
                    board_x = x + col_index
                    board_y = y + row_index
                    if board_x < 0 or board_x >= COLS or board_y >= ROWS:
                        return True
                    if board_y >= 0 and self.board[board_y][board_x]:
                        return True
        return False

    def move(self, dx):
        if not self.game_over and not self.collision(self.x + dx, self.y, self.piece):
            self.x += dx
            self.draw()

    def drop(self):
        if self.game_over:
            return
        if not self.collision(self.x, self.y + 1, self.piece):
            self.y += 1
        else:
            self.lock_piece()
            self.clear_lines()
            self.new_piece()
        self.draw()

    def hard_drop(self):
        if self.game_over:
            return
        while not self.collision(self.x, self.y + 1, self.piece):
            self.y += 1
        self.lock_piece()
        self.clear_lines()
        self.new_piece()
        self.draw()

    def rotate(self):
        if self.game_over:
            return

        rotated = [list(row) for row in zip(*self.piece[::-1])]

        if not self.collision(self.x, self.y, rotated):
            self.piece = rotated

        self.draw()

    def lock_piece(self):

        for row_index, row in enumerate(self.piece):
            for col_index, cell in enumerate(row):
                if cell:
                    board_x = self.x + col_index
                    board_y = self.y + row_index
                    if 0 <= board_y < ROWS:
                        self.board[board_y][board_x] = self.color

    def clear_lines(self):
        new_board = []
        cleared = 0

        for row in self.board:
            if all(row):
                cleared += 1
            else:
                new_board.append(row)

        for _ in range(cleared):
            new_board.insert(0, [None for _ in range(COLS)])
        self.board = new_board
        self.score += cleared * 100

    def draw_cell(self, x, y, color):
        self.canvas.create_rectangle(
            x * CELL,
            y * CELL,
            (x + 1) * CELL,
            (y + 1) * CELL,
            fill=color,
            outline="gray"
        )

    def draw(self):
        self.canvas.delete("all")

        for y in range(ROWS):
            for x in range(COLS):
                if self.board[y][x]:
                    self.draw_cell(x, y, self.board[y][x])

        for row_index, row in enumerate(self.piece):
            for col_index, cell in enumerate(row):
                if cell:
                    self.draw_cell(self.x + col_index, self.y + row_index, self.color)

        self.canvas.create_text(
            75, 20,
            text=f"Score: {self.score}",
            fill="white",
            font=("Arial", 16, "bold")
        )

        if self.game_over:
            self.canvas.create_text(
                WIDTH // 2,
                HEIGHT // 2,
                text="游戏结束",
                fill="white",
                font=("Arial", 28, "bold")
            )

    def update(self):
        if not self.game_over:
            self.drop()
            self.root.after(SPEED, self.update)
        else:
            self.draw()

root = tk.Tk()
game = Tetris(root)
root.mainloop()
