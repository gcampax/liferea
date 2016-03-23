#ifndef _LIFEREA_WEB_VIEW_H
#define _LIFEREA_WEB_VIEW_H

#include <webkit2/webkit2.h>

#define LIFEREA_TYPE_WEB_VIEW liferea_web_view_get_type ()

G_DECLARE_FINAL_TYPE (LifereaWebView, liferea_web_view, LIFEREA, WEB_VIEW, WebKitWebView)

LifereaWebView *
liferea_web_view_new (void);

void
liferea_web_view_set_dbus_connection (LifereaWebView *self, GDBusConnection *connection);

void
liferea_web_view_scroll_pagedown (LifereaWebView *self);
#endif
