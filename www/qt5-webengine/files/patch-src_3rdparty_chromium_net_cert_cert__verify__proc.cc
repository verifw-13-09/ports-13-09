--- src/3rdparty/chromium/net/cert/cert_verify_proc.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/net/cert/cert_verify_proc.cc
@@ -493,7 +493,7 @@ base::Value CertVerifyParams(X509Certificate* cert,
 
 }  // namespace
 
-#if !(defined(OS_FUCHSIA) || defined(OS_LINUX) || defined(OS_CHROMEOS))
+#if !(defined(OS_FUCHSIA) || defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD))
 // static
 scoped_refptr<CertVerifyProc> CertVerifyProc::CreateSystemVerifyProc(
     scoped_refptr<CertNetFetcher> cert_net_fetcher) {
