PORTNAME=	openzwave
PORTVERSION=	1.6.${VERSION_REV}
PORTREVISION=	1
CATEGORIES=	comms
PKGNAMESUFFIX=	-devel

MAINTAINER=	kiwi@oav.net
COMMENT=	Open-source interface to Z-Wave networks
WWW=		https://code.google.com/p/open-zwave/

LICENSE=	LGPL20

DEPRECATED=	Upstream no longer maintained, indicates to move to openzwave JS instead
EXPIRATION_DATE=2023-12-28

USES=		compiler:c++11-lang gmake tar:bz2 iconv pkgconfig

# Manually update this when makefile is updated
# echo $(git describe --long --tags --dirty 2>/dev/null | sed s/^v//) | awk '{split($$0,a,"-"); print a[2]}'
VERSION_REV=	1061

USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	OpenZWave
GH_PROJECT=	open-zwave
GH_TAGNAME=	14f2ba74
MAKE_ARGS=	VERSION_REV=${VERSION_REV} LIBDIR=${WRKSRC} docdir=${DOCSDIR} CXX=${CXX}

CONFLICTS_INSTALL=	openzwave # bin/MinOZW

OPTIONS_DEFINE=	DOXYGEN DOCS
OPTIONS_SUB=	yes

DOXYGEN_DESC=	Build docs (requires doxygen + graphviz)
DOXYGEN_BUILD_DEPENDS=	dot:graphics/graphviz \
			doxygen:devel/doxygen
DOXYGEN_PORTDOCS=	*

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libopenzwave.so.1.6
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/MinOZW

post-install-DOXYGEN-on:
	${RM} ${STAGEDIR}${DOCSDIR}/Doxyfile.in

.include <bsd.port.mk>
