#ifndef STRING
#define STRING

#include "list.cpp"

class String: List<char> {

};
/*
String::String(char const* c_str): String(utils::c_str_len(c_str)) {
	len = cap;
	utils::copy(c_str, array, cap);
}
*/

#endif
