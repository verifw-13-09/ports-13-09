PORTNAME=	kwrited
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 daemon listening for wall and write messages
WWW=		https://www.kde.org/plasma-desktop

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	coreaddons dbusaddons i18n notifications pty \
		ecm:build
USE_QT=		core dbus gui widgets \
		buildtools:build qmake:build

.include <bsd.port.mk>
