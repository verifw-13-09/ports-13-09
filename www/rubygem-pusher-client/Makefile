PORTNAME=	pusher-client
PORTVERSION=	0.6.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Client for consuming WebSockets from http://pusher.com
WWW=		https://github.com/pusher/pusher-websocket-ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-json>=0:devel/rubygem-json \
		rubygem-websocket>=1.0<2:www/rubygem-websocket

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
