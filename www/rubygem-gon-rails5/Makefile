PORTNAME=	gon
PORTVERSION=	6.2.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Framework to pass data to JS easily
WWW=		https://github.com/gazay/gon

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-actionpack5>=3.0:www/rubygem-actionpack5 \
		rubygem-multi_json>=0:devel/rubygem-multi_json \
		rubygem-request_store>=1.0:devel/rubygem-request_store

USES=		cpe gem
CPE_VENDOR=	${PORTNAME}_project

NO_ARCH=	yes

.include <bsd.port.mk>
