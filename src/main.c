/**
 * Author:  Laurence Trippen
 * Created: 2022-01-16
 * 
 * Copyright (c) 2022 Laurence Trippen
 */

#include <stdio.h>
#include <gtk/gtk.h>

int main(int argc, char* argv[])
{
    GtkWindow* window;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Ubuntu Shortcut Creator");
    gtk_window_set_default_size(GTK_WINDOW(window), 500, 300);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_resizable(GTK_WINDOW(window), FALSE);
    gtk_widget_show(window);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_main();

    return 0;
}
