PORTNAME=	libffi
PORTVERSION=	3.0.13
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	ftp://sourceware.org/pub/libffi/
PKGNAMEPREFIX=	mingw32-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The libffi library cross-compiled for MinGW32
WWW=		http://sources.redhat.com/libffi/

BUILD_DEPENDS=	${PKGNAMEPREFIX}gcc:devel/${PKGNAMEPREFIX}gcc \
		${LOCALBASE}/mingw32/include/stdlib.h:devel/${PKGNAMEPREFIX}bin-msvcrt

SSP_UNSAFE=	fails to link
GNU_CONFIGURE=	yes
GNU_CONFIGURE_PREFIX=	${PREFIX}/mingw32
CONFIGURE_ARGS=	--host="mingw32" --enable-shared
CC=		${PKGNAMEPREFIX}gcc
CFLAGS=		-O2	# Override CFLAGS for a cross-build
USES=		cpe libtool
CPE_VENDOR=	${PORTNAME}_project
PLIST_SUB=	PORTVERSION=${PORTVERSION}

post-patch:
	${REINPLACE_CMD} -e 's,^INFO_DEPS[ \t]*=,#&,' \
	                 -e '/^SUBDIRS[ \t]*=/s, man$$,,' \
	                 ${WRKSRC}/Makefile.in

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/mingw32/include
	${INSTALL_DATA} \
		${STAGEDIR}${PREFIX}/mingw32/lib/libffi-${PORTVERSION}/include/*.h \
		${STAGEDIR}${PREFIX}/mingw32/include/

.include <bsd.port.mk>
