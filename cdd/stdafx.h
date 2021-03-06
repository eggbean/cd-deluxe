// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently

#pragma once

// Exclude rarely-used stuff from Windows headers
#define WIN32_LEAN_AND_MEAN

#include "cdd.h"
#include "cdd_util.h"

#ifndef WIN32
#include <sys/stat.h>
#endif

#include <set>
#include <map>
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>
// #include <experimental/filesystem>

// vim:ff=unix
