#include <ncurses.h>

void init_catppuccin_colors() {
  start_color();
  use_default_colors(); // Allow blending with terminal background.

  // Define Catppuccin colors (Mocha palette)
  init_color(1, 245 * 4, 224 * 4, 220 * 4);  // Rosewater
  init_color(2, 242 * 4, 205 * 4, 205 * 4);  // Flamingo
  init_color(3, 221 * 4, 182 * 4, 242 * 4);  // Mauve
  init_color(4, 166 * 4, 227 * 4, 161 * 4);  // Green
  init_color(5, 243 * 4, 139 * 4, 168 * 4);  // Pink
  init_color(6, 236 * 4, 143 * 4, 203 * 4);  // Lavender
  init_color(7, 137 * 4, 180 * 4, 250 * 4);  // Blue
  init_color(8, 116 * 4, 199 * 4, 236 * 4);  // Sky
  init_color(9, 137 * 4, 220 * 4, 235 * 4);  // Sapphire
  init_color(10, 148 * 4, 226 * 4, 213 * 4); // Teal
  init_color(11, 249 * 4, 226 * 4, 175 * 4); // Yellow
  init_color(12, 239 * 4, 213 * 4, 145 * 4); // Peach
  init_color(13, 244 * 4, 190 * 4, 176 * 4); // Maroon
  init_color(14, 235 * 4, 203 * 4, 139 * 4); // Orange
  init_color(15, 205 * 4, 214 * 4, 244 * 4); // Overlay 2
  init_color(16, 186 * 4, 194 * 4, 222 * 4); // Overlay 1
  init_color(17, 165 * 4, 173 * 4, 206 * 4); // Surface 2
  init_color(18, 144 * 4, 153 * 4, 186 * 4); // Surface 1
  init_color(19, 124 * 4, 132 * 4, 164 * 4); // Surface 0
  init_color(20, 103 * 4, 110 * 4, 136 * 4); // Base
  init_color(21, 82 * 4, 89 * 4, 115 * 4);   // Mantle
  init_color(22, 61 * 4, 67 * 4, 92 * 4);    // Crust

  // Create color pairs
  for (int i = 1; i <= 22; i++) {
    init_pair(i, i, -1);
  }
}

int main() {
  initscr();
  init_catppuccin_colors();

  // Example of using the colors
  for (int i = 1; i <= 22; i++) {
    attron(COLOR_PAIR(i));
    printw("This is a color - %d \n", i);
    attroff(i);
  }

  refresh();
  getch();
  endwin();
  return 0;
}
