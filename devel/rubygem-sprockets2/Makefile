PORTNAME=	sprockets
PORTVERSION=	2.12.5
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	2

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library that preprocesses and concatenates JavaScript files
WWW=		https://github.com/rails/sprockets

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-hike1>=1.2,1<2,1:devel/rubygem-hike1 \
		rubygem-multi_json>=1.0<2:devel/rubygem-multi_json \
		rubygem-rack16>=1.0<2:www/rubygem-rack16 \
		rubygem-tilt1>=1.1<2:devel/rubygem-tilt1

USES=		cpe gem
CPE_VENDOR=	${PORTNAME}_project

NO_ARCH=	yes

PLIST_FILES=	bin/sprockets

PORTSCOUT=	limit:^2\.

.include <bsd.port.mk>
