Leave InputMethod empty by default since qtvirtualkeyboard does not appear to
be supported by the included themes.  The keyboard is drawn on top of the
login screen and has to be clicked away (button lower-right).

Set the default theme and cursor theme to breeze, because sddm is most likely
used together with Plasma.  If they aren't available sddm falls back to a
compiled-in theme.

--- src/common/Configuration.h.orig	2021-10-12 20:26:16 UTC
+++ src/common/Configuration.h
@@ -51,10 +51,10 @@ namespace SDDM {
         //  Name   Entries (but it's a regular class again)
         Section(Theme,
             Entry(ThemeDir,            QString,     _S(DATA_INSTALL_DIR "/themes"),             _S("Theme directory path"));
-            Entry(Current,             QString,     _S(""),                                     _S("Current theme name"));
+            Entry(Current,             QString,     _S("breeze"),                               _S("Current theme name"));
             Entry(FacesDir,            QString,     _S(DATA_INSTALL_DIR "/faces"),              _S("Global directory for user avatars\n"
                                                                                                    "The files should be named <username>.face.icon"));
-            Entry(CursorTheme,         QString,     QString(),                                  _S("Cursor theme used in the greeter"));
+            Entry(CursorTheme,         QString,     _S("breeze_cursors"),                       _S("Cursor theme used in the greeter"));
             Entry(CursorSize,          QString,     QString(),                                  _S("Cursor size used in the greeter"));
             Entry(Font,                QString,     QString(),                                  _S("Font used in the greeter"));
             Entry(EnableAvatars,       bool,        true,                                       _S("Enable display of custom user avatars"));
