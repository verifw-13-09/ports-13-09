--- net/dns/host_resolver_cache.cc.orig	2023-08-17 07:33:31 UTC
+++ net/dns/host_resolver_cache.cc
@@ -159,7 +159,11 @@ void HostResolverCache::Set(
 
   std::string domain_name = result->domain_name();
   entries_.emplace(
+#if defined(__clang__) && (__clang_major__ >= 16)
       Key(std::move(domain_name), network_anonymization_key),
+#else
+      Key({std::move(domain_name), network_anonymization_key}),
+#endif
       Entry(std::move(result), source, secure, staleness_generation_));
 
   if (entries_.size() > max_entries_) {
