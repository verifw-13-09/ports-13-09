PORTNAME=	debugger-xml
PORTVERSION=	0.4.1
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XML interface for rubygem-debugger
WWW=		https://github.com/astashov/debugger-xml

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-builder>=2.0.0:devel/rubygem-builder \
		rubygem-byebug>=0:devel/rubygem-byebug

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/rdebug-ide bin/rdebug-vim

.include <bsd.port.mk>
