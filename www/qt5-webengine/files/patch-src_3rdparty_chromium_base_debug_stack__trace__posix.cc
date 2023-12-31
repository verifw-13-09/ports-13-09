--- src/3rdparty/chromium/base/debug/stack_trace_posix.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/base/debug/stack_trace_posix.cc
@@ -35,7 +35,7 @@
 #include <AvailabilityMacros.h>
 #endif
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #include "base/debug/proc_maps_linux.h"
 #endif
 
@@ -697,7 +697,11 @@ class SandboxSymbolizeHelper {
           // Skip regions with empty file names.
           continue;
         }
+#if defined(OS_BSD)
+	if (region.path[0] == '-') {
+#else	
         if (region.path[0] == '[') {
+#endif
           // Skip pseudo-paths, like [stack], [vdso], [heap], etc ...
           continue;
         }
