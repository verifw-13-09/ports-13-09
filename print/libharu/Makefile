PORTNAME=	libharu
DISTVERSIONPREFIX=	v
DISTVERSION=	2.4.3
CATEGORIES=	print
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Haru Free PDF Library
WWW=		http://libharu.org/

LICENSE=	ZLIB

LIB_DEPENDS=	libpng.so:graphics/png

USES=		cmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes

OPTIONS_DEFINE=	EXAMPLES

SOVERSION=	2
PLIST_SUB+=	SOVERSION=${SOVERSION}
PORTEXAMPLES=	*

EXAMPLES_CMAKE_ON=	-DLIBHPDF_EXAMPLES:BOOL=ON  \
			-DEXAMPLESDIR:STRING=share/examples/${PORTNAME}

post-install:
	${LN} -s libhpdf.so ${STAGEDIR}${PREFIX}/lib/libhpdf.so.${SOVERSION}

.include <bsd.port.mk>
