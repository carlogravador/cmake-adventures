#include <gtk/gtk.h>

void activate(GtkApplication* app, gpointer user_data)
{
	GtkWidget* window = gtk_application_window_new(app);
	gtk_window_set_title(GTK_WINDOW(window), "MASTER CMAKE");
	gtk_widget_show_all(window);
}

int main(int argc, char** argv)
{
	GtkApplication* app = gtk_application_new(nullptr, G_APPLICATION_FLAGS_NONE);
	g_signal_connect(app, "activate", G_CALLBACK(activate), nullptr);
	g_application_run(G_APPLICATION(app), argc, argv);
	g_object_unref(app);
}
