#ifndef PCH_H_
#define PCH_H_

#define M_PI 3.1415926535

#pragma comment(lib,"d3d11.lib")
#pragma comment(lib,"dwmapi.lib")
#pragma comment(lib,"d3dcompiler")

#include <windows.h>
#include <tchar.h>
#include <memory>
#include <thread>
#include <functional>
#include <array>
#include <dwmapi.h>
#include <d3d11.h>
#include <d3dcompiler.h>
#include <conio.h>
#include <iostream>
#include <chrono>
#include <string>

#include "timer/timer.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_internal.h"	// gradient
#include "dx11/overlay.h"

#endif