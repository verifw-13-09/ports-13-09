PORTNAME=	ntimed
PORTVERSION=	0.0.2015.01.30
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Network time synchronization client
WWW=		https://github.com/bsdphk/Ntimed

LICENSE=	BSD2CLAUSE

USE_RC_SUBR=	ntimed

USE_GITHUB=	yes
GH_ACCOUNT=	bsdphk
GH_PROJECT=	Ntimed
GH_TAGNAME=	db0abbb

PLIST_FILES=	sbin/ntimed-client

do-configure:
	cd ${WRKSRC} && ${SH} configure

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ntimed-client ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
