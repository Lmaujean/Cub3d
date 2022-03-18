#ifndef KEYCODE_H
# define KEYCODE_H

# define WALL_NORD "../path/north.xpm"
# define WALL_SUD "../path/south.xpm"
# define WALL_EST "../path/east.xpm"
# define WALL_WEST "../path/west.xpm"
# define NBR_IMG 5
# define WIDTH 1200
# define HEIGTH 720

# ifdef __linux__
#  define KEY_Q 113
#  define KEY_W 119
#  define KEY_S 115
#  define KEY_D 100
#  define KEY_ECHAP 65307
# elif __APPLE__
#  define KEY_A 0
#  define KEY_W 13
#  define KEY_S 1
#  define KEY_D 2
#  define KEY_ECHAP 53
# endif

#endif