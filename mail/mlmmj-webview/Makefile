PORTNAME=	mlmmj-webview
PORTVERSION=	0.0.6
CATEGORIES=	mail www
MASTER_SITES=	https://codeberg.org/bapt/${PORTNAME}/archive/${DISTVERSIONFULL}${EXTRACT_SUFX}?dummy=/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Tiny web frontend for mlmmj
WWW=		https://codeberg.org/bapt/mlmmj-webview

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libkcgi.a:www/kcgi

USES=		pkgconfig
WRKSRC=		${WRKDIR}/${PORTNAME}

HAS_CONFIGURE=	yes

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
