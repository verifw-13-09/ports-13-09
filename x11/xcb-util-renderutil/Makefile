PORTNAME=	xcb-util-renderutil
PORTVERSION=	0.3.10
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Convenience functions for the Render extension
WWW=		https://xcb.freedesktop.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libxcb-util.so:x11/xcb-util

USES=		gmake tar:xz xorg xorg-cat:lib
USE_XORG=	xcb
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e \
		's|$${libdir}/pkgconfig|$${prefix}/libdata/pkgconfig|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
