PORTNAME=	visualization.fishbmc
PORTVERSION=	20.2.0
DISTVERSIONSUFFIX=	-Nexus
PORTREVISION=	1
CATEGORIES=	multimedia

MAINTAINER=	rozhuk.im@gmail.com
COMMENT=	Fische visualizer for Kodi
WWW=		https://github.com/xbmc/visualization.fishbmc

LICENSE=	GPLv2+

BUILD_DEPENDS=	glm>0:math/glm

USES=		cmake localbase compiler:c++14-lang gl kodi
USE_CXXSTD=	c++14
USE_GITHUB=	yes
GH_ACCOUNT=	xbmc
USE_GL=		egl gl glu

PLIST_SUB=	SOVERSION=${PORTVERSION}

CMAKE_ARGS=	-DADDONS_TO_BUILD=${PORTNAME}

.include <bsd.port.mk>
