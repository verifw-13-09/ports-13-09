PORTNAME=	popup
PORTVERSION=	0.5
PORTREVISION=	12
CATEGORIES=	textproc education gnustep
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/Popup-${PORTVERSION}pre1
DISTNAME=	Popup-${PORTVERSION}pre1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interactive learning aid for pairs of words
WWW=		http://popup.sourceforge.net/

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Popup.app/Popup

.include <bsd.port.mk>
