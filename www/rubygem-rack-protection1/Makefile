PORTNAME=	rack-protection
PORTVERSION=	1.5.5
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Collection of Rack middleware to protect against opportunistic attack
WWW=		https://github.com/sinatra/rack-protection/tree/stable-1.5

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/License

RUN_DEPENDS=	rubygem-rack>=0,3:www/rubygem-rack

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
