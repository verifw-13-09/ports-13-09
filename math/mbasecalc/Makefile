PORTNAME=	mbasecalc
PORTVERSION=	1.1
PORTREVISION=	8
CATEGORIES=	math
MASTER_SITES=	http://www.muquit.com/muquit/software/mbasecalc/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple calculator program inspired by basecalc
WWW=		https://www.muquit.com/muquit/software/mbasecalc/mbasecalc.html

LICENSE=	GPLv2

LIB_DEPENDS=	libfltk.so:x11-toolkits/fltk

USE_CXXSTD=	c++14

MAKE_ARGS=	CC="${CC}" CXX="${CXX}" CFLAGS="${CPPFLAGS} ${CXXFLAGS}" \
		LIBS="${LDFLAGS}"

CPPFLAGS+=	$$(fltk-config --cflags) -DSYS_UNIX
LDFLAGS+=	$$(fltk-config --ldflags)

PLIST_FILES=	bin/mbasecalc

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} mbasecalc ${STAGEDIR}${PREFIX}/bin)

.include <bsd.port.mk>
