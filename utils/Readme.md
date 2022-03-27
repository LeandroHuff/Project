# Utils Directory


--------------------------------------------------------------------------------
Allegro 5.2: 
--------------------------------------------------------------------------------

Allegro is a cross-platform library mainly aimed at video game and multimedia programming. It handles common, low-level tasks such as creating windows, accepting user input, loading data, drawing images, playing sounds, etc. and generally abstracting away the underlying platform. However, Allegro is not a game engine: you are free to design and structure your program as you like.

Allegro 5 has the following additional features:

Supported on Windows, Linux, Mac OSX, iPhone and Android
User-friendly, intuitive C API usable from C++ and many other languages
Hardware accelerated bitmap and graphical primitive drawing support (via OpenGL or Direct3D)
Audio recording support
Font loading and drawing
Video playback
Abstractions over shaders and low-level polygon drawing
And more!


Example:

#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <stdbool.h>

int main()
{
    al_init();
    al_install_keyboard();

    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 30.0);
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    ALLEGRO_DISPLAY* disp = al_create_display(320, 200);
    ALLEGRO_FONT* font = al_create_builtin_font();

    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(disp));
    al_register_event_source(queue, al_get_timer_event_source(timer));

    bool redraw = true;
    ALLEGRO_EVENT event;

    al_start_timer(timer);
    while(1)
    {
        al_wait_for_event(queue, &event);

        if(event.type == ALLEGRO_EVENT_TIMER)
            redraw = true;
        else if((event.type == ALLEGRO_EVENT_KEY_DOWN) || (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE))
            break;

        if(redraw && al_is_event_queue_empty(queue))
        {
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font, al_map_rgb(255, 255, 255), 0, 0, 0, "Hello world!");
            al_flip_display();

            redraw = false;
        }
    }

    al_destroy_font(font);
    al_destroy_display(disp);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);

    return 0;
}


Download and Install:

Ubuntu PPA

For Linux distributions based on Ubuntu (and Ubuntu itself), you can download binary packages for Allegro 5 by adding the a PPA to your software sources, and then installing the relevant packages. See the wiki tutorial for more details.

Adding this PPA to your system
You can update your system with unsupported packages from this untrusted PPA by adding ppa:allegro/5.2 to your system's Software Sources. (Read about installing)

sudo add-apt-repository ppa:allegro/5.2
sudo apt-get update

This PPA can be added to your system manually by copying the lines below and adding them to your system's software sources.

Display sources.list entries for: 
Impish (21.10)

deb https://ppa.launchpadcontent.net/allegro/5.2/ubuntu impish main 
deb-src https://ppa.launchpadcontent.net/allegro/5.2/ubuntu impish main

Example:

sudo gedit /etc/apt/sources.list.d/sources.list
or
sudo gedit /etc/apt/sources.list.d/allegro_5.2.list

Ubuntu 18.04+ (or derivatives thereof) - First, add the Allegro PPA. This gives you up-to-date versions of Allegro; the base repos only provide 5.2.3 at the time of writing.

sudo add-apt-repository ppa:allegro/5.2


Then, install Allegro:

sudo apt-get install liballegro*5.2 liballegro*5-dev


Debian-based distributions (Debian, Mint, Ubuntu, etc..)

sudo apt-get install liballegro-ttf5-dev




--------------------------------------------------------------------------------

