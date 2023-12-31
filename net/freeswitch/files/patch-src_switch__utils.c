--- src/switch_utils.c.orig	2021-10-24 18:22:29 UTC
+++ src/switch_utils.c
@@ -1956,7 +1956,7 @@ SWITCH_DECLARE(switch_status_t) switch_find_local_ip(c
 				goto doh;
 			}
 
-			switch_copy_string(buf, get_addr(abuf, sizeof(abuf), (struct sockaddr *) &iface_out, sizeof(struct sockaddr_storage)), len);
+			switch_copy_string(buf, get_addr(abuf, sizeof(abuf), (struct sockaddr *) &iface_out, sizeof(iface_out)), len);
 			if (mask) {
 				get_netmask((struct sockaddr_in *) &iface_out, mask);
 			}
