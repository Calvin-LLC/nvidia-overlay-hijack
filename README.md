# nvidia overlay hijack

Simple imgui project that draws an imgui menu over the nvidia overlay.

features:
- lots of useful drawing functions
- smooth circlular animations for whenever you open/close the menu
- uses IMGUI for the menu framework
- solid DX11 implementation
- solid codebase with pch
- 64x & 32x support
- multi-threaded input handling
- insert to open the menu
- passes through user input to the window below the overlay
- detected on most anti-cheats (BE, EAC, VGK) due to window flags being changed on the nvidia window: https://github.com/Calvin-LLC/nvidia-overlay-hijack/blob/18775c0fcc6df97f0004cd1d0b42fcd53251a993/aio%20overlay/lib/dx11/overlay.cpp#L158
