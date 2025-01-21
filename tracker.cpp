#include <ncurses.h>

#define PURPLE 1
#define GREEN 2
#define RED 3
#define BLUE 4
#define TEAL 5
#define ORANGE 6
#define WHITE 7
#define SHADE 8

void initialize_colors() {
  start_color();
  use_default_colors();

  // Define palette
  init_color(PURPLE, 221 * 4, 182 * 4, 242 * 4);
  init_color(GREEN, 166 * 4, 227 * 4, 161 * 4);
  init_color(RED, 243 * 4, 139 * 4, 168 * 4);
  init_color(BLUE, 137 * 4, 180 * 4, 250 * 4);
  init_color(TEAL, 148 * 4, 226 * 4, 213 * 4);
  init_color(ORANGE, 244 * 4, 190 * 4, 176 * 4);
  init_color(WHITE, 205 * 4, 214 * 4, 244 * 4);
  init_color(SHADE, 82 * 4, 89 * 4, 115 * 4);

  // Create color pairs
  for (int i = 1; i <= 8; i++) {
    init_pair(i, i, -1);
  }
}

int main() {
  initscr();
  initialize_colors();

  for (int i = 1; i <= 53; i++) {
    printw("#");
  }

  refresh();
  getch();
  endwin();

  return 0;
}
