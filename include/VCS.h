#pragma once

#include "VCS_dynchar.h"
#include "VCS_renderpanel.h"
#include "VCS_info.h"
#include "VCS_SDL3.h"
#include "VCS_key.h"

/**
 * \mainpage Get Started Guide
 * Hello! I'm so glad you've decided to check out VCS. VCS stands for Visual Character System, and is an SDL-based framework for creating beautiful TUIs in the
 * style of ncurses without the hassle. Throughout this guide, feel free to type the name of anything into the search bar in the top right to read its docs; eventually I will get around to hyperlinking everything but doxygen is being annoying. That said, here are the basic things you need to know to get started:
 *
 * Every VCS program starts with a call to VCS_init(). This will start up SDL for you, initialize the rendering screen, and give you a VCS_info struct. Keep this VCS_info struct; you will need it for most main VCS functions.
 *
 * Next, you will need to choose what to draw to the screen; by default, it is a uniform black. VCS_info has a field called VCS_info.rp; this is a VCS_renderpanel_t that contains the screen data. Write to it with VCS_rp_set(). Notice that VCS_rp_set() takes a VCS_dynchar_t rather than a normal character; a VCS_dynchar_t contains information about a character as well as the foreground and background shaders to render it with. Check the documentation of VCS_dynchar_t as well as VCS_cpushader for some information on how to create these characters.
 *
 * Now that you have a renderpanel, you need to draw it. In VCS, this is done by calling VCS_update() and then VCS_render() in a loop, once every frame. If you need to change the screen data, it is safe to call VCS_rp_set() before calls to VCS_update() in that loop. VCS_update() will also return whether or not an application close event has been detected.
 *
 * Once the application is asked to close, cleanup is simple; just call VCS_quit() and pass it the VCS_info struct (you kept it, right?); it will handle cleaning up the renderpanel and all of SDL's mess. Anything you personally malloc'd, of course, is your own business.
 */
