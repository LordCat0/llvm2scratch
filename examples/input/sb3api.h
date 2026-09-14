// Meta
// Force scratch to render a frame. Internally this uses change volume
// by 0 to force a frame to be rendered in run without screen refresh
// procedures
void SB3_render();

// Looks
void SB3_say_char(char str);
void SB3_say_str(const char *str);
void SB3_say_dbl(double num);

// Control
// Wait at least duration seconds while rendering frames. May wait up
// to an extra frametime, just wait in scratch
void SB3_wait(double duration);
// Same as SB3_wait but don't render frames while waiting. Internally
// uses the wait _ seconds block
void SB3_wait_no_render(double duration);

// Sensing
// SB3_ask_dbl casts non-floats by using the Scratch (_ + 0) block.
// As such, numbers are unchanged, but strings become 0.
int SB3_ask_str(const char *output, const char *input, int count);
int SB3_ask_dbl(const double *output, const char *input);

// Meant for teaching about buffer overflows. Don't use this otherwise please.
// https://github.com/Classfied3D/llvm2scratch/pull/5#discussion_r3006183332
int SB3_ask_str_unsafe(const char *output, const char *input);

// Returns the days since 2000 in UTC time
double SB3_days_since_2000();

// Motion
void SB3_move(double steps);
void SB3_turn_right(double degrees);
void SB3_turn_left(double degrees);
void SB3_go_to_xy(double x, double y);
void SB3_point_in_direction(double direction);
void SB3_change_x(double amount);
void SB3_set_x(double x);
void SB3_change_y(double amount);
void SB3_set_y(double y);
void SB3_if_on_edge_bounce();
void SB3_set_rotation_all_around();
void SB3_set_rotation_left_right();
void SB3_set_rotation_none();
double SB3_x_position();
double SB3_y_position();
double SB3_direction();

// Sound names and key names are null-terminated strings.
void SB3_play_sound(const char *sound);
void SB3_play_sound_until_done(const char *sound);
void SB3_stop_all_sounds();
void SB3_change_volume(double amount);
void SB3_set_volume(double volume);
double SB3_volume();

// Sensing
int SB3_key_pressed(const char *key);
int SB3_mouse_down();
double SB3_mouse_x();
double SB3_mouse_y();
int SB3_touching_mouse();
double SB3_distance_to_mouse();
double SB3_loudness();
double SB3_timer();
void SB3_reset_timer();

// Pen extension. Colors use Scratch's decimal RGB representation (0xRRGGBB).
void SB3_pen_clear();
void SB3_pen_stamp();
void SB3_pen_down();
void SB3_pen_up();
void SB3_pen_set_color(int color);
void SB3_pen_change_size(double amount);
void SB3_pen_set_size(double size);
