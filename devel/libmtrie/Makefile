PORTNAME=	libmtrie
PORTVERSION=	1.0.3
CATEGORIES=	devel
MASTER_SITES=	http://rodrigo.osorio.free.fr/freebsd/distfiles/ \
		http://people.freebsd.org/~alfred/sources/${PORTNAME}/

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Library to build an IP-netmask based mtrie

LICENSE=	BSD2CLAUSE

USES=		tar:bzip2 uidfix
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

.if defined(NO_PROFILE) || ( ${OPSYS} == FreeBSD && ${OSVERSION} >= 1400079 )
PLIST_SUB+=	HURRRR="@comment "
.else
PLIST_SUB+=	HURRRR=""
.endif

.include <bsd.port.post.mk>
