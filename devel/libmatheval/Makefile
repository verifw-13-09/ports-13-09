PORTNAME=	libmatheval
PORTVERSION=	1.1.11
PORTREVISION=	5
CATEGORIES=	devel math
MASTER_SITES=	GNU

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Library to evaluate mathematical functions
WWW=		https://www.gnu.org/software/libmatheval/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	flex>=2.5.39_1:textproc/flex

USES=		guile:1.8 libtool localbase makeinfo \
		pathfix
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LEXLIB=-lfl MAKEINFO="${MAKEINFO} --no-split" \
		ac_cv_type_scm_t_bits=yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

INFO=		libmatheval

post-patch:
	${RM} ${WRKSRC}/doc/libmatheval.info

.include <bsd.port.mk>
