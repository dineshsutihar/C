
#include <gtk/gtk.h>

// Define a callback function for handling the button click event
static void on_button_clicked(GtkWidget *button, gpointer data)
{
    // Get the label widget from the data pointer
    GtkWidget *label = (GtkWidget *)data;

    // Change the text of the label to something else
    gtk_label_set_text(GTK_LABEL(label), "You clicked the button!");
}

// Define the main function that creates and runs the window
int main(int argc, char *argv[])
{
    // Initialize GTK+
    gtk_init(&argc, &argv);

    // Create a window with some properties and get its handle
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "My First GUI");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    // Connect the window's destroy signal to gtk_main_quit function
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a vertical box container to hold the widgets and add it to the window
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Create a text label with some text and add it to the box container
    GtkWidget *label = gtk_label_new("Hello, world!");
    gtk_box_pack_start(GTK_BOX(vbox), label, TRUE, TRUE, 0);

    // Create a button with some text and add it to the box container
    GtkWidget *button = gtk_button_new_with_label("Click me");
    gtk_box_pack_start(GTK_BOX(vbox), button, FALSE, FALSE, 0);

    // Connect the button's clicked signal to the callback function with the label as data
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), label);

    // Show all the widgets in the window
    gtk_widget_show_all(window);

    // Enter the main loop that processes events and waits for user input
    gtk_main();

    // Return 0 to indicate normal termination
    return 0;
}
