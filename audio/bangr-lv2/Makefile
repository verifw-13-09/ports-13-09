PORTNAME=	bangr
DISTVERSION=	1.6.2
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Multi-dimensional dynamicly distorted staggered multi-bandpass
WWW=		https://github.com/sjaehn/BAngr

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	lv2>0:audio/lv2 \
		cmake:devel/cmake-core
LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		compiler:c++11-lang gmake gnome pkgconfig xorg
USE_GNOME=	cairo
USE_XORG=	x11

USE_GITHUB=	yes
GH_ACCOUNT=	sjaehn
GH_PROJECT=	BAngr
GH_TUPLE=	sjaehn:BWidgets:9416adc:BWidgets/src/BWidgets

MAKEFILE=	makefile

PLIST_FILES=	lib/lv2/BAngr.lv2/BAngr.so \
		lib/lv2/BAngr.lv2/BAngr.ttl \
		lib/lv2/BAngr.lv2/BAngrGUI.so \
		lib/lv2/BAngr.lv2/inc/surface.png \
		lib/lv2/BAngr.lv2/manifest.ttl

post-install:
	@cd ${STAGEDIR}${PREFIX}/lib/lv2/BAngr.lv2 && \
		${STRIP_CMD} BAngr.so BAngrGUI.so
	@${RM} ${STAGEDIR}${PREFIX}/lib/lv2/BAngr.lv2/LICENSE

.include <bsd.port.mk>
