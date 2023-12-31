https://bugs.gentoo.org/887033
https://invent.kde.org/sdk/heaptrack/-/commit/de3174aa1d1293636079473ff693d9a274a093a9

From de3174aa1d1293636079473ff693d9a274a093a9 Mon Sep 17 00:00:00 2001
From: Heiko Becker <heiko.becker@kde.org>
Date: Fri, 16 Dec 2022 00:01:15 +0100
Subject: [PATCH] Add missing include

This fixes the build with boost 1.81.0. <array> was included by one of
the boost headers, however, it's no longer included as of Boost 1.81.0.
--- src/analyze/gui/histogrammodel.h
+++ src/analyze/gui/histogrammodel.h
@@ -9,6 +9,8 @@
 
 #include <QAbstractTableModel>
 
+#include <array>
+
 #include "treemodel.h"
 
 struct HistogramColumn
-- 
GitLab
