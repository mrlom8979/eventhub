/*
 * Copyright (C) Yakiv Matiash
 */

#include "eventhub/key.h"

namespace key {

// Создаём отображение имен клавиш в их коды
std::unordered_map<std::string, key_code> key_name_to_code = {
  {"Unknown", KEY_UNKNOWN},
  {"Space", KEY_SPACE},
  {"Apostrophe", KEY_APOSTROPHE},
  {",", KEY_COMMA},
  {"-", KEY_MINUS},
  {"Period", KEY_PERIOD},
  {"Slash", KEY_SLASH},
  {"0", KEY_0},
  {"1", KEY_1},
  {"2", KEY_2},
  {"3", KEY_3},
  {"4", KEY_4},
  {"5", KEY_5},
  {"6", KEY_6},
  {"7", KEY_7},
  {"8", KEY_8},
  {"9", KEY_9},
  {"Semicolon", KEY_SEMICOLON},
  {"=", KEY_EQUAL},
  {"A", KEY_A},
  {"B", KEY_B},
  {"C", KEY_C},
  {"D", KEY_D},
  {"E", KEY_E},
  {"F", KEY_F},
  {"G", KEY_G},
  {"H", KEY_H},
  {"I", KEY_I},
  {"J", KEY_J},
  {"K", KEY_K},
  {"L", KEY_L},
  {"M", KEY_M},
  {"N", KEY_N},
  {"O", KEY_O},
  {"P", KEY_P},
  {"Q", KEY_Q},
  {"R", KEY_R},
  {"S", KEY_S},
  {"T", KEY_T},
  {"U", KEY_U},
  {"V", KEY_V},
  {"W", KEY_W},
  {"X", KEY_X},
  {"Y", KEY_Y},
  {"Z", KEY_Z},
  {"LeftBracket", KEY_LEFT_BRACKET},
  {"Backslash", KEY_BACKSLASH},
  {"RightBracket", KEY_RIGHT_BRACKET},
  {"GraveAccent", KEY_GRAVE_ACCENT},
  {"World1", KEY_WORLD_1},
  {"World2", KEY_WORLD_2},
  {"Escape", KEY_ESCAPE},
  {"Enter", KEY_ENTER},
  {"Tab", KEY_TAB},
  {"Backspace", KEY_BACKSPACE},
  {"Insert", KEY_INSERT},
  {"Delete", KEY_DELETE},
  {"Right", KEY_RIGHT},
  {"Left", KEY_LEFT},
  {"Down", KEY_DOWN},
  {"Up", KEY_UP},
  {"PageUp", KEY_PAGE_UP},
  {"PageDown", KEY_PAGE_DOWN},
  {"Home", KEY_HOME},
  {"End", KEY_END},
  {"CapsLock", KEY_CAPS_LOCK},
  {"ScrollLock", KEY_SCROLL_LOCK},
  {"NumLock", KEY_NUM_LOCK},
  {"PrintScreen", KEY_PRINT_SCREEN},
  {"Pause", KEY_PAUSE},
  {"F1", KEY_F1},
  {"F2", KEY_F2},
  {"F3", KEY_F3},
  {"F4", KEY_F4},
  {"F5", KEY_F5},
  {"F6", KEY_F6},
  {"F7", KEY_F7},
  {"F8", KEY_F8},
  {"F9", KEY_F9},
  {"F10", KEY_F10},
  {"F11", KEY_F11},
  {"F12", KEY_F12},
  {"F13", KEY_F13},
  {"F14", KEY_F14},
  {"F15", KEY_F15},
  {"F16", KEY_F16},
  {"F17", KEY_F17},
  {"F18", KEY_F18},
  {"F19", KEY_F19},
  {"F20", KEY_F20},
  {"F21", KEY_F21},
  {"F22", KEY_F22},
  {"F23", KEY_F23},
  {"F24", KEY_F24},
  {"F25", KEY_F25},
  {"KP0", KEY_KP_0},
  {"KP1", KEY_KP_1},
  {"KP2", KEY_KP_2},
  {"KP3", KEY_KP_3},
  {"KP4", KEY_KP_4},
  {"KP5", KEY_KP_5},
  {"KP6", KEY_KP_6},
  {"KP7", KEY_KP_7},
  {"KP8", KEY_KP_8},
  {"KP9", KEY_KP_9},
  {"KPDecimal", KEY_KP_DECIMAL},
  {"KPDivide", KEY_KP_DIVIDE},
  {"KPMultiply", KEY_KP_MULTIPLY},
  {"KPSubtract", KEY_KP_SUBTRACT},
  {"KPAdd", KEY_KP_ADD},
  {"KPEnter", KEY_KP_ENTER},
  {"KPEqual", KEY_KP_EQUAL},
  {"LShift", KEY_LEFT_SHIFT},
  {"LCtrl", KEY_LEFT_CONTROL},
  {"LAlt", KEY_LEFT_ALT},
  {"LSuper", KEY_LEFT_SUPER},
  {"RShift", KEY_RIGHT_SHIFT},
  {"RCtrl", KEY_RIGHT_CONTROL},
  {"RAlt", KEY_RIGHT_ALT},
  {"RSuper", KEY_RIGHT_SUPER},
  {"Menu", KEY_MENU},
};

int get_code(const std::string& name) {
  // std::string title_case_name = to_title_case(name); // Преобразуем имя в Title Case
  auto it = key_name_to_code.find(name);
  if (it != key_name_to_code.end()) {
    return it->second;
  }
  return KEY_UNKNOWN;
}

std::unordered_map<key_code, std::string> key_code_to_name = {
    {KEY_UNKNOWN, "Unknown"},
    {KEY_SPACE, "Space"},
    {KEY_APOSTROPHE, "Apostrophe"},
    {KEY_COMMA, ","},
    {KEY_MINUS, "-"},
    {KEY_PERIOD, "Period"},
    {KEY_SLASH, "Slash"},
    {KEY_0, "0"},
    {KEY_1, "1"},
    {KEY_2, "2"},
    {KEY_3, "3"},
    {KEY_4, "4"},
    {KEY_5, "5"},
    {KEY_6, "6"},
    {KEY_7, "7"},
    {KEY_8, "8"},
    {KEY_9, "9"},
    {KEY_SEMICOLON, "Semicolon"},
    {KEY_EQUAL, "="},
    {KEY_A, "A"},
    {KEY_B, "B"},
    {KEY_C, "C"},
    {KEY_D, "D"},
    {KEY_E, "E"},
    {KEY_F, "F"},
    {KEY_G, "G"},
    {KEY_H, "H"},
    {KEY_I, "I"},
    {KEY_J, "J"},
    {KEY_K, "K"},
    {KEY_L, "L"},
    {KEY_M, "M"},
    {KEY_N, "N"},
    {KEY_O, "O"},
    {KEY_P, "P"},
    {KEY_Q, "Q"},
    {KEY_R, "R"},
    {KEY_S, "S"},
    {KEY_T, "T"},
    {KEY_U, "U"},
    {KEY_V, "V"},
    {KEY_W, "W"},
    {KEY_X, "X"},
    {KEY_Y, "Y"},
    {KEY_Z, "Z"},
    {KEY_LEFT_BRACKET, "LeftBracket"},
    {KEY_BACKSLASH, "Backslash"},
    {KEY_RIGHT_BRACKET, "RightBracket"},
    {KEY_GRAVE_ACCENT, "GraveAccent"},
    {KEY_WORLD_1, "World1"},
    {KEY_WORLD_2, "World2"},
    {KEY_ESCAPE, "Escape"},
    {KEY_ENTER, "Enter"},
    {KEY_TAB, "Tab"},
    {KEY_BACKSPACE, "Backspace"},
    {KEY_INSERT, "Insert"},
    {KEY_DELETE, "Delete"},
    {KEY_RIGHT, "Right"},
    {KEY_LEFT, "Left"},
    {KEY_DOWN, "Down"},
    {KEY_UP, "Up"},
    {KEY_PAGE_UP, "PageUp"},
    {KEY_PAGE_DOWN, "PageDown"},
    {KEY_HOME, "Home"},
    {KEY_END, "End"},
    {KEY_CAPS_LOCK, "CapsLock"},
    {KEY_SCROLL_LOCK, "ScrollLock"},
    {KEY_NUM_LOCK, "NumLock"},
    {KEY_PRINT_SCREEN, "PrintScreen"},
    {KEY_PAUSE, "Pause"},
    {KEY_F1, "F1"},
    {KEY_F2, "F2"},
    {KEY_F3, "F3"},
    {KEY_F4, "F4"},
    {KEY_F5, "F5"},
    {KEY_F6, "F6"},
    {KEY_F7, "F7"},
    {KEY_F8, "F8"},
    {KEY_F9, "F9"},
    {KEY_F10, "F10"},
    {KEY_F11, "F11"},
    {KEY_F12, "F12"},
    {KEY_F13, "F13"},
    {KEY_F14, "F14"},
    {KEY_F15, "F15"},
    {KEY_F16, "F16"},
    {KEY_F17, "F17"},
    {KEY_F18, "F18"},
    {KEY_F19, "F19"},
    {KEY_F20, "F20"},
    {KEY_F21, "F21"},
    {KEY_F22, "F22"},
    {KEY_F23, "F23"},
    {KEY_F24, "F24"},
    {KEY_F25, "F25"},
    {KEY_KP_0, "KP0"},
    {KEY_KP_1, "KP1"},
    {KEY_KP_2, "KP2"},
    {KEY_KP_3, "KP3"},
    {KEY_KP_4, "KP4"},
    {KEY_KP_5, "KP5"},
    {KEY_KP_6, "KP6"},
    {KEY_KP_7, "KP7"},
    {KEY_KP_8, "KP8"},
    {KEY_KP_9, "KP9"},
    {KEY_KP_DECIMAL, "KPDecimal"},
    {KEY_KP_DIVIDE, "KPDivide"},
    {KEY_KP_MULTIPLY, "KPMultiply"},
    {KEY_KP_SUBTRACT, "KPSubtract"},
    {KEY_KP_ADD, "KPAdd"},
    {KEY_KP_ENTER, "KPEnter"},
    {KEY_KP_EQUAL, "KPEqual"},
    {KEY_LEFT_SHIFT, "LShift"},
    {KEY_LEFT_CONTROL, "LCtrl"},
    {KEY_LEFT_ALT, "LAlt"},
    {KEY_LEFT_SUPER, "LSuper"},
    {KEY_RIGHT_SHIFT, "RShift"},
    {KEY_RIGHT_CONTROL, "RCtrl"},
    {KEY_RIGHT_ALT, "RAlt"},
    {KEY_RIGHT_SUPER, "RSuper"},
    {KEY_MENU, "Menu"},
};

std::string get_name(int keycode) {
    auto it = key_code_to_name.find(keycode);
    if (it != key_code_to_name.end()) {
        return it->second;
    }
    return "Unknown";
}

} // namespace key
