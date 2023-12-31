--- components/supervised_user/core/browser/supervised_user_service.cc.orig	2023-08-18 10:26:52 UTC
+++ components/supervised_user/core/browser/supervised_user_service.cc
@@ -70,7 +70,7 @@ void SupervisedUserService::Init() {
   supervised_user::FirstTimeInterstitialBannerState banner_state =
       static_cast<supervised_user::FirstTimeInterstitialBannerState>(
           user_prefs_->GetInteger(prefs::kFirstTimeInterstitialBannerState));
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (supervised_user::CanDisplayFirstTimeInterstitialBanner()) {
     if (banner_state ==
             supervised_user::FirstTimeInterstitialBannerState::kUnknown &&
